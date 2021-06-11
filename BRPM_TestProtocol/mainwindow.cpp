#include "mainwindow.h"
#include <QMessageBox>
#include <QCanBus>
#include <QCanBusFrame>
#include <QDebug>
#include <unistd.h>

static const int TMR = 40;// 50;//1000

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), BRPM_encoder( new BRPM_Encoder ), PA_events_cntr(0), counterPA(0)
{
	setupUi(this);

    WirelessOutputs wout;
    WirelessInputs win;
    qDebug() << Q_FUNC_INFO << sizeof(wout) << "+" << sizeof(win) << "=" << (sizeof(wout)+sizeof(win));
//    ::exit(0);

    sync_tmr.setInterval(/*50*/TMR);
    connect(&sync_tmr, SIGNAL(timeout()), SLOT(sync()));
    sync_tmr.start();//russl

    sleep(1);//russl

    repeat_tmr.setInterval(/*50*/TMR);bzero(reinterpret_cast<void*>(&event_accum), sizeof(uint8_t));
	connect(&repeat_tmr, SIGNAL(timeout()), SLOT(sendVarData()));

    sendPA_tmr.setInterval(/*50*/TMR);
    connect(&sendPA_tmr, SIGNAL(timeout()), SLOT(on_pushButton_send_PA_clicked()));

    //Блок пока не инит
    tabWidget->setTabEnabled(0, false);

    //Скопировать номер состава
    bool ok;
    lineEdit_id_PA->setText(QString::number(lineEdit_id_train->text().toUInt(&ok, 16), 16));

    //Считать события ПА
    signalMapper = new QSignalMapper(this);
    ev_buttons << pushButton_Doors_1 << pushButton_Doors_2 << pushButton_Doors_3 << pushButton_VZP << pushButton_GrafReq;
    PA_events_idx << Doors_1_event << Doors_2_event << Doors_3_event << VZP_event << GrafReq_event;
    foreach (QPushButton* pb, ev_buttons)
    {
        connect(pb, SIGNAL(clicked(bool)), signalMapper, SLOT(map()));
        signalMapper->setMapping(pb, pb->objectName());
    }
    connect(signalMapper, SIGNAL(mapped(QString)), this, SLOT(ev_PA_clicked(QString)));

    //delete russl

    //sync_tmr.setInterval(/*50*/TMR);
    //connect(&sync_tmr, SIGNAL(timeout()), SLOT(sync()));
    //sync_tmr.start();

    memset(m_countPrintf,0,sizeof(m_countPrintf)/sizeof(m_countPrintf[0]));//russl
}

void MainWindow::ev_PA_clicked(QString objectName)
{
//    qDebug() << Q_FUNC_INFO << objectName;

    RadioOutputs::PAEventsType ev;
    bzero(reinterpret_cast<void*>(&ev), sizeof(uint8_t));

    QPushButton* pb = 0;
    //Кто нажат-отжат
    foreach (QPushButton* b, ev_buttons)
       if(b->objectName() == objectName)
           pb = b;

    //Уст-ть соотв бит события
    if(pb == pushButton_Doors_1)
        ev.Doors_auto = pb->isChecked();
    if(pb == pushButton_Doors_2)
        ev.Doors_m_open = pb->isChecked();
    if(pb == pushButton_Doors_3)
        ev.Doors_m_close = pb->isChecked();
    if(pb == pushButton_VZP)
        ev.VZP = pb->isChecked();
    if(pb == pushButton_GrafReq)
        ev.GrafReq = pb->isChecked();

    //Добавить текущее собитие в аккумулятор
    uint8_t* event_byte = reinterpret_cast<uint8_t*>(&event_accum);
    uint8_t* ev_byte = reinterpret_cast<uint8_t*>(&ev);
    *event_byte |= *ev_byte;

    PA_events_cntr++;

    //Добавить в очередь отправки
    cntr_event_queue.push_back(std::make_pair(PA_events_cntr, event_accum));

//    RadioOutputs::PAEventsType e;
//    e = cntr_event_queue.at(0).second;

    QString queue_nums;
    for(int i=0; i < cntr_event_queue.size(); i++)
        queue_nums += (QString::number(cntr_event_queue.at(i).first) + " ");
    spinBox_eventCntr_queue->setSpecialValueText("(" + queue_nums + ")");
    spinBox_eventCntr->setValue(PA_events_cntr);
}

void MainWindow::on_pushButton_InitCan_clicked()
{
	iface = comboBox_ifaces->currentText();
	pushButton_InitCan->setEnabled(false);
	comboBox_ifaces->setEnabled(false);
	connectDevice();
    tabWidget->setTabEnabled(0, true);
}

/*!< Подключение CAN */
void MainWindow::connectDevice()
{
	QString errorString;
	m_canDevice = QCanBus::instance()->createDevice(QStringLiteral("socketcan"), iface.toLatin1(), &errorString);
	if (!m_canDevice)
	{
		QMessageBox::critical(nullptr, tr("Ошибка создания CAN устройства"), iface + ": " + errorString);
		exit(EXIT_FAILURE);
	}

	connect(m_canDevice, &QCanBusDevice::framesReceived, this, &MainWindow::processReceivedFrames);

	//Настройка интерфейса
	//Скорость
	m_canDevice->setConfigurationParameter(QCanBusDevice::BitRateKey, 250000);
	//
	m_canDevice->setConfigurationParameter(QCanBusDevice::ReceiveOwnKey, true);

	if (!m_canDevice->connectDevice())
	{
		QMessageBox::critical(nullptr, tr("Ошибка подключения к CAN"), iface + ": " + m_canDevice->errorString());
		delete m_canDevice;
		m_canDevice = nullptr;
		exit(EXIT_FAILURE);
	} else
	{
		;
	}

	//
	plainTextEdit_out->setEnabled(true);
	plainTextEdit_in->setEnabled(true);
}

void MainWindow::on_pushButton_Init_clicked()
{
	bool ok;
	BRPM_encoder->init(checkBox_cmdOn->isChecked(), BRPM_Encoder::BRP_Channel(spinBox_channel->value()), lineEdit_id_train->text().toUInt(&ok, 16));
    //Скопировать номер состава
    lineEdit_id_PA->setText(QString::number(lineEdit_id_train->text().toUInt(&ok, 16), 16));

	frames2send = BRPM_encoder->getFrames();

	sendFrames(frames2send);
    sendFrames(frames2send);
    sendFrames(frames2send);
    sendFrames(frames2send);
}

void MainWindow::on_pushButton_Imit_BRP_clicked()
{
	pushButton_clicked(spinBox_brp, BRPM_Encoder::BRP_MCP_CP);
}

void MainWindow::pushButton_clicked(QSpinBox* startBox, BRPM_Encoder::MCP_BRP_MessType type)
{
	uint8_t lenght = type == BRPM_Encoder::MCP_BRP_Init ? BRPM_Encoder::MCP_BRP_Init_lenght :
					type == BRPM_Encoder::MCP_BRP_State ? BRPM_Encoder::MCP_BRP_State_lenght :
					type == BRPM_Encoder::MCP_BRP_Req ? BRPM_Encoder::MCP_BRP_Req_lenght :
					type == BRPM_Encoder::MCP_BRP_Ack ? BRPM_Encoder::MCP_BRP_Ack_lenght :
						(spinBox_brp_n_bytes->value() > BRPM_Encoder::BRP_MCP_CP_max_lenght ? BRPM_Encoder::BRP_MCP_CP_max_lenght : spinBox_brp_n_bytes->value());
	std::vector<uint8_t> data;
	for (int i = startBox->value(); i < (startBox->value() + lenght); i++)
	{
		data.push_back(i);
	}

	BRPM_encoder->update(type, data);
	frames2send = BRPM_encoder->getFrames();

	sendFrames(frames2send);
}

void MainWindow::on_pushButton_Send_clicked(bool checked)
{
	pushButton_Send->setText(checked ? tr("Остановить передачу") : tr("Начать передачу"));

	if(checkBox_repeat->isChecked())
	{
		if(checked)
			repeat_tmr.start();
		else
			repeat_tmr.stop();
	} else
		if(checked)
			sendVarData();
}

void MainWindow::sendVarData()
{
	uint8_t lenght = spinBox_N->value();

	std::vector<uint8_t> data;
	for (int i = spinBox_from->value(); i < (spinBox_from->value() + lenght); i++)
		data.push_back(i);

	//Счетчик в конце данных
	static quint8 sent_cntr;
	data.push_back(sent_cntr++);

	BRPM_encoder->update(BRPM_Encoder::MCP_BRP_VarLen, data);
	frames2send = BRPM_encoder->getFrames();

	sendFrames(frames2send);
}

void MainWindow::on_pushButton_start_clicked(bool checked)
{
    pushButton_start->setText(checked ? tr("СТОП") : tr("СТАРТ"));
    pushButton_send_PA->setEnabled(!checked);

    if(checked)
        sendPA_tmr.start();
    else
        sendPA_tmr.stop();

}

void MainWindow::on_pushButton_send_PA_clicked()
{
    RadioOutputs radioOutputs;

    bool ok;
    radioOutputs.protocol = spinBox_protocol_PA->value();
    radioOutputs.id = lineEdit_id_PA->text().toInt(&ok,16);
    radioOutputs.stationCode = spinBox_stationCode_PA->value();
    spinBox_PACounter->setValue(++counterPA);
    radioOutputs.PACounter = spinBox_PACounter->value();
    radioOutputs.way = spinBox_way_PA->value();
    radioOutputs.NData = spinBox_NData_PA->value();
    //
    radioOutputs.mode = comboBox_mode->currentIndex() + 1;
//    radioOutputs.eventCntr = spinBox_eventCntr->value();

    radioOutputs.cduRoute = spinBox_cduRoute_PA->value();
    radioOutputs.cduTrain = spinBox_cduTrain_PA->value();
//    spinBox_CPCounter_PA->setValue(spinBox_CPCounter_SA->value());  //копировать принятый счетчик
//    radioOutputs.CPCounter = spinBox_CPCounter_PA->value();
    radioOutputs.CPCounter = spinBox_CPCounter_PA->value();
    //
    bzero(reinterpret_cast<void*>(&radioOutputs.POS), sizeof(radioOutputs.POS));
    radioOutputs.POS.stopped = pushButton_stopped->isChecked();
    radioOutputs.POS.OPV = pushButton_OPV->isChecked();
    bzero(reinterpret_cast<void*>(&radioOutputs.KDR), sizeof(radioOutputs.KDR));
    radioOutputs.KDR.MoveDir = pushButton_MoveDir->isChecked();
    radioOutputs.KDR.DoorCtrl = pushButton_DoorCtrl->isChecked();
    radioOutputs.KDR.transit = pushButton_transit->isChecked();
    bzero(reinterpret_cast<void*>(&radioOutputs.PAEvents), sizeof(radioOutputs.PAEvents));

    if(!cntr_event_queue.empty())
    {
        //Передавать накопленные события с последним счетчиком
        radioOutputs.PAEvents = cntr_event_queue.back().second;
        //И соотв счетчик
        radioOutputs.eventCntr = cntr_event_queue.back().first;

//        RadioOutputs::PAEventsType e;
//        e = cntr_event_queue.at(0).second;

    } else
    {
        //Обнулить события
        bzero(reinterpret_cast<void*>(&radioOutputs.PAEvents), sizeof(uint8_t));

        radioOutputs.eventCntr = spinBox_eventCntr->value();

        radioOutputs.PAEvents.Doors_auto = pushButton_Doors_1->isChecked();
        radioOutputs.PAEvents.Doors_m_open = pushButton_Doors_2->isChecked();
        radioOutputs.PAEvents.Doors_m_close = pushButton_Doors_3->isChecked();
        radioOutputs.PAEvents.VZP = pushButton_VZP->isChecked();
        radioOutputs.PAEvents.GrafReq = pushButton_GrafReq->isChecked();
    }

    //
//    qDebug() << Q_FUNC_INFO << "radioOutputs.CPCounter" << radioOutputs.CPCounter << hex << "PAEvents" << *reinterpret_cast<uint8_t*>(&radioOutputs.PAEvents);

    //Формирование данных для передачи БРП
    //Константный заголовок
    int header_sz = sizeof(radioOutputs.protocol) + sizeof(radioOutputs.id)+ sizeof(radioOutputs.stationCode)
            + sizeof(radioOutputs.PACounter)+ sizeof(radioOutputs.way)+ sizeof(radioOutputs.NData);
    //Общее кол-во байтов
    int data_size = header_sz + radioOutputs.NData;

    //Копирование данных в вектор
    uint8_t* p_struct = reinterpret_cast<uint8_t*>(&radioOutputs);
    std::vector<uint8_t> data;
    for (int i = 0; i < data_size; i++)
        data.push_back(p_struct[i]);

    BRPM_encoder->update(BRPM_Encoder::MCP_BRP_VarLen, data);
    frames2send = BRPM_encoder->getFrames();

    sendFrames(frames2send);

    label_PA_cntr->setText(QString::number(BRPM_encoder->getSentNmessage()));
}

void MainWindow::sync()
{
    static QCanBusFrame frame;

    //Послать синхру
    if(checkBox_sync->isChecked()&& checkBox_sync->isEnabled())
    {
        frame.setFrameId(0x80);
        frame.setPayload(QByteArray());
        m_canDevice->writeFrame(frame);
        //Вывод
        can_frame cf;
        cf.can_id = frame.frameId();
        cf.can_dlc = frame.payload().size();
        if(checkBox_nosync->isChecked())
            printFrame(cf);
    }
}


/*! ИМИТАЦИЯ */
void MainWindow::on_pushButton_imit_clicked(bool checked)
{
    if(!checked)
        return;

    spinBox_protocol_SA->setValue(2);
    dateTimeEdit_timeCurrent->setDateTime(QDateTime::currentDateTime());
    spinBox_stationCode_SA->setValue(115);

    //russl
    spinBox_stationCode_SA_COUNT->setValue(0xff);
    m_countPrintf[3]=0xff;//russl

    spinBox_cduCounter->setValue(1);
    spinBox_way_SA->setValue(3);
    spinBox_NData_SA->setValue(35);
    spinBox_deadlock->setValue(4);
    spinBox_SAAck->setValue(5);
    spinBox_CPCounter_SA->setValue(6);
    lineEdit_id_SA->setText(lineEdit_id_PA->text());
    spinBox_cduRoute_SA->setValue(0x3344);
    spinBox_cduTrain_SA->setValue(0x5566);
    spinBox_turnStation->setValue(0x7788);
    dateTimeEdit_timeDepNeeded->setDateTime(QDateTime::currentDateTime());
    dateTimeEdit_timeDepSched->setDateTime(QDateTime::currentDateTime());
    dateTimeEdit_timeArvNeeded->setDateTime(QDateTime::currentDateTime());
    dateTimeEdit_timeArvSched->setDateTime(QDateTime::currentDateTime());
    spinBox_CPway->setValue(3);
}

/*! ИМИТАЦИЯ */
void MainWindow::on_pushButton_send_SA_clicked()
{

    spinBox_stationCode_SA_COUNT->setValue(0);//russl
    m_countPrintf[3]=0;//russl

    radioInputsImit.protocol = spinBox_protocol_SA->value();
    radioInputsImit.timeCurrent = dateTimeEdit_timeCurrent->dateTime().toSecsSinceEpoch() + 3*60*60;
    qDebug() << Q_FUNC_INFO <<  radioInputsImit.timeCurrent;
    radioInputsImit.stationCode = spinBox_stationCode_SA->value();

    radioInputsImit.cduCounter = spinBox_cduCounter->value();
    radioInputsImit.way = spinBox_way_SA->value();
    radioInputsImit.NData = spinBox_NData_SA->value();
    //
    bzero(reinterpret_cast<void*>(&radioInputsImit.KRU), sizeof(radioInputsImit.KRU));

    radioInputsImit.KRU.enModes = comboBox_enModes->currentIndex();
    radioInputsImit.KRU.OPVinfo = comboBox_OPVinfo->currentIndex();
    radioInputsImit.KRU.AVInfo = comboBox_AVInfo->currentIndex();
    radioInputsImit.KRU.ReadyGo = comboBox_ReadyGo->currentIndex();
    radioInputsImit.KRU.exactStop = comboBox_exactstop->currentIndex();

    //
    bzero(reinterpret_cast<void*>(&radioInputsImit.DAC), sizeof(radioInputsImit.DAC));

    radioInputsImit.DAC.DoorState = comboBox_DoorState->currentIndex();
    radioInputsImit.DAC.PDS = comboBox_PDS->currentIndex();
    radioInputsImit.DAC.ArriveCtrl = comboBox_ArriveCtrl->currentIndex();
    radioInputsImit.DAC.DoorGap = comboBox_DoorGap->currentIndex();
    radioInputsImit.DAC.SetOk = comboBox_SetOk->currentIndex();
    radioInputsImit.DAC.Mode = comboBox_Mode->currentIndex();


//    uint8_t DAC = *reinterpret_cast<uint8_t*>(&radioInputsImit.DAC);

    //
    radioInputsImit.deadlock = spinBox_deadlock->value();
    radioInputsImit.SAAck = spinBox_SAAck->value(); //counterPA;
    radioInputsImit.CPCounter = spinBox_CPCounter_SA->value();
    bool ok;
    radioInputsImit.id = lineEdit_id_SA->text().toInt(&ok, 16);
    radioInputsImit.cduRoute = spinBox_cduRoute_SA->value();
    radioInputsImit.cduTrain = spinBox_cduTrain_SA->value();
    radioInputsImit.turnStation = spinBox_turnStation->value();
    radioInputsImit.timeDepNeeded = dateTimeEdit_timeDepNeeded->dateTime().toSecsSinceEpoch() + 3*60*60;
    radioInputsImit.timeDepSched = dateTimeEdit_timeDepSched->dateTime().toSecsSinceEpoch() + 4*60*60;
    radioInputsImit.timeArvNeeded = dateTimeEdit_timeArvNeeded->dateTime().toSecsSinceEpoch() + 5*60*60;
    radioInputsImit.timeArvSched = dateTimeEdit_timeArvSched->dateTime().toSecsSinceEpoch() + 6*60*60;
    radioInputsImit.CPway = spinBox_CPway->value();

    //Формирование данных для передачи БРП
    //Константный заголовок
    int header_sz = sizeof(radioInputsImit.protocol) + sizeof(radioInputsImit.timeCurrent)+ sizeof(radioInputsImit.stationCode)
            + sizeof(radioInputsImit.cduCounter)+ sizeof(radioInputsImit.way)+ sizeof(radioInputsImit.NData);
    //Общее кол-во байтов
    int data_size = header_sz + radioInputsImit.NData;

    //Копирование данных в вектор
    uint8_t* p_struct = reinterpret_cast<uint8_t*>(&radioInputsImit);
    std::vector<uint8_t> data;
    for (int i = 0; i < data_size; i++)
        data.push_back(p_struct[i]);

    BRPM_encoder->update(BRPM_Encoder::BRP_MCP_CP, data);
    frames2send = BRPM_encoder->getFrames();

    sendFrames(frames2send);

}

void MainWindow::sendFrames(const std::vector<can_frame>& frames)
{
	static QCanBusFrame frame;

//    //Послать синхру
//    if(checkBox_sync->isChecked())
//    {
//        frame.setFrameId(0x80);
//        frame.setPayload(QByteArray());
//        m_canDevice->writeFrame(frame);
//        //Вывод
//        can_frame cf;
//        cf.can_id = frame.frameId();
//        cf.can_dlc = frame.payload().size();
//        printFrame(cf);
//    }

	for( std::size_t i = 0; i < frames.size(); i++)
	{
		frame.setFrameId(frames.at(i).can_id);
		QByteArray ba((const char*)frames.at(i).data, frames.at(i).can_dlc);
		frame.setPayload(ba);

//        static int cntr;
//            if(++cntr % 10)
                m_canDevice->writeFrame(frame);

		//Вывод
		printFrame(frames.at(i));
	}
}

/// Вывод фрейма в отладочное окно
void MainWindow::printFrame(const can_frame& cf)
{
	std::stringstream ss;
	ss << std::hex << (uint16_t)cf.can_id;
	ss << " [" << std::dec << +cf.can_dlc << "] ";
	for(int i = 0; i < cf.can_dlc; i++)
		ss << std::hex << +(uint8_t)cf.data[i] << " ";
	std::string str(ss.str());
	ss.str("");
	ss.clear();

	plainTextEdit_out->appendPlainText(str.c_str());

    if(m_countPrintf[0]>100)
    {
        plainTextEdit_out->clear();//russl
        m_countPrintf[0]=0;
    }

    m_countPrintf[0]++;
}

/*!< Обработка CAN-сообщений */
void MainWindow::processReceivedFrames()
{
	if (!m_canDevice)
		return;

	while (m_canDevice->framesAvailable())
	{
		const QCanBusFrame frame = m_canDevice->readFrame();

		if (frame.frameType() == QCanBusFrame::ErrorFrame)
			qDebug() << Q_FUNC_INFO << "Error frame:" << frame.error();

		//Конвертация QCanBusFrame в can_frame
		can_frame cf;
		cf.can_id	= frame.frameId();
		cf.can_dlc	= frame.payload().size();
		for(int i = 0; i < frame.payload().size(); i++)
			cf.data[i] = frame.payload().at(i);

        //Ответ от БРПМ с диагностикой
        if(cf.can_id == 0x1BD && checkBox_nosync->isChecked())
        {
            //Payload
            //1
            //Вкл./Выкл. передатчик РК
            bool cmdOn = cf.data[0] & 0x80;
            checkBox_cmdOn_ans->setChecked(cmdOn);
            //Номер канала в РК
            uint8_t channel = cf.data[0] & 0x7F;
            spinBox_channel_ans->setValue(channel);
            //2
            //Уровень принимаемого сигнала по РК. Если 0, то связи нет.
            int8_t level = cf.data[1];
            spinBox_level->setEnabled(level);
            spinBox_level->setValue(level);
            //3
            //Код последней обнаруженной ошибки на CAN-шине
            uint8_t error_code = (cf.data[2] & 0x70) >> 4;
            spinBox_error_code->setValue(error_code);

            //...

            //4
            //Приём по РК прошёл с ошибкой
            bool rk_err_rcv = cf.data[5] & 0x08;
            checkBox_rk_err_rcv->setChecked(rk_err_rcv);
            //Признак успешной передачи по РК
            bool rk_succ_trans = cf.data[5] & 0x04;
            checkBox_rk_succ_trans->setChecked(rk_succ_trans);
            //Ошибки при обмене по SPI-шине
            bool spi_err = cf.data[5] & 0x02;
            checkBox_spi_err->setChecked(spi_err);
            //Наличие обмена по SPI-шине
            bool spi_exch = cf.data[5] & 0x01;
            checkBox_spi_exch->setChecked(spi_exch);

            //Counter
            static quint32 brp_counter;
            lineEdit_brpm_counter->setText(QString::number(brp_counter++, 16));
            if(brp_counter > 0xFFFF)
                brp_counter = 0;

            //Вывод
            printFrame(cf);
        }

        //Фильтр
        if(!BRPM_encoder->isInFrame(cf))
            continue;

//        qDebug() << Q_FUNC_INFO << "frame:" << hex << frame.frameId();

        //Вывод
        printFrame(cf);

		//Вывести полученные данные, если все собрано
		const std::vector<uint8_t>* data = BRPM_encoder->addInFrame(cf);
		if(data)
		{
            //Разбор полученных данных
            uint8_t* p = reinterpret_cast<uint8_t*>(&radioInputs);
            for(std::vector<uint8_t>::size_type i = 0; i < data->size(); i++)
                p[i] = data->at(i);

            spinBox_protocol_SA->setValue(radioInputs.protocol);
            dateTimeEdit_timeCurrent->setDateTime(QDateTime::fromSecsSinceEpoch(radioInputs.timeCurrent /*- 3*60*60*/));//russl

            spinBox_stationCode_SA->setValue(radioInputs.stationCode);

            if(radioInputs.stationCode==0)//russl
            {
                if(m_countPrintf[3]<254)
                {
                    m_countPrintf[3]++;
                }
                spinBox_stationCode_SA_COUNT->setValue(m_countPrintf[3]);
            }

            spinBox_cduCounter->setValue(radioInputs.cduCounter);
            spinBox_way_SA->setValue(radioInputs.way);
            spinBox_NData_SA->setValue(radioInputs.NData);
            spinBox_deadlock->setValue(radioInputs.deadlock);
            spinBox_SAAck->setValue(radioInputs.SAAck);

            //russl
            spinBox_CPCounter_SA->setValue(radioInputs.CPCounter);
            //russl
            counterPA = spinBox_CPCounter_SA->value();

            //russl
            spinBox_CPCounter_PA->setValue(counterPA);


            lineEdit_id_SA->setText(QString::number(radioInputs.id, 16));
            spinBox_cduRoute_SA->setValue(radioInputs.cduRoute);
            spinBox_cduTrain_SA->setValue(radioInputs.cduTrain);
            spinBox_turnStation->setValue(radioInputs.turnStation);
            dateTimeEdit_timeDepNeeded->setDateTime(QDateTime::fromSecsSinceEpoch(radioInputs.timeDepNeeded /*- 3*60*60*/));
            dateTimeEdit_timeDepSched->setDateTime(QDateTime::fromSecsSinceEpoch(radioInputs.timeDepSched /*- 3*60*60*/));
            dateTimeEdit_timeArvNeeded->setDateTime(QDateTime::fromSecsSinceEpoch(radioInputs.timeArvNeeded /*- 3*60*60*/));
            dateTimeEdit_timeArvSched->setDateTime(QDateTime::fromSecsSinceEpoch(radioInputs.timeArvSched /*- 3*60*60*/));
            spinBox_CPway->setValue(radioInputs.CPway);

            comboBox_enModes->setCurrentIndex(radioInputs.KRU.enModes);
            comboBox_OPVinfo->setCurrentIndex(radioInputs.KRU.OPVinfo);
            comboBox_AVInfo->setCurrentIndex(radioInputs.KRU.AVInfo);
            comboBox_ReadyGo->setCurrentIndex(radioInputs.KRU.ReadyGo);

            comboBox_DoorState->setCurrentIndex(radioInputs.DAC.DoorState);
            comboBox_PDS->setCurrentIndex(radioInputs.DAC.PDS);
            comboBox_ArriveCtrl->setCurrentIndex(radioInputs.DAC.ArriveCtrl);
            comboBox_DoorGap->setCurrentIndex(radioInputs.DAC.DoorGap);
            comboBox_SetOk->setCurrentIndex(radioInputs.DAC.SetOk);
            comboBox_Mode->setCurrentIndex(radioInputs.DAC.Mode);

            //
            static bool flash;
            label_SA->setStyleSheet((flash ^= true) ? "color: green;" : "color: black;");

            label_SA_cntr->setText(QString::number(BRPM_encoder->getRcvNmessage()));

            //
			plainTextEdit_in->appendPlainText(tr("Получено сообщение:"));
			for(std::size_t i = 0; i < data->size(); i++)
				plainTextEdit_in->appendPlainText("data[" +  QString::number(i) + "] = " + QString::number(data->at(i), 16));

			static uint8_t prev_last_byte(0);
			uint8_t last_byte = data->at(data->size()-1);
			if(last_byte == prev_last_byte)
				plainTextEdit_in->appendHtml(tr("<b>LAST BYTE THE SAME!</b>"));
			prev_last_byte = last_byte;

			static QDateTime prev_date(QDateTime::currentDateTime());
			plainTextEdit_in->appendPlainText(QString("Время: ") + QDateTime::currentDateTime().toString("hh:mm:ss.zzz"));
			QDateTime cur_date(QDateTime::currentDateTime());
			qint64 delta = cur_date.msecsTo(prev_date);
			prev_date = cur_date;
			plainTextEdit_in->appendPlainText(QString("delta(ms): ") + QString::number(delta));
			plainTextEdit_in->appendPlainText(tr("\n"));

            if(m_countPrintf[1]>10)
            {
                plainTextEdit_in->clear();//russl
                m_countPrintf[1]=0;
            }
            m_countPrintf[1]++;

            //Сброс переданных событий ПА, если квитировано сообщение со счетчиком событий, содержащее эти события
            if( !cntr_event_queue.empty() )
            {
                RadioOutputs::PAEventsType ack_events;
                bzero(reinterpret_cast<void*>(&ack_events), sizeof(uint8_t));
                int i;
                //Перебор очереди событий
                for( i = 0; i < cntr_event_queue.size(); i++)
                {
                    //Счетчик
                    uint8_t cntr = cntr_event_queue.at(i).first;
                    //Событие
                    ack_events = cntr_event_queue.at(i).second;

                    //Полученный счетчик от СА есть в очереди событий
                    if(spinBox_SAAck->value() == cntr)
                    {
                        qDebug() << Q_FUNC_INFO << "spinBox_SAAck->value()" << spinBox_SAAck->value();

                        //Заквитировано последнее(актуальное состояние событий)
                        if(cntr == cntr_event_queue.at(cntr_event_queue.size() - 1).first)
                        {
                            //Очистить очередь и выйти из перебора
                            bzero(reinterpret_cast<void*>(&ack_events), sizeof(uint8_t));
                            //Обновить акумулятор событий
                            event_accum = ack_events;
                            cntr_event_queue.clear();
                            break;
                        }

                        //Сбросить во всей очереди заквитированные события
                        for( int j = 0; j < cntr_event_queue.size(); j++)
                        {
                            cntr_event_queue[j].second.Doors_auto = ack_events.Doors_auto ? 0 : cntr_event_queue[j].second.Doors_auto;
                            cntr_event_queue[j].second.Doors_m_open = ack_events.Doors_m_open ? 0 : cntr_event_queue[j].second.Doors_m_open;
                            cntr_event_queue[j].second.Doors_m_close = ack_events.Doors_m_close ? 0 : cntr_event_queue[j].second.Doors_m_close;
                            cntr_event_queue[j].second.VZP = ack_events.VZP ? 0 : cntr_event_queue[j].second.VZP;
                            cntr_event_queue[j].second.GrafReq = ack_events.GrafReq ? 0 : cntr_event_queue[j].second.GrafReq;
                            RadioOutputs::PAEventsType evs;
                            evs = cntr_event_queue[j].second;
//                            qDebug() << Q_FUNC_INFO;
//                            //Удалить событие из очереди, если пустое( например, заквитировали не первое возникшее, а второе. Которое содержит и события из первого
//                            uint8_t e = *reinterpret_cast<uint8_t*>(&cntr_event_queue[j].second);
//                            if(!e)
//                                cntr_event_queue.erase(cntr_event_queue.begin() + j);
                        }

                        //Скопировать события для обработки в интерфейсе
                        ack_events = cntr_event_queue.at(cntr_event_queue.size() - 1).second;

                        //Обновить акумулятор событий
                        event_accum = ack_events;

                        //Удалить из очереди заквитированный счетчик
                        cntr_event_queue.erase(cntr_event_queue.begin() + i);
                        break;
                    }
                }
//                //Пришел левый счетчик
//                if( i == cntr_event_queue.size() )
//                    qDebug() << Q_FUNC_INFO << "Ack counter" << spinBox_SAAck->value() <<  "not found!";

                //Сбросить заквитированное событие в интерфейсе
                if(!ack_events.Doors_auto && !ack_events.Doors_m_open && !ack_events.Doors_m_close)
                    pushButton_Doors_0->setChecked(true);
                pushButton_Doors_1->setChecked(ack_events.Doors_auto);
                pushButton_Doors_2->setChecked(ack_events.Doors_m_open);
                pushButton_Doors_3->setChecked(ack_events.Doors_m_close);
                pushButton_VZP->setChecked(ack_events.VZP);
                pushButton_GrafReq->setChecked(ack_events.GrafReq);

//                uint8_t event_accum_byte = *reinterpret_cast<uint8_t*>(&event_accum);
//                uint8_t ack_events_byte = *reinterpret_cast<uint8_t*>(&ack_events);
//                qDebug() << Q_FUNC_INFO << hex << "event_accum" << event_accum_byte << "ack_events" << ack_events_byte;

                //
                QString queue_nums;
                for(int i=0; i < cntr_event_queue.size(); i++)
                    queue_nums += (QString::number(cntr_event_queue.at(i).first) + " ");
                spinBox_eventCntr_queue->setSpecialValueText("(" + queue_nums + ")");
                spinBox_eventCntr->setValue(PA_events_cntr);
            }
		}
	}
}

void MainWindow::on_pushButton_2_clicked()
{

}

