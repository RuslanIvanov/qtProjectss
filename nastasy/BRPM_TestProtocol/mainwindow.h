#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"

#include <QMainWindow>
#include <QCanBusDevice>
#include <QTimer>
#include "brpm_encoder.h"
#include <sstream>
#include <string>
#include <QString>
#include <QDateTime>
#include <QSignalMapper>
#include <vector>

#include "data.h"

class MainWindow :  public QMainWindow, public Ui::MainWindow
{
	Q_OBJECT

    enum PA_events_buttons_type
    {
        Doors_1_event,
        Doors_2_event,
        Doors_3_event,
        VZP_event,
        GrafReq_event
    };
    unsigned char m_countPrintf[10];
    bool m_bCheck;

public:
	explicit MainWindow(QWidget *parent = nullptr);
	void connectDevice();

public slots:
    void ev_PA_clicked(QString);
    //
    void on_pushButton_InitCan_clicked();
	void processReceivedFrames();
	void on_pushButton_Init_clicked();
	void on_pushButton_Imit_BRP_clicked();
	void on_pushButton_Send_clicked(bool);
	void sendVarData();
    //
    void on_pushButton_start_clicked(bool checked);
    void on_pushButton_send_PA_clicked();
    void sync();

    //Imit
    void on_pushButton_imit_clicked(bool);
    void on_pushButton_send_SA_clicked();

private slots:

    void on_checkBox_test_clicked();

    void on_checkBox_sync_clicked();

private:
	void pushButton_clicked(QSpinBox* startBox, BRPM_Encoder::MCP_BRP_MessType type);
	void sendFrames(const std::vector<can_frame>&);
	void printFrame(const can_frame&);

private:
	QString iface;
	QCanBusDevice *m_canDevice = nullptr;
	BRPM_Encoder* BRPM_encoder;
	std::vector<can_frame> frames2send;
    QTimer repeat_tmr, sendPA_tmr, sync_tmr;
    RadioInputs radioInputs, radioInputsImit;
    QSignalMapper *signalMapper;
    uint8_t PA_events_cntr;
    QList<QPushButton*> ev_buttons;                     //!* вектор кнопок-событий
    QList<PA_events_buttons_type> PA_events_idx;                     //!* индекс кнопки в векторе ev_buttons
    std::vector<int> PA_events_idx_accomplished;        //!* нажатые кнопки событий
    uint8_t counterPA;                                  //!* счетчик сообщений ПА
    std::vector<std::pair<uint8_t, RadioOutputs::PAEventsType> > cntr_event_queue;   //!* очередь событий в формате кол-во событий - события
    RadioOutputs::PAEventsType event_accum;                   //!* аккумулятор событий
};

#endif // MAINWINDOW_H
