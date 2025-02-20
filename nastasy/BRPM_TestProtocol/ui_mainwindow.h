/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_25;
    QHBoxLayout *horizontalLayout_38;
    QTabWidget *tabWidget;
    QWidget *tab_radio;
    QHBoxLayout *horizontalLayout_34;
    QVBoxLayout *verticalLayout_46;
    QVBoxLayout *verticalLayout_43;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_SA_cntr;
    QSpacerItem *horizontalSpacer_25;
    QLabel *label_SA;
    QSpacerItem *horizontalSpacer_26;
    QGridLayout *gridLayout;
    QLabel *label_33;
    QLabel *label_20;
    QLabel *label_17;
    QLabel *label_38;
    QSpacerItem *horizontalSpacer_33;
    QSpinBox *spinBox_CPCounter_SA;
    QLabel *label_40;
    QDateTimeEdit *dateTimeEdit_timeDepSched;
    QSpinBox *spinBox_stationCode_SA;
    QDateTimeEdit *dateTimeEdit_timeDepNeeded;
    QLabel *label_19;
    QLabel *label_34;
    QLabel *label_41;
    QSpinBox *spinBox_way_SA;
    QLabel *label_18;
    QDateTimeEdit *dateTimeEdit_timeArvNeeded;
    QSpinBox *spinBox_cduRoute_SA;
    QSpinBox *spinBox_cduCounter;
    QSpinBox *spinBox_deadlock;
    QLabel *label_35;
    QSpinBox *spinBox_protocol_SA;
    QLabel *label_15;
    QLabel *label_32;
    QSpinBox *spinBox_CPway;
    QSpinBox *spinBox_SAAck;
    QLabel *label_31;
    QSpinBox *spinBox_NData_SA;
    QLabel *label_36;
    QLabel *label_37;
    QDateTimeEdit *dateTimeEdit_timeCurrent;
    QDateTimeEdit *dateTimeEdit_timeArvSched;
    QLabel *label_39;
    QSpinBox *spinBox_turnStation;
    QSpinBox *spinBox_cduTrain_SA;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_34;
    QLabel *label_62;
    QLineEdit *lineEdit_id_SA;
    QSpinBox *spinBox_countNumStan;
    QSpinBox *spinBox_stationCode_SA_COUNT;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_32;
    QGridLayout *gridLayout_4;
    QComboBox *comboBox_ReadyGo;
    QComboBox *comboBox_AVInfo;
    QComboBox *comboBox_enModes;
    QComboBox *comboBox_OPVinfo;
    QComboBox *comboBox_exactstop;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_36;
    QGridLayout *gridLayout_3;
    QComboBox *comboBox_DoorState;
    QComboBox *comboBox_PDS;
    QComboBox *comboBox_ArriveCtrl;
    QComboBox *comboBox_DoorGap;
    QComboBox *comboBox_SetOk;
    QComboBox *comboBox_Mode;
    QHBoxLayout *horizontalLayout_35;
    QSpacerItem *horizontalSpacer_29;
    QPushButton *pushButton_send_SA;
    QPushButton *pushButton_imit;
    QSpacerItem *horizontalSpacer_30;
    QVBoxLayout *verticalLayout_47;
    QVBoxLayout *verticalLayout_42;
    QHBoxLayout *horizontalLayout_32;
    QSpacerItem *horizontalSpacer_27;
    QLabel *label_61;
    QSpacerItem *horizontalSpacer_28;
    QLabel *label_PA_cntr;
    QGridLayout *gridLayout_2;
    QSpinBox *spinBox_protocol_PA;
    QLabel *label_59;
    QSpinBox *spinBox_NData_PA;
    QSpinBox *spinBox_PACounter;
    QLabel *label_44;
    QSpinBox *spinBox_cduRoute_PA;
    QLabel *label_55;
    QLabel *label_48;
    QSpinBox *spinBox_CPCounter_PA;
    QLabel *label_49;
    QSpinBox *spinBox_stationCode_PA;
    QLabel *label_45;
    QLabel *label_46;
    QComboBox *comboBox_mode;
    QLabel *label_43;
    QSpinBox *spinBox_cduTrain_PA;
    QLineEdit *lineEdit_id_PA;
    QLabel *label_57;
    QSpinBox *spinBox_way_PA;
    QLabel *label_42;
    QLabel *label_58;
    QHBoxLayout *horizontalLayout_30;
    QSpinBox *spinBox_eventCntr;
    QLabel *label_47;
    QSpinBox *spinBox_eventCntr_queue;
    QVBoxLayout *verticalLayout_44;
    QGroupBox *groupBox_9;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *pushButton_stopped;
    QPushButton *pushButton_OPV;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_28;
    QVBoxLayout *verticalLayout_26;
    QPushButton *pushButton_MoveDir;
    QVBoxLayout *verticalLayout_27;
    QPushButton *pushButton_DoorCtrl;
    QVBoxLayout *verticalLayout_28;
    QPushButton *pushButton_transit;
    QGroupBox *groupBox_11;
    QHBoxLayout *horizontalLayout_29;
    QVBoxLayout *verticalLayout_29;
    QPushButton *pushButton_Doors_0;
    QPushButton *pushButton_Doors_1;
    QPushButton *pushButton_Doors_2;
    QPushButton *pushButton_Doors_3;
    QVBoxLayout *verticalLayout_30;
    QPushButton *pushButton_VZP;
    QVBoxLayout *verticalLayout_31;
    QPushButton *pushButton_GrafReq;
    QHBoxLayout *horizontalLayout_36;
    QSpacerItem *horizontalSpacer_31;
    QCheckBox *checkBox_nosync;
    QCheckBox *checkBox_test;
    QCheckBox *checkBox_sync;
    QCheckBox *checkBox_testsys;
    QPushButton *pushButton_send_PA;
    QPushButton *pushButton_start;
    QSpacerItem *horizontalSpacer_32;
    QWidget *tab_raw;
    QHBoxLayout *horizontalLayout_26;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_23;
    QVBoxLayout *verticalLayout_24;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_13;
    QComboBox *comboBox_ifaces;
    QHBoxLayout *horizontalLayout_25;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *pushButton_InitCan;
    QSpacerItem *horizontalSpacer_24;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_cmdOn;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_channel;
    QLabel *label;
    QHBoxLayout *horizontalLayout_19;
    QLineEdit *lineEdit_id_train;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Init;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_21;
    QVBoxLayout *verticalLayout_22;
    QCheckBox *checkBox_cmdOn_ans;
    QHBoxLayout *horizontalLayout_22;
    QSpinBox *spinBox_channel_ans;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_31;
    QSpinBox *spinBox_level;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_40;
    QSpinBox *spinBox_error_code;
    QLabel *label_23;
    QCheckBox *checkBox_mbox0_free;
    QCheckBox *checkBox_mbox0_err_send;
    QCheckBox *checkBox_mbox0_arb_lost;
    QCheckBox *checkBox_mbox0_sent_succ;
    QHBoxLayout *horizontalLayout_41;
    QSpinBox *spinBox_error_rcv;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_42;
    QSpinBox *spinBox_error_trans;
    QLabel *label_25;
    QCheckBox *checkBox_rk_err_rcv;
    QCheckBox *checkBox_rk_succ_trans;
    QCheckBox *checkBox_spi_err;
    QCheckBox *checkBox_spi_exch;
    QHBoxLayout *horizontalLayout_43;
    QSpinBox *spinBox_master_on_slave;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout_44;
    QSpinBox *spinBox_slave_on_master;
    QLabel *label_27;
    QHBoxLayout *horizontalLayout_24;
    QLineEdit *lineEdit_brpm_counter;
    QLabel *label_14;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_17;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_10;
    QSpinBox *spinBox_from;
    QLabel *label_11;
    QSpinBox *spinBox_N;
    QCheckBox *checkBox_repeat;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *pushButton_Send;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_16;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_7;
    QSpinBox *spinBox_brp;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_8;
    QSpinBox *spinBox_brp_n_bytes;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *pushButton_Imit_BRP;
    QSpacerItem *horizontalSpacer_18;
    QPlainTextEdit *plainTextEdit_in;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_20;
    QGroupBox *groupBox_14;
    QHBoxLayout *horizontalLayout_37;
    QVBoxLayout *verticalLayout_9;
    QPlainTextEdit *plainTextEdit_out;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_12;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1696, 997);
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_25 = new QVBoxLayout(centralWidget);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_radio = new QWidget();
        tab_radio->setObjectName(QString::fromUtf8("tab_radio"));
        horizontalLayout_34 = new QHBoxLayout(tab_radio);
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        verticalLayout_46 = new QVBoxLayout();
        verticalLayout_46->setSpacing(6);
        verticalLayout_46->setObjectName(QString::fromUtf8("verticalLayout_46"));
        verticalLayout_43 = new QVBoxLayout();
        verticalLayout_43->setSpacing(6);
        verticalLayout_43->setObjectName(QString::fromUtf8("verticalLayout_43"));
        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(1);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        label_SA_cntr = new QLabel(tab_radio);
        label_SA_cntr->setObjectName(QString::fromUtf8("label_SA_cntr"));
        label_SA_cntr->setMinimumSize(QSize(40, 0));

        horizontalLayout_33->addWidget(label_SA_cntr);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_25);

        label_SA = new QLabel(tab_radio);
        label_SA->setObjectName(QString::fromUtf8("label_SA"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_SA->setFont(font1);
        label_SA->setWordWrap(true);

        horizontalLayout_33->addWidget(label_SA);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_26);


        verticalLayout_43->addLayout(horizontalLayout_33);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(1);
        label_33 = new QLabel(tab_radio);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setWordWrap(true);

        gridLayout->addWidget(label_33, 8, 1, 1, 1);

        label_20 = new QLabel(tab_radio);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setWordWrap(true);

        gridLayout->addWidget(label_20, 5, 1, 1, 1);

        label_17 = new QLabel(tab_radio);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setWordWrap(true);

        gridLayout->addWidget(label_17, 2, 1, 1, 1);

        label_38 = new QLabel(tab_radio);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setWordWrap(true);

        gridLayout->addWidget(label_38, 14, 1, 1, 1);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_33, 6, 3, 1, 1);

        spinBox_CPCounter_SA = new QSpinBox(tab_radio);
        spinBox_CPCounter_SA->setObjectName(QString::fromUtf8("spinBox_CPCounter_SA"));
        spinBox_CPCounter_SA->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        spinBox_CPCounter_SA->setAlignment(Qt::AlignCenter);
        spinBox_CPCounter_SA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_CPCounter_SA->setMaximum(255);

        gridLayout->addWidget(spinBox_CPCounter_SA, 8, 2, 1, 1);

        label_40 = new QLabel(tab_radio);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setWordWrap(true);

        gridLayout->addWidget(label_40, 16, 1, 1, 1);

        dateTimeEdit_timeDepSched = new QDateTimeEdit(tab_radio);
        dateTimeEdit_timeDepSched->setObjectName(QString::fromUtf8("dateTimeEdit_timeDepSched"));
        dateTimeEdit_timeDepSched->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        dateTimeEdit_timeDepSched->setReadOnly(true);

        gridLayout->addWidget(dateTimeEdit_timeDepSched, 14, 2, 1, 1);

        spinBox_stationCode_SA = new QSpinBox(tab_radio);
        spinBox_stationCode_SA->setObjectName(QString::fromUtf8("spinBox_stationCode_SA"));
        spinBox_stationCode_SA->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        spinBox_stationCode_SA->setAlignment(Qt::AlignCenter);
        spinBox_stationCode_SA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_stationCode_SA->setMaximum(65535);

        gridLayout->addWidget(spinBox_stationCode_SA, 2, 2, 1, 1);

        dateTimeEdit_timeDepNeeded = new QDateTimeEdit(tab_radio);
        dateTimeEdit_timeDepNeeded->setObjectName(QString::fromUtf8("dateTimeEdit_timeDepNeeded"));
        dateTimeEdit_timeDepNeeded->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        dateTimeEdit_timeDepNeeded->setReadOnly(true);

        gridLayout->addWidget(dateTimeEdit_timeDepNeeded, 13, 2, 1, 1);

        label_19 = new QLabel(tab_radio);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setWordWrap(true);

        gridLayout->addWidget(label_19, 3, 1, 1, 1);

        label_34 = new QLabel(tab_radio);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setWordWrap(true);

        gridLayout->addWidget(label_34, 10, 1, 1, 1);

        label_41 = new QLabel(tab_radio);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setWordWrap(true);

        gridLayout->addWidget(label_41, 17, 1, 1, 1);

        spinBox_way_SA = new QSpinBox(tab_radio);
        spinBox_way_SA->setObjectName(QString::fromUtf8("spinBox_way_SA"));
        spinBox_way_SA->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        spinBox_way_SA->setAlignment(Qt::AlignCenter);
        spinBox_way_SA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_way_SA->setMaximum(255);

        gridLayout->addWidget(spinBox_way_SA, 4, 2, 1, 1);

        label_18 = new QLabel(tab_radio);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setWordWrap(true);

        gridLayout->addWidget(label_18, 4, 1, 1, 1);

        dateTimeEdit_timeArvNeeded = new QDateTimeEdit(tab_radio);
        dateTimeEdit_timeArvNeeded->setObjectName(QString::fromUtf8("dateTimeEdit_timeArvNeeded"));
        dateTimeEdit_timeArvNeeded->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        dateTimeEdit_timeArvNeeded->setReadOnly(true);

        gridLayout->addWidget(dateTimeEdit_timeArvNeeded, 15, 2, 1, 1);

        spinBox_cduRoute_SA = new QSpinBox(tab_radio);
        spinBox_cduRoute_SA->setObjectName(QString::fromUtf8("spinBox_cduRoute_SA"));
        spinBox_cduRoute_SA->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        spinBox_cduRoute_SA->setAlignment(Qt::AlignCenter);
        spinBox_cduRoute_SA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_cduRoute_SA->setMaximum(65535);

        gridLayout->addWidget(spinBox_cduRoute_SA, 10, 2, 1, 1);

        spinBox_cduCounter = new QSpinBox(tab_radio);
        spinBox_cduCounter->setObjectName(QString::fromUtf8("spinBox_cduCounter"));
        spinBox_cduCounter->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        spinBox_cduCounter->setAlignment(Qt::AlignCenter);
        spinBox_cduCounter->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_cduCounter->setMaximum(255);
        spinBox_cduCounter->setSingleStep(255);

        gridLayout->addWidget(spinBox_cduCounter, 3, 2, 1, 1);

        spinBox_deadlock = new QSpinBox(tab_radio);
        spinBox_deadlock->setObjectName(QString::fromUtf8("spinBox_deadlock"));
        spinBox_deadlock->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        spinBox_deadlock->setAlignment(Qt::AlignCenter);
        spinBox_deadlock->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_deadlock->setMaximum(255);

        gridLayout->addWidget(spinBox_deadlock, 6, 2, 1, 1);

        label_35 = new QLabel(tab_radio);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setWordWrap(true);

        gridLayout->addWidget(label_35, 11, 1, 1, 1);

        spinBox_protocol_SA = new QSpinBox(tab_radio);
        spinBox_protocol_SA->setObjectName(QString::fromUtf8("spinBox_protocol_SA"));
        spinBox_protocol_SA->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        spinBox_protocol_SA->setAlignment(Qt::AlignCenter);
        spinBox_protocol_SA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_protocol_SA->setMaximum(255);

        gridLayout->addWidget(spinBox_protocol_SA, 0, 2, 1, 1);

        label_15 = new QLabel(tab_radio);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 0, 1, 1, 1);

        label_32 = new QLabel(tab_radio);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setWordWrap(true);

        gridLayout->addWidget(label_32, 7, 1, 1, 1);

        spinBox_CPway = new QSpinBox(tab_radio);
        spinBox_CPway->setObjectName(QString::fromUtf8("spinBox_CPway"));
        spinBox_CPway->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        spinBox_CPway->setAlignment(Qt::AlignCenter);
        spinBox_CPway->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_CPway->setMaximum(255);

        gridLayout->addWidget(spinBox_CPway, 17, 2, 1, 1);

        spinBox_SAAck = new QSpinBox(tab_radio);
        spinBox_SAAck->setObjectName(QString::fromUtf8("spinBox_SAAck"));
        spinBox_SAAck->setStyleSheet(QString::fromUtf8(""));
        spinBox_SAAck->setAlignment(Qt::AlignCenter);
        spinBox_SAAck->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_SAAck->setMaximum(255);

        gridLayout->addWidget(spinBox_SAAck, 7, 2, 1, 1);

        label_31 = new QLabel(tab_radio);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setWordWrap(true);

        gridLayout->addWidget(label_31, 6, 1, 1, 1);

        spinBox_NData_SA = new QSpinBox(tab_radio);
        spinBox_NData_SA->setObjectName(QString::fromUtf8("spinBox_NData_SA"));
        spinBox_NData_SA->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        spinBox_NData_SA->setAlignment(Qt::AlignCenter);
        spinBox_NData_SA->setReadOnly(true);
        spinBox_NData_SA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_NData_SA->setMaximum(255);
        spinBox_NData_SA->setValue(35);

        gridLayout->addWidget(spinBox_NData_SA, 5, 2, 1, 1);

        label_36 = new QLabel(tab_radio);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setWordWrap(true);

        gridLayout->addWidget(label_36, 12, 1, 1, 1);

        label_37 = new QLabel(tab_radio);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setWordWrap(true);

        gridLayout->addWidget(label_37, 13, 1, 1, 1);

        dateTimeEdit_timeCurrent = new QDateTimeEdit(tab_radio);
        dateTimeEdit_timeCurrent->setObjectName(QString::fromUtf8("dateTimeEdit_timeCurrent"));
        dateTimeEdit_timeCurrent->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        dateTimeEdit_timeCurrent->setReadOnly(true);

        gridLayout->addWidget(dateTimeEdit_timeCurrent, 1, 2, 1, 1);

        dateTimeEdit_timeArvSched = new QDateTimeEdit(tab_radio);
        dateTimeEdit_timeArvSched->setObjectName(QString::fromUtf8("dateTimeEdit_timeArvSched"));
        dateTimeEdit_timeArvSched->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        dateTimeEdit_timeArvSched->setReadOnly(true);

        gridLayout->addWidget(dateTimeEdit_timeArvSched, 16, 2, 1, 1);

        label_39 = new QLabel(tab_radio);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setWordWrap(true);

        gridLayout->addWidget(label_39, 15, 1, 1, 1);

        spinBox_turnStation = new QSpinBox(tab_radio);
        spinBox_turnStation->setObjectName(QString::fromUtf8("spinBox_turnStation"));
        spinBox_turnStation->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        spinBox_turnStation->setAlignment(Qt::AlignCenter);
        spinBox_turnStation->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_turnStation->setMaximum(65535);

        gridLayout->addWidget(spinBox_turnStation, 12, 2, 1, 1);

        spinBox_cduTrain_SA = new QSpinBox(tab_radio);
        spinBox_cduTrain_SA->setObjectName(QString::fromUtf8("spinBox_cduTrain_SA"));
        spinBox_cduTrain_SA->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        spinBox_cduTrain_SA->setAlignment(Qt::AlignCenter);
        spinBox_cduTrain_SA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_cduTrain_SA->setMaximum(65535);

        gridLayout->addWidget(spinBox_cduTrain_SA, 11, 2, 1, 1);

        label_16 = new QLabel(tab_radio);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setWordWrap(true);

        gridLayout->addWidget(label_16, 1, 1, 1, 1);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_34, 4, 0, 1, 1);

        label_62 = new QLabel(tab_radio);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setWordWrap(true);

        gridLayout->addWidget(label_62, 9, 1, 1, 1);

        lineEdit_id_SA = new QLineEdit(tab_radio);
        lineEdit_id_SA->setObjectName(QString::fromUtf8("lineEdit_id_SA"));
        lineEdit_id_SA->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        lineEdit_id_SA->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_id_SA, 9, 2, 1, 1);

        spinBox_countNumStan = new QSpinBox(tab_radio);
        spinBox_countNumStan->setObjectName(QString::fromUtf8("spinBox_countNumStan"));

        gridLayout->addWidget(spinBox_countNumStan, 2, 3, 1, 1);

        spinBox_stationCode_SA_COUNT = new QSpinBox(tab_radio);
        spinBox_stationCode_SA_COUNT->setObjectName(QString::fromUtf8("spinBox_stationCode_SA_COUNT"));

        gridLayout->addWidget(spinBox_stationCode_SA_COUNT, 0, 3, 1, 1);


        verticalLayout_43->addLayout(gridLayout);


        verticalLayout_46->addLayout(verticalLayout_43);

        groupBox_12 = new QGroupBox(tab_radio);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        verticalLayout_32 = new QVBoxLayout(groupBox_12);
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setContentsMargins(11, 11, 11, 11);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        verticalLayout_32->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        comboBox_ReadyGo = new QComboBox(groupBox_12);
        comboBox_ReadyGo->addItem(QString());
        comboBox_ReadyGo->addItem(QString());
        comboBox_ReadyGo->setObjectName(QString::fromUtf8("comboBox_ReadyGo"));

        gridLayout_4->addWidget(comboBox_ReadyGo, 3, 1, 1, 1);

        comboBox_AVInfo = new QComboBox(groupBox_12);
        comboBox_AVInfo->addItem(QString());
        comboBox_AVInfo->addItem(QString());
        comboBox_AVInfo->setObjectName(QString::fromUtf8("comboBox_AVInfo"));

        gridLayout_4->addWidget(comboBox_AVInfo, 3, 0, 1, 1);

        comboBox_enModes = new QComboBox(groupBox_12);
        comboBox_enModes->addItem(QString());
        comboBox_enModes->addItem(QString());
        comboBox_enModes->addItem(QString());
        comboBox_enModes->addItem(QString());
        comboBox_enModes->setObjectName(QString::fromUtf8("comboBox_enModes"));

        gridLayout_4->addWidget(comboBox_enModes, 1, 0, 1, 1);

        comboBox_OPVinfo = new QComboBox(groupBox_12);
        comboBox_OPVinfo->addItem(QString());
        comboBox_OPVinfo->addItem(QString());
        comboBox_OPVinfo->addItem(QString());
        comboBox_OPVinfo->addItem(QString());
        comboBox_OPVinfo->addItem(QString());
        comboBox_OPVinfo->setObjectName(QString::fromUtf8("comboBox_OPVinfo"));

        gridLayout_4->addWidget(comboBox_OPVinfo, 1, 1, 1, 1);

        comboBox_exactstop = new QComboBox(groupBox_12);
        comboBox_exactstop->addItem(QString());
        comboBox_exactstop->addItem(QString());
        comboBox_exactstop->setObjectName(QString::fromUtf8("comboBox_exactstop"));

        gridLayout_4->addWidget(comboBox_exactstop, 4, 0, 1, 1);


        verticalLayout_32->addLayout(gridLayout_4);


        verticalLayout_46->addWidget(groupBox_12);

        groupBox_13 = new QGroupBox(tab_radio);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        verticalLayout_36 = new QVBoxLayout(groupBox_13);
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setContentsMargins(11, 11, 11, 11);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        comboBox_DoorState = new QComboBox(groupBox_13);
        comboBox_DoorState->addItem(QString());
        comboBox_DoorState->addItem(QString());
        comboBox_DoorState->addItem(QString());
        comboBox_DoorState->addItem(QString());
        comboBox_DoorState->setObjectName(QString::fromUtf8("comboBox_DoorState"));

        gridLayout_3->addWidget(comboBox_DoorState, 0, 0, 1, 1);

        comboBox_PDS = new QComboBox(groupBox_13);
        comboBox_PDS->addItem(QString());
        comboBox_PDS->addItem(QString());
        comboBox_PDS->addItem(QString());
        comboBox_PDS->addItem(QString());
        comboBox_PDS->setObjectName(QString::fromUtf8("comboBox_PDS"));

        gridLayout_3->addWidget(comboBox_PDS, 0, 1, 1, 1);

        comboBox_ArriveCtrl = new QComboBox(groupBox_13);
        comboBox_ArriveCtrl->addItem(QString());
        comboBox_ArriveCtrl->addItem(QString());
        comboBox_ArriveCtrl->setObjectName(QString::fromUtf8("comboBox_ArriveCtrl"));

        gridLayout_3->addWidget(comboBox_ArriveCtrl, 0, 2, 1, 1);

        comboBox_DoorGap = new QComboBox(groupBox_13);
        comboBox_DoorGap->addItem(QString());
        comboBox_DoorGap->addItem(QString());
        comboBox_DoorGap->setObjectName(QString::fromUtf8("comboBox_DoorGap"));

        gridLayout_3->addWidget(comboBox_DoorGap, 1, 0, 1, 1);

        comboBox_SetOk = new QComboBox(groupBox_13);
        comboBox_SetOk->addItem(QString());
        comboBox_SetOk->addItem(QString());
        comboBox_SetOk->setObjectName(QString::fromUtf8("comboBox_SetOk"));

        gridLayout_3->addWidget(comboBox_SetOk, 1, 1, 1, 1);

        comboBox_Mode = new QComboBox(groupBox_13);
        comboBox_Mode->addItem(QString());
        comboBox_Mode->addItem(QString());
        comboBox_Mode->setObjectName(QString::fromUtf8("comboBox_Mode"));

        gridLayout_3->addWidget(comboBox_Mode, 1, 2, 1, 1);


        verticalLayout_36->addLayout(gridLayout_3);


        verticalLayout_46->addWidget(groupBox_13);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_29);

        pushButton_send_SA = new QPushButton(tab_radio);
        pushButton_send_SA->setObjectName(QString::fromUtf8("pushButton_send_SA"));
        pushButton_send_SA->setEnabled(false);
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_send_SA->setFont(font2);

        horizontalLayout_35->addWidget(pushButton_send_SA);

        pushButton_imit = new QPushButton(tab_radio);
        pushButton_imit->setObjectName(QString::fromUtf8("pushButton_imit"));
        pushButton_imit->setFont(font2);
        pushButton_imit->setStyleSheet(QString::fromUtf8("QPushButton::checked { background-color: green; }\n"
"QPushButton { background-color: rgba(221,223,228); }"));
        pushButton_imit->setCheckable(true);

        horizontalLayout_35->addWidget(pushButton_imit);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_30);


        verticalLayout_46->addLayout(horizontalLayout_35);


        horizontalLayout_34->addLayout(verticalLayout_46);

        verticalLayout_47 = new QVBoxLayout();
        verticalLayout_47->setSpacing(6);
        verticalLayout_47->setObjectName(QString::fromUtf8("verticalLayout_47"));
        verticalLayout_42 = new QVBoxLayout();
        verticalLayout_42->setSpacing(6);
        verticalLayout_42->setObjectName(QString::fromUtf8("verticalLayout_42"));
        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_27);

        label_61 = new QLabel(tab_radio);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setFont(font1);
        label_61->setWordWrap(true);

        horizontalLayout_32->addWidget(label_61);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_28);

        label_PA_cntr = new QLabel(tab_radio);
        label_PA_cntr->setObjectName(QString::fromUtf8("label_PA_cntr"));
        label_PA_cntr->setMinimumSize(QSize(40, 0));

        horizontalLayout_32->addWidget(label_PA_cntr);


        verticalLayout_42->addLayout(horizontalLayout_32);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(1);
        spinBox_protocol_PA = new QSpinBox(tab_radio);
        spinBox_protocol_PA->setObjectName(QString::fromUtf8("spinBox_protocol_PA"));
        spinBox_protocol_PA->setAlignment(Qt::AlignCenter);
        spinBox_protocol_PA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_protocol_PA->setMaximum(255);
        spinBox_protocol_PA->setValue(2);

        gridLayout_2->addWidget(spinBox_protocol_PA, 0, 1, 1, 1);

        label_59 = new QLabel(tab_radio);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setWordWrap(true);

        gridLayout_2->addWidget(label_59, 10, 0, 1, 1);

        spinBox_NData_PA = new QSpinBox(tab_radio);
        spinBox_NData_PA->setObjectName(QString::fromUtf8("spinBox_NData_PA"));
        spinBox_NData_PA->setAlignment(Qt::AlignCenter);
        spinBox_NData_PA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_NData_PA->setMaximum(255);
        spinBox_NData_PA->setValue(15);

        gridLayout_2->addWidget(spinBox_NData_PA, 5, 1, 1, 1);

        spinBox_PACounter = new QSpinBox(tab_radio);
        spinBox_PACounter->setObjectName(QString::fromUtf8("spinBox_PACounter"));
        spinBox_PACounter->setAlignment(Qt::AlignCenter);
        spinBox_PACounter->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_PACounter->setMaximum(255);

        gridLayout_2->addWidget(spinBox_PACounter, 3, 1, 1, 1);

        label_44 = new QLabel(tab_radio);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setWordWrap(true);

        gridLayout_2->addWidget(label_44, 2, 0, 1, 1);

        spinBox_cduRoute_PA = new QSpinBox(tab_radio);
        spinBox_cduRoute_PA->setObjectName(QString::fromUtf8("spinBox_cduRoute_PA"));
        spinBox_cduRoute_PA->setAlignment(Qt::AlignCenter);
        spinBox_cduRoute_PA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_cduRoute_PA->setMaximum(65535);
        spinBox_cduRoute_PA->setValue(1234);

        gridLayout_2->addWidget(spinBox_cduRoute_PA, 8, 1, 1, 1);

        label_55 = new QLabel(tab_radio);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setWordWrap(true);

        gridLayout_2->addWidget(label_55, 5, 0, 1, 1);

        label_48 = new QLabel(tab_radio);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setWordWrap(true);

        gridLayout_2->addWidget(label_48, 6, 0, 1, 1);

        spinBox_CPCounter_PA = new QSpinBox(tab_radio);
        spinBox_CPCounter_PA->setObjectName(QString::fromUtf8("spinBox_CPCounter_PA"));
        spinBox_CPCounter_PA->setAlignment(Qt::AlignCenter);
        spinBox_CPCounter_PA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_CPCounter_PA->setMaximum(999999999);

        gridLayout_2->addWidget(spinBox_CPCounter_PA, 10, 1, 1, 1);

        label_49 = new QLabel(tab_radio);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setWordWrap(true);

        gridLayout_2->addWidget(label_49, 7, 0, 1, 1);

        spinBox_stationCode_PA = new QSpinBox(tab_radio);
        spinBox_stationCode_PA->setObjectName(QString::fromUtf8("spinBox_stationCode_PA"));
        spinBox_stationCode_PA->setAlignment(Qt::AlignCenter);
        spinBox_stationCode_PA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_stationCode_PA->setMaximum(65535);
        spinBox_stationCode_PA->setValue(310);

        gridLayout_2->addWidget(spinBox_stationCode_PA, 2, 1, 1, 1);

        label_45 = new QLabel(tab_radio);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        gridLayout_2->addWidget(label_45, 3, 0, 1, 1);

        label_46 = new QLabel(tab_radio);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout_2->addWidget(label_46, 4, 0, 1, 1);

        comboBox_mode = new QComboBox(tab_radio);
        comboBox_mode->addItem(QString());
        comboBox_mode->addItem(QString());
        comboBox_mode->addItem(QString());
        comboBox_mode->addItem(QString());
        comboBox_mode->setObjectName(QString::fromUtf8("comboBox_mode"));

        gridLayout_2->addWidget(comboBox_mode, 6, 1, 1, 1);

        label_43 = new QLabel(tab_radio);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setWordWrap(true);

        gridLayout_2->addWidget(label_43, 1, 0, 1, 1);

        spinBox_cduTrain_PA = new QSpinBox(tab_radio);
        spinBox_cduTrain_PA->setObjectName(QString::fromUtf8("spinBox_cduTrain_PA"));
        spinBox_cduTrain_PA->setAlignment(Qt::AlignCenter);
        spinBox_cduTrain_PA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_cduTrain_PA->setMaximum(65535);
        spinBox_cduTrain_PA->setValue(4321);

        gridLayout_2->addWidget(spinBox_cduTrain_PA, 9, 1, 1, 1);

        lineEdit_id_PA = new QLineEdit(tab_radio);
        lineEdit_id_PA->setObjectName(QString::fromUtf8("lineEdit_id_PA"));

        gridLayout_2->addWidget(lineEdit_id_PA, 1, 1, 1, 1);

        label_57 = new QLabel(tab_radio);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        gridLayout_2->addWidget(label_57, 8, 0, 1, 1);

        spinBox_way_PA = new QSpinBox(tab_radio);
        spinBox_way_PA->setObjectName(QString::fromUtf8("spinBox_way_PA"));
        spinBox_way_PA->setAlignment(Qt::AlignCenter);
        spinBox_way_PA->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_way_PA->setMaximum(255);
        spinBox_way_PA->setValue(1);

        gridLayout_2->addWidget(spinBox_way_PA, 4, 1, 1, 1);

        label_42 = new QLabel(tab_radio);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout_2->addWidget(label_42, 0, 0, 1, 1);

        label_58 = new QLabel(tab_radio);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setWordWrap(true);

        gridLayout_2->addWidget(label_58, 9, 0, 1, 1);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        spinBox_eventCntr = new QSpinBox(tab_radio);
        spinBox_eventCntr->setObjectName(QString::fromUtf8("spinBox_eventCntr"));
        spinBox_eventCntr->setAlignment(Qt::AlignCenter);
        spinBox_eventCntr->setReadOnly(true);
        spinBox_eventCntr->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_eventCntr->setMaximum(65535);
        spinBox_eventCntr->setValue(0);

        horizontalLayout_30->addWidget(spinBox_eventCntr);

        label_47 = new QLabel(tab_radio);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_47->setWordWrap(true);

        horizontalLayout_30->addWidget(label_47);

        spinBox_eventCntr_queue = new QSpinBox(tab_radio);
        spinBox_eventCntr_queue->setObjectName(QString::fromUtf8("spinBox_eventCntr_queue"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox_eventCntr_queue->sizePolicy().hasHeightForWidth());
        spinBox_eventCntr_queue->setSizePolicy(sizePolicy);
        spinBox_eventCntr_queue->setAlignment(Qt::AlignCenter);
        spinBox_eventCntr_queue->setReadOnly(true);
        spinBox_eventCntr_queue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_eventCntr_queue->setMaximum(65535999);
        spinBox_eventCntr_queue->setValue(0);

        horizontalLayout_30->addWidget(spinBox_eventCntr_queue);


        gridLayout_2->addLayout(horizontalLayout_30, 7, 1, 1, 1);


        verticalLayout_42->addLayout(gridLayout_2);


        verticalLayout_47->addLayout(verticalLayout_42);

        verticalLayout_44 = new QVBoxLayout();
        verticalLayout_44->setSpacing(6);
        verticalLayout_44->setObjectName(QString::fromUtf8("verticalLayout_44"));
        groupBox_9 = new QGroupBox(tab_radio);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        horizontalLayout_27 = new QHBoxLayout(groupBox_9);
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        pushButton_stopped = new QPushButton(groupBox_9);
        pushButton_stopped->setObjectName(QString::fromUtf8("pushButton_stopped"));
        pushButton_stopped->setFocusPolicy(Qt::NoFocus);
        pushButton_stopped->setStyleSheet(QString::fromUtf8("QPushButton::checked { background-color: green; }\n"
"QPushButton { background-color: rgba(221,223,228); }"));
        pushButton_stopped->setCheckable(true);
        pushButton_stopped->setChecked(true);

        horizontalLayout_27->addWidget(pushButton_stopped);

        pushButton_OPV = new QPushButton(groupBox_9);
        pushButton_OPV->setObjectName(QString::fromUtf8("pushButton_OPV"));
        pushButton_OPV->setFocusPolicy(Qt::NoFocus);
        pushButton_OPV->setStyleSheet(QString::fromUtf8("QPushButton::checked { background-color: green; }\n"
"QPushButton { background-color: rgba(221,223,228); }"));
        pushButton_OPV->setCheckable(true);
        pushButton_OPV->setChecked(true);

        horizontalLayout_27->addWidget(pushButton_OPV);


        verticalLayout_44->addWidget(groupBox_9);

        groupBox_10 = new QGroupBox(tab_radio);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        horizontalLayout_28 = new QHBoxLayout(groupBox_10);
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        pushButton_MoveDir = new QPushButton(groupBox_10);
        pushButton_MoveDir->setObjectName(QString::fromUtf8("pushButton_MoveDir"));
        pushButton_MoveDir->setFocusPolicy(Qt::NoFocus);
        pushButton_MoveDir->setStyleSheet(QString::fromUtf8("QPushButton::checked { background-color: green; }\n"
"QPushButton { background-color: rgba(221,223,228); }"));
        pushButton_MoveDir->setCheckable(true);

        verticalLayout_26->addWidget(pushButton_MoveDir);


        horizontalLayout_28->addLayout(verticalLayout_26);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        pushButton_DoorCtrl = new QPushButton(groupBox_10);
        pushButton_DoorCtrl->setObjectName(QString::fromUtf8("pushButton_DoorCtrl"));
        pushButton_DoorCtrl->setFocusPolicy(Qt::NoFocus);
        pushButton_DoorCtrl->setStyleSheet(QString::fromUtf8("QPushButton::checked { background-color: green; }\n"
"QPushButton { background-color: rgba(221,223,228); }"));
        pushButton_DoorCtrl->setCheckable(true);
        pushButton_DoorCtrl->setChecked(true);

        verticalLayout_27->addWidget(pushButton_DoorCtrl);


        horizontalLayout_28->addLayout(verticalLayout_27);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        pushButton_transit = new QPushButton(groupBox_10);
        pushButton_transit->setObjectName(QString::fromUtf8("pushButton_transit"));
        pushButton_transit->setFocusPolicy(Qt::NoFocus);
        pushButton_transit->setStyleSheet(QString::fromUtf8("QPushButton::checked { background-color: green; }\n"
"QPushButton { background-color: rgba(221,223,228); }"));
        pushButton_transit->setCheckable(true);

        verticalLayout_28->addWidget(pushButton_transit);


        horizontalLayout_28->addLayout(verticalLayout_28);


        verticalLayout_44->addWidget(groupBox_10);

        groupBox_11 = new QGroupBox(tab_radio);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        horizontalLayout_29 = new QHBoxLayout(groupBox_11);
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        pushButton_Doors_0 = new QPushButton(groupBox_11);
        pushButton_Doors_0->setObjectName(QString::fromUtf8("pushButton_Doors_0"));
        pushButton_Doors_0->setFocusPolicy(Qt::NoFocus);
        pushButton_Doors_0->setStyleSheet(QString::fromUtf8("QPushButton::checked { background-color: green; }\n"
"QPushButton { background-color: rgba(221,223,228); }"));
        pushButton_Doors_0->setCheckable(true);
        pushButton_Doors_0->setChecked(true);
        pushButton_Doors_0->setAutoExclusive(true);

        verticalLayout_29->addWidget(pushButton_Doors_0);

        pushButton_Doors_1 = new QPushButton(groupBox_11);
        pushButton_Doors_1->setObjectName(QString::fromUtf8("pushButton_Doors_1"));
        pushButton_Doors_1->setFocusPolicy(Qt::NoFocus);
        pushButton_Doors_1->setStyleSheet(QString::fromUtf8("QPushButton::checked { background-color: green; }\n"
"QPushButton { background-color: rgba(221,223,228); }"));
        pushButton_Doors_1->setCheckable(true);
        pushButton_Doors_1->setAutoExclusive(true);

        verticalLayout_29->addWidget(pushButton_Doors_1);

        pushButton_Doors_2 = new QPushButton(groupBox_11);
        pushButton_Doors_2->setObjectName(QString::fromUtf8("pushButton_Doors_2"));
        pushButton_Doors_2->setFocusPolicy(Qt::NoFocus);
        pushButton_Doors_2->setStyleSheet(QString::fromUtf8("QPushButton::checked { background-color: green; }\n"
"QPushButton { background-color: rgba(221,223,228); }"));
        pushButton_Doors_2->setCheckable(true);
        pushButton_Doors_2->setAutoExclusive(true);

        verticalLayout_29->addWidget(pushButton_Doors_2);

        pushButton_Doors_3 = new QPushButton(groupBox_11);
        pushButton_Doors_3->setObjectName(QString::fromUtf8("pushButton_Doors_3"));
        pushButton_Doors_3->setFocusPolicy(Qt::NoFocus);
        pushButton_Doors_3->setStyleSheet(QString::fromUtf8("QPushButton::checked { background-color: green; }\n"
"QPushButton { background-color: rgba(221,223,228); }"));
        pushButton_Doors_3->setCheckable(true);
        pushButton_Doors_3->setAutoExclusive(true);

        verticalLayout_29->addWidget(pushButton_Doors_3);


        horizontalLayout_29->addLayout(verticalLayout_29);

        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        pushButton_VZP = new QPushButton(groupBox_11);
        pushButton_VZP->setObjectName(QString::fromUtf8("pushButton_VZP"));
        pushButton_VZP->setFocusPolicy(Qt::NoFocus);
        pushButton_VZP->setStyleSheet(QString::fromUtf8("QPushButton::checked { background-color: green; }\n"
"QPushButton { background-color: rgba(221,223,228); }"));
        pushButton_VZP->setCheckable(true);

        verticalLayout_30->addWidget(pushButton_VZP);


        horizontalLayout_29->addLayout(verticalLayout_30);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        pushButton_GrafReq = new QPushButton(groupBox_11);
        pushButton_GrafReq->setObjectName(QString::fromUtf8("pushButton_GrafReq"));
        pushButton_GrafReq->setFocusPolicy(Qt::NoFocus);
        pushButton_GrafReq->setStyleSheet(QString::fromUtf8("QPushButton::checked { background-color: green; }\n"
"QPushButton { background-color: rgba(221,223,228); }"));
        pushButton_GrafReq->setCheckable(true);

        verticalLayout_31->addWidget(pushButton_GrafReq);


        horizontalLayout_29->addLayout(verticalLayout_31);


        verticalLayout_44->addWidget(groupBox_11);


        verticalLayout_47->addLayout(verticalLayout_44);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_36->addItem(horizontalSpacer_31);

        checkBox_nosync = new QCheckBox(tab_radio);
        checkBox_nosync->setObjectName(QString::fromUtf8("checkBox_nosync"));
        checkBox_nosync->setChecked(true);

        horizontalLayout_36->addWidget(checkBox_nosync);

        checkBox_test = new QCheckBox(tab_radio);
        checkBox_test->setObjectName(QString::fromUtf8("checkBox_test"));
        checkBox_test->setEnabled(true);
        checkBox_test->setChecked(false);
        checkBox_test->setTristate(false);

        horizontalLayout_36->addWidget(checkBox_test);

        checkBox_sync = new QCheckBox(tab_radio);
        checkBox_sync->setObjectName(QString::fromUtf8("checkBox_sync"));
        checkBox_sync->setChecked(true);

        horizontalLayout_36->addWidget(checkBox_sync);

        checkBox_testsys = new QCheckBox(tab_radio);
        checkBox_testsys->setObjectName(QString::fromUtf8("checkBox_testsys"));
        checkBox_testsys->setChecked(true);

        horizontalLayout_36->addWidget(checkBox_testsys);

        pushButton_send_PA = new QPushButton(tab_radio);
        pushButton_send_PA->setObjectName(QString::fromUtf8("pushButton_send_PA"));
        pushButton_send_PA->setFont(font2);

        horizontalLayout_36->addWidget(pushButton_send_PA);

        pushButton_start = new QPushButton(tab_radio);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setFont(font2);
        pushButton_start->setCheckable(true);

        horizontalLayout_36->addWidget(pushButton_start);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_36->addItem(horizontalSpacer_32);


        verticalLayout_47->addLayout(horizontalLayout_36);


        horizontalLayout_34->addLayout(verticalLayout_47);

        tabWidget->addTab(tab_radio, QString());
        tab_raw = new QWidget();
        tab_raw->setObjectName(QString::fromUtf8("tab_raw"));
        horizontalLayout_26 = new QHBoxLayout(tab_raw);
        horizontalLayout_26->setSpacing(0);
        horizontalLayout_26->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_13);

        label_5 = new QLabel(tab_raw);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);

        horizontalLayout_12->addWidget(label_5);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_14);


        verticalLayout_14->addLayout(horizontalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        groupBox_8 = new QGroupBox(tab_raw);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_23 = new QVBoxLayout(groupBox_8);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_13 = new QLabel(groupBox_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(label_13);

        comboBox_ifaces = new QComboBox(groupBox_8);
        comboBox_ifaces->addItem(QString());
        comboBox_ifaces->addItem(QString());
        comboBox_ifaces->addItem(QString());
        comboBox_ifaces->addItem(QString());
        comboBox_ifaces->setObjectName(QString::fromUtf8("comboBox_ifaces"));

        horizontalLayout_23->addWidget(comboBox_ifaces);


        verticalLayout_24->addLayout(horizontalLayout_23);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_23);

        pushButton_InitCan = new QPushButton(groupBox_8);
        pushButton_InitCan->setObjectName(QString::fromUtf8("pushButton_InitCan"));

        horizontalLayout_25->addWidget(pushButton_InitCan);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_24);


        verticalLayout_24->addLayout(horizontalLayout_25);


        verticalLayout_23->addLayout(verticalLayout_24);


        verticalLayout_12->addWidget(groupBox_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        groupBox = new QGroupBox(tab_raw);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox_cmdOn = new QCheckBox(groupBox);
        checkBox_cmdOn->setObjectName(QString::fromUtf8("checkBox_cmdOn"));
        checkBox_cmdOn->setChecked(true);

        verticalLayout->addWidget(checkBox_cmdOn);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox_channel = new QSpinBox(groupBox);
        spinBox_channel->setObjectName(QString::fromUtf8("spinBox_channel"));
        spinBox_channel->setMinimum(0);
        spinBox_channel->setMaximum(99);
        spinBox_channel->setValue(1);

        horizontalLayout->addWidget(spinBox_channel);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        lineEdit_id_train = new QLineEdit(groupBox);
        lineEdit_id_train->setObjectName(QString::fromUtf8("lineEdit_id_train"));

        horizontalLayout_19->addWidget(lineEdit_id_train);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_19->addWidget(label_9);


        verticalLayout->addLayout(horizontalLayout_19);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_Init = new QPushButton(groupBox);
        pushButton_Init->setObjectName(QString::fromUtf8("pushButton_Init"));

        horizontalLayout_2->addWidget(pushButton_Init);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_11->addWidget(groupBox);

        groupBox_7 = new QGroupBox(tab_raw);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_21 = new QVBoxLayout(groupBox_7);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        checkBox_cmdOn_ans = new QCheckBox(groupBox_7);
        checkBox_cmdOn_ans->setObjectName(QString::fromUtf8("checkBox_cmdOn_ans"));

        verticalLayout_22->addWidget(checkBox_cmdOn_ans);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        spinBox_channel_ans = new QSpinBox(groupBox_7);
        spinBox_channel_ans->setObjectName(QString::fromUtf8("spinBox_channel_ans"));
        spinBox_channel_ans->setMinimum(0);
        spinBox_channel_ans->setMaximum(99999);
        spinBox_channel_ans->setValue(1);

        horizontalLayout_22->addWidget(spinBox_channel_ans);

        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_22->addWidget(label_12);


        verticalLayout_22->addLayout(horizontalLayout_22);


        verticalLayout_21->addLayout(verticalLayout_22);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        spinBox_level = new QSpinBox(groupBox_7);
        spinBox_level->setObjectName(QString::fromUtf8("spinBox_level"));
        spinBox_level->setMinimum(-90);
        spinBox_level->setMaximum(-20);
        spinBox_level->setValue(-90);

        horizontalLayout_31->addWidget(spinBox_level);

        label_21 = new QLabel(groupBox_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_31->addWidget(label_21);


        verticalLayout_21->addLayout(horizontalLayout_31);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        spinBox_error_code = new QSpinBox(groupBox_7);
        spinBox_error_code->setObjectName(QString::fromUtf8("spinBox_error_code"));
        spinBox_error_code->setMinimum(0);
        spinBox_error_code->setMaximum(256);
        spinBox_error_code->setValue(0);

        horizontalLayout_40->addWidget(spinBox_error_code);

        label_23 = new QLabel(groupBox_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_40->addWidget(label_23);


        verticalLayout_21->addLayout(horizontalLayout_40);

        checkBox_mbox0_free = new QCheckBox(groupBox_7);
        checkBox_mbox0_free->setObjectName(QString::fromUtf8("checkBox_mbox0_free"));
        checkBox_mbox0_free->setEnabled(false);

        verticalLayout_21->addWidget(checkBox_mbox0_free);

        checkBox_mbox0_err_send = new QCheckBox(groupBox_7);
        checkBox_mbox0_err_send->setObjectName(QString::fromUtf8("checkBox_mbox0_err_send"));
        checkBox_mbox0_err_send->setEnabled(false);

        verticalLayout_21->addWidget(checkBox_mbox0_err_send);

        checkBox_mbox0_arb_lost = new QCheckBox(groupBox_7);
        checkBox_mbox0_arb_lost->setObjectName(QString::fromUtf8("checkBox_mbox0_arb_lost"));
        checkBox_mbox0_arb_lost->setEnabled(false);

        verticalLayout_21->addWidget(checkBox_mbox0_arb_lost);

        checkBox_mbox0_sent_succ = new QCheckBox(groupBox_7);
        checkBox_mbox0_sent_succ->setObjectName(QString::fromUtf8("checkBox_mbox0_sent_succ"));
        checkBox_mbox0_sent_succ->setEnabled(false);

        verticalLayout_21->addWidget(checkBox_mbox0_sent_succ);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        spinBox_error_rcv = new QSpinBox(groupBox_7);
        spinBox_error_rcv->setObjectName(QString::fromUtf8("spinBox_error_rcv"));
        spinBox_error_rcv->setEnabled(false);
        spinBox_error_rcv->setMinimum(0);
        spinBox_error_rcv->setMaximum(256);
        spinBox_error_rcv->setValue(0);

        horizontalLayout_41->addWidget(spinBox_error_rcv);

        label_24 = new QLabel(groupBox_7);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_41->addWidget(label_24);


        verticalLayout_21->addLayout(horizontalLayout_41);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        spinBox_error_trans = new QSpinBox(groupBox_7);
        spinBox_error_trans->setObjectName(QString::fromUtf8("spinBox_error_trans"));
        spinBox_error_trans->setEnabled(false);
        spinBox_error_trans->setMinimum(0);
        spinBox_error_trans->setMaximum(256);
        spinBox_error_trans->setValue(0);

        horizontalLayout_42->addWidget(spinBox_error_trans);

        label_25 = new QLabel(groupBox_7);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_42->addWidget(label_25);


        verticalLayout_21->addLayout(horizontalLayout_42);

        checkBox_rk_err_rcv = new QCheckBox(groupBox_7);
        checkBox_rk_err_rcv->setObjectName(QString::fromUtf8("checkBox_rk_err_rcv"));

        verticalLayout_21->addWidget(checkBox_rk_err_rcv);

        checkBox_rk_succ_trans = new QCheckBox(groupBox_7);
        checkBox_rk_succ_trans->setObjectName(QString::fromUtf8("checkBox_rk_succ_trans"));

        verticalLayout_21->addWidget(checkBox_rk_succ_trans);

        checkBox_spi_err = new QCheckBox(groupBox_7);
        checkBox_spi_err->setObjectName(QString::fromUtf8("checkBox_spi_err"));

        verticalLayout_21->addWidget(checkBox_spi_err);

        checkBox_spi_exch = new QCheckBox(groupBox_7);
        checkBox_spi_exch->setObjectName(QString::fromUtf8("checkBox_spi_exch"));

        verticalLayout_21->addWidget(checkBox_spi_exch);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        spinBox_master_on_slave = new QSpinBox(groupBox_7);
        spinBox_master_on_slave->setObjectName(QString::fromUtf8("spinBox_master_on_slave"));
        spinBox_master_on_slave->setEnabled(false);
        spinBox_master_on_slave->setMinimum(0);
        spinBox_master_on_slave->setMaximum(128);
        spinBox_master_on_slave->setValue(0);

        horizontalLayout_43->addWidget(spinBox_master_on_slave);

        label_26 = new QLabel(groupBox_7);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_43->addWidget(label_26);


        verticalLayout_21->addLayout(horizontalLayout_43);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setSpacing(6);
        horizontalLayout_44->setObjectName(QString::fromUtf8("horizontalLayout_44"));
        spinBox_slave_on_master = new QSpinBox(groupBox_7);
        spinBox_slave_on_master->setObjectName(QString::fromUtf8("spinBox_slave_on_master"));
        spinBox_slave_on_master->setEnabled(false);
        spinBox_slave_on_master->setMinimum(0);
        spinBox_slave_on_master->setMaximum(128);
        spinBox_slave_on_master->setValue(0);

        horizontalLayout_44->addWidget(spinBox_slave_on_master);

        label_27 = new QLabel(groupBox_7);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_44->addWidget(label_27);


        verticalLayout_21->addLayout(horizontalLayout_44);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        lineEdit_brpm_counter = new QLineEdit(groupBox_7);
        lineEdit_brpm_counter->setObjectName(QString::fromUtf8("lineEdit_brpm_counter"));

        horizontalLayout_24->addWidget(lineEdit_brpm_counter);

        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_24->addWidget(label_14);


        verticalLayout_21->addLayout(horizontalLayout_24);


        verticalLayout_11->addWidget(groupBox_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);


        horizontalLayout_10->addLayout(verticalLayout_11);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));

        horizontalLayout_10->addLayout(verticalLayout_10);


        verticalLayout_12->addLayout(horizontalLayout_10);


        verticalLayout_13->addLayout(verticalLayout_12);


        verticalLayout_14->addLayout(verticalLayout_13);


        horizontalLayout_16->addLayout(verticalLayout_14);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        groupBox_6 = new QGroupBox(tab_raw);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout_19 = new QVBoxLayout(groupBox_6);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(label_10);

        spinBox_from = new QSpinBox(groupBox_6);
        spinBox_from->setObjectName(QString::fromUtf8("spinBox_from"));
        spinBox_from->setMinimum(0);
        spinBox_from->setMaximum(999);

        horizontalLayout_20->addWidget(spinBox_from);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(label_11);

        spinBox_N = new QSpinBox(groupBox_6);
        spinBox_N->setObjectName(QString::fromUtf8("spinBox_N"));
        spinBox_N->setMinimum(1);
        spinBox_N->setMaximum(52);
        spinBox_N->setValue(6);

        horizontalLayout_20->addWidget(spinBox_N);

        checkBox_repeat = new QCheckBox(groupBox_6);
        checkBox_repeat->setObjectName(QString::fromUtf8("checkBox_repeat"));
        checkBox_repeat->setChecked(true);

        horizontalLayout_20->addWidget(checkBox_repeat);


        verticalLayout_20->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_21);

        pushButton_Send = new QPushButton(groupBox_6);
        pushButton_Send->setObjectName(QString::fromUtf8("pushButton_Send"));
        pushButton_Send->setCheckable(true);

        horizontalLayout_21->addWidget(pushButton_Send);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_22);


        verticalLayout_20->addLayout(horizontalLayout_21);


        verticalLayout_19->addLayout(verticalLayout_20);


        verticalLayout_17->addWidget(groupBox_6);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_15);

        label_6 = new QLabel(tab_raw);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);

        horizontalLayout_13->addWidget(label_6);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_16);


        verticalLayout_17->addLayout(horizontalLayout_13);

        groupBox_5 = new QGroupBox(tab_raw);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_15 = new QVBoxLayout(groupBox_5);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_7);

        spinBox_brp = new QSpinBox(groupBox_5);
        spinBox_brp->setObjectName(QString::fromUtf8("spinBox_brp"));
        spinBox_brp->setMinimum(0);
        spinBox_brp->setMaximum(999);

        horizontalLayout_14->addWidget(spinBox_brp);


        verticalLayout_16->addLayout(horizontalLayout_14);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(label_8);

        spinBox_brp_n_bytes = new QSpinBox(groupBox_5);
        spinBox_brp_n_bytes->setObjectName(QString::fromUtf8("spinBox_brp_n_bytes"));
        spinBox_brp_n_bytes->setMinimum(0);
        spinBox_brp_n_bytes->setMaximum(999);
        spinBox_brp_n_bytes->setValue(56);

        horizontalLayout_18->addWidget(spinBox_brp_n_bytes);


        verticalLayout_16->addLayout(horizontalLayout_18);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_17);

        pushButton_Imit_BRP = new QPushButton(groupBox_5);
        pushButton_Imit_BRP->setObjectName(QString::fromUtf8("pushButton_Imit_BRP"));

        horizontalLayout_15->addWidget(pushButton_Imit_BRP);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_18);


        verticalLayout_16->addLayout(horizontalLayout_15);


        verticalLayout_15->addLayout(verticalLayout_16);


        verticalLayout_17->addWidget(groupBox_5);

        plainTextEdit_in = new QPlainTextEdit(tab_raw);
        plainTextEdit_in->setObjectName(QString::fromUtf8("plainTextEdit_in"));
        plainTextEdit_in->setEnabled(false);

        verticalLayout_17->addWidget(plainTextEdit_in);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_19);

        pushButton_3 = new QPushButton(tab_raw);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_17->addWidget(pushButton_3);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_20);


        verticalLayout_17->addLayout(horizontalLayout_17);


        horizontalLayout_16->addLayout(verticalLayout_17);


        verticalLayout_18->addLayout(horizontalLayout_16);


        horizontalLayout_26->addLayout(verticalLayout_18);

        tabWidget->addTab(tab_raw, QString());

        horizontalLayout_38->addWidget(tabWidget);

        groupBox_14 = new QGroupBox(centralWidget);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setAlignment(Qt::AlignCenter);
        horizontalLayout_37 = new QHBoxLayout(groupBox_14);
        horizontalLayout_37->setSpacing(0);
        horizontalLayout_37->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        horizontalLayout_37->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        plainTextEdit_out = new QPlainTextEdit(groupBox_14);
        plainTextEdit_out->setObjectName(QString::fromUtf8("plainTextEdit_out"));
        plainTextEdit_out->setEnabled(false);
        plainTextEdit_out->setMinimumSize(QSize(230, 0));

        verticalLayout_9->addWidget(plainTextEdit_out);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        pushButton_2 = new QPushButton(groupBox_14);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_9->addWidget(pushButton_2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);


        verticalLayout_9->addLayout(horizontalLayout_9);


        horizontalLayout_37->addLayout(verticalLayout_9);


        horizontalLayout_38->addWidget(groupBox_14);


        verticalLayout_25->addLayout(horizontalLayout_38);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_11->addWidget(pushButton);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_12);


        verticalLayout_25->addLayout(horizontalLayout_11);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), plainTextEdit_out, SLOT(clear()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), plainTextEdit_in, SLOT(clear()));
        QObject::connect(pushButton_imit, SIGNAL(toggled(bool)), pushButton_send_SA, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202 \320\277\321\200\320\270\320\265\320\274\320\260-\320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\270 \320\264\320\260\320\275\320\275\321\213\321\205 \320\237\320\220-\320\241\320\220", nullptr));
        label_SA_cntr->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_SA->setText(QCoreApplication::translate("MainWindow", "\320\241\320\220", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\265\321\202\321\207\320\270\320\272 \320\246\320\237", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\264 \321\201\321\202\320\260\320\275\321\206\320\270\320\270", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272\320\276\320\262\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272\320\276\320\262\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\321\201\321\207\320\265\321\202\321\207\320\270\320\272", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272\320\276\320\262\321\213\320\271 \320\275\320\276\320\274\320\265\321\200 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\277\321\203\321\202\320\270 \320\276\321\202 \320\246\320\237", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\263\320\273\320\260\320\262\320\275\320\276\320\263\320\276 \321\201\321\202\320\260\320\275\321\206\320\270\320\276\320\275\320\275\320\276\320\263\320\276 \320\277\321\203\321\202\320\270", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272\320\276\320\262\321\213\320\271 \320\275\320\276\320\274\320\265\321\200 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\262\320\265\321\200\321\201\320\270\320\270 \320\277\321\200\320\276\321\202\320\276\320\272\320\276\320\273\320\260 \320\277\320\276 \321\200\320\260\320\264\320\270\320\272\320\260\320\275\320\260\320\273\321\203", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\320\232\320\262\320\270\321\202\320\260\320\275\321\206\320\270\321\217 \320\241\320\220", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\321\203\320\277\320\270\320\272\320\260", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\264 \321\201\321\202\320\260\320\275\321\206\320\270\320\270 \320\276\320\261\320\276\321\200\320\276\321\202\320\260", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\275\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\275\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\265\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        label_62->setText(QCoreApplication::translate("MainWindow", "\320\230\320\264\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\202\320\276\321\200 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\321\200\320\265\321\210\320\265\320\275\320\275\321\213\320\265 \321\200\320\265\320\266\320\270\320\274\321\213 \320\276\321\202 \320\241\320\220", nullptr));
        comboBox_ReadyGo->setItemText(0, QCoreApplication::translate("MainWindow", "\320\275\320\265 \320\263\320\276\321\202\320\276\320\262 \320\272 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\216", nullptr));
        comboBox_ReadyGo->setItemText(1, QCoreApplication::translate("MainWindow", "\320\263\320\276\321\202\320\276\320\262 \320\272 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\216", nullptr));

        comboBox_AVInfo->setItemText(0, QCoreApplication::translate("MainWindow", "\320\275\320\265\321\202 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262 \320\220\320\222", nullptr));
        comboBox_AVInfo->setItemText(1, QCoreApplication::translate("MainWindow", "\320\275\320\260\320\273\320\270\321\207\320\270\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262 \320\220\320\222", nullptr));

        comboBox_enModes->setItemText(0, QCoreApplication::translate("MainWindow", "\320\275\320\265\321\202 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270", nullptr));
        comboBox_enModes->setItemText(1, QCoreApplication::translate("MainWindow", "\321\200\320\265\320\266\320\270\320\274 \320\220\320\222", nullptr));
        comboBox_enModes->setItemText(2, QCoreApplication::translate("MainWindow", "\321\200\320\265\320\266\320\270\320\274 \320\232\320\241", nullptr));
        comboBox_enModes->setItemText(3, QCoreApplication::translate("MainWindow", "\321\200\320\265\320\266\320\270\320\274 \320\220\320\233\320\241", nullptr));

        comboBox_OPVinfo->setItemText(0, QCoreApplication::translate("MainWindow", "\320\275\320\265\321\202 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270 \320\276\321\202 \320\224\320\237\320\243", nullptr));
        comboBox_OPVinfo->setItemText(1, QCoreApplication::translate("MainWindow", "\320\275\320\265\320\264\320\276\320\265\320\267\320\264 \320\264\320\276 \320\267\320\276\320\275\321\213 \320\236\320\237\320\222", nullptr));
        comboBox_OPVinfo->setItemText(2, QCoreApplication::translate("MainWindow", "\320\277\320\265\321\200\320\265\320\265\320\267\320\264 \320\267\320\276\320\275\321\213 \320\236\320\237\320\222", nullptr));
        comboBox_OPVinfo->setItemText(3, QCoreApplication::translate("MainWindow", "\320\262 \320\267\320\276\320\275\320\265 \320\236\320\237\320\222", nullptr));
        comboBox_OPVinfo->setItemText(4, QCoreApplication::translate("MainWindow", "\320\276\321\202\320\272\320\260\320\267 \320\224\320\237\320\243", nullptr));

        comboBox_exactstop->setItemText(0, QCoreApplication::translate("MainWindow", "\320\275\320\265\321\202 \321\202\320\276\321\207\320\275\320\276\320\271 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270 \321\201\320\276\321\201\321\202\320\260\320\262\320\260", nullptr));
        comboBox_exactstop->setItemText(1, QCoreApplication::translate("MainWindow", "\321\202\320\276\321\207\320\275\320\260\321\217 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \321\201\320\276\321\201\321\202\320\260\320\262\320\260", nullptr));

        groupBox_13->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \321\201\321\202\320\260\320\275\321\206\320\270\320\276\320\275\320\275\321\213\321\205 \320\264\320\262\320\265\321\200\320\265\320\271", nullptr));
        comboBox_DoorState->setItemText(0, QCoreApplication::translate("MainWindow", "\320\275\320\265\321\202 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        comboBox_DoorState->setItemText(1, QCoreApplication::translate("MainWindow", "\320\276\321\202\320\272\321\200\321\213\321\202\321\213", nullptr));
        comboBox_DoorState->setItemText(2, QCoreApplication::translate("MainWindow", "\320\267\320\260\320\272\321\200\321\213\321\202\321\213", nullptr));
        comboBox_DoorState->setItemText(3, QCoreApplication::translate("MainWindow", "\320\262\321\213\320\272\320\273\321\216\321\207\320\265\320\275\321\213", nullptr));

        comboBox_PDS->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\224\320\241: \320\275\320\265\321\202 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        comboBox_PDS->setItemText(1, QCoreApplication::translate("MainWindow", "\320\237\320\224\320\241: \320\275\320\265 \321\201\320\262\320\276\320\261\320\276\320\264\320\265\320\275", nullptr));
        comboBox_PDS->setItemText(2, QCoreApplication::translate("MainWindow", "\320\237\320\224\320\241: \321\201\320\262\320\276\320\261\320\276\320\264\320\265\320\275", nullptr));
        comboBox_PDS->setItemText(3, QCoreApplication::translate("MainWindow", "\320\237\320\224\320\241: \320\262\321\213\320\272\320\273\321\216\321\207\320\265\320\275", nullptr));

        comboBox_ArriveCtrl->setItemText(0, QCoreApplication::translate("MainWindow", "\320\275\320\265\321\202 \321\201\320\276\321\201\321\202\320\260\320\262\320\260", nullptr));
        comboBox_ArriveCtrl->setItemText(1, QCoreApplication::translate("MainWindow", "\320\277\320\276\320\265\320\267\320\264 \320\262 \320\267\320\276\320\275\320\265 \320\236\320\237\320\222", nullptr));

        comboBox_DoorGap->setItemText(0, QCoreApplication::translate("MainWindow", "\320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202 \320\267\320\260\320\267\320\276\321\200\320\260 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\265\320\275", nullptr));
        comboBox_DoorGap->setItemText(1, QCoreApplication::translate("MainWindow", "\320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202 \320\267\320\260\320\267\320\276\321\200\320\260 \320\270\321\201\320\277\321\200\320\260\320\262\320\265\320\275", nullptr));

        comboBox_SetOk->setItemText(0, QCoreApplication::translate("MainWindow", "\320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202 \320\275\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\265\320\275", nullptr));
        comboBox_SetOk->setItemText(1, QCoreApplication::translate("MainWindow", "\320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202 \320\270\321\201\320\277\321\200\320\260\320\262\320\265\320\275", nullptr));

        comboBox_Mode->setItemText(0, QCoreApplication::translate("MainWindow", "\321\200\321\203\321\207\320\275\320\276\320\271", nullptr));
        comboBox_Mode->setItemText(1, QCoreApplication::translate("MainWindow", "\320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271", nullptr));

        pushButton_send_SA->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_imit->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\320\270\321\202\320\260\321\206\320\270\321\217", nullptr));
        label_61->setText(QCoreApplication::translate("MainWindow", "\320\237\320\220", nullptr));
        label_PA_cntr->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_59->setText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\265\321\202\321\207\320\270\320\272 \320\246\320\237", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\264 \321\201\321\202\320\260\320\275\321\206\320\270\320\270 \320\276\321\202 \320\237\320\220 \320\270\320\267 \320\221\320\224", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \321\200\320\265\320\266\320\270\320\274 \320\237\320\220", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\265\321\202\321\207\320\270\320\272 \321\201\320\276\320\261\321\213\321\202\320\270\320\271 \320\237\320\220", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\321\214\320\275\321\213\320\271 \321\201\321\207\320\265\321\202\321\207\320\270\320\272 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\271", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\263\320\273\320\260\320\262\320\275\320\276\320\263\320\276 \321\201\321\202\320\260\320\275\321\206\320\270\320\276\320\275\320\275\320\276\320\263\320\276 \320\277\321\203\321\202\320\270", nullptr));
        comboBox_mode->setItemText(0, QCoreApplication::translate("MainWindow", "\320\220\320\222", nullptr));
        comboBox_mode->setItemText(1, QCoreApplication::translate("MainWindow", "\320\232\320\241", nullptr));
        comboBox_mode->setItemText(2, QCoreApplication::translate("MainWindow", "\320\220\320\233\320\241", nullptr));
        comboBox_mode->setItemText(3, QCoreApplication::translate("MainWindow", "Unknown", nullptr));

        label_43->setText(QCoreApplication::translate("MainWindow", "\320\267\320\260\320\262. \320\275\320\276\320\274\320\265\321\200\320\260 \320\263\320\276\320\273\320\276\320\262\321\213", nullptr));
        label_57->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272\320\276\320\262\321\213\320\271 \320\275\320\276\320\274\320\265\321\200 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\262\320\265\321\200\321\201\320\270\320\270 \320\277\321\200\320\276\321\202\320\276\320\272\320\276\320\273\320\260 \320\277\320\276 \321\200\320\260\320\264\320\270\320\272\320\260\320\275\320\260\320\273\321\203", nullptr));
        label_58->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272\320\276\320\262\321\213\320\271 \320\275\320\276\320\274\320\265\321\200 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\265\321\200\320\265\320\264\321\214", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        pushButton_stopped->setText(QCoreApplication::translate("MainWindow", "\320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275", nullptr));
        pushButton_OPV->setText(QCoreApplication::translate("MainWindow", "\320\262 \320\267\320\276\320\275\320\265 \320\236\320\237\320\222", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "\321\200\320\265\320\266\320\270\320\274 \321\200\320\260\320\261\320\276\321\202\321\213 \320\237\320\220", nullptr));
        pushButton_MoveDir->setText(QCoreApplication::translate("MainWindow", "\320\264\320\262\320\270\320\266\320\265\320\275\320\270\320\265\n"
"\320\262 \320\275\320\265\320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\320\276\320\274 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\270", nullptr));
        pushButton_DoorCtrl->setText(QCoreApplication::translate("MainWindow", "\320\264\320\262\320\265\321\200\320\270 \320\267\320\260\320\272\321\200\321\213\321\202\321\213", nullptr));
        pushButton_transit->setText(QCoreApplication::translate("MainWindow", "\321\202\321\200\320\260\320\275\320\267\320\270\321\202", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\261\321\213\321\202\320\270\321\217 \320\276\321\202 \320\237\320\220", nullptr));
        pushButton_Doors_0->setText(QCoreApplication::translate("MainWindow", "\320\261\320\265\320\267 \320\262\320\275\320\265\321\210\320\275\320\265\320\263\320\276 \321\201\320\276\320\261\321\213\321\202\320\270\321\217", nullptr));
        pushButton_Doors_1->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\276\321\202\320\272\321\200\321\213\321\202\320\270\320\265 \320\264\320\262\320\265\321\200\320\265\320\271", nullptr));
        pushButton_Doors_2->setText(QCoreApplication::translate("MainWindow", "\320\240\321\203\321\207\320\275\320\276\320\265 \320\276\321\202\320\272\321\200\321\213\321\202\320\270\320\265 \320\264\320\262\320\265\321\200\320\265\320\271", nullptr));
        pushButton_Doors_3->setText(QCoreApplication::translate("MainWindow", "\320\240\321\203\321\207\320\275\320\276\320\265 \320\267\320\260\320\272\321\200\321\213\321\202\320\270\320\265 \320\264\320\262\320\265\321\200\320\265\320\271", nullptr));
        pushButton_VZP->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\320\265\320\267\320\264\n"
"\320\263\320\276\321\202\320\276\320\262 \320\276\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214\321\201\321\217", nullptr));
        pushButton_GrafReq->setText(QCoreApplication::translate("MainWindow", "\321\202\321\200\320\265\320\261\321\203\320\265\321\202\321\201\321\217\n"
"\320\263\321\200\320\260\321\204\320\270\320\272\320\276\320\262\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        checkBox_nosync->setText(QCoreApplication::translate("MainWindow", "080\n"
"1BD", nullptr));
        checkBox_test->setText(QCoreApplication::translate("MainWindow", "test", nullptr));
        checkBox_sync->setText(QCoreApplication::translate("MainWindow", "Sync", nullptr));
        checkBox_testsys->setText(QCoreApplication::translate("MainWindow", "myCheckBox", nullptr));
        pushButton_send_PA->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "\320\237\320\243\320\241\320\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_radio), QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\202\320\276\320\272\320\276\320\273", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\237\320\220 - \320\221\320\240\320\237 (Russl)", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \321\201\320\265\321\202\320\270", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\321\200\321\204\320\265\320\271\321\201", nullptr));
        comboBox_ifaces->setItemText(0, QCoreApplication::translate("MainWindow", "can0", nullptr));
        comboBox_ifaces->setItemText(1, QCoreApplication::translate("MainWindow", "can1", nullptr));
        comboBox_ifaces->setItemText(2, QCoreApplication::translate("MainWindow", "vcan0", nullptr));
        comboBox_ifaces->setItemText(3, QCoreApplication::translate("MainWindow", "vcan1", nullptr));

        pushButton_InitCan->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\320\270\321\206\320\270\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "1. \320\230\320\275\320\270\321\206\320\270\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\221\320\240\320\237", nullptr));
        checkBox_cmdOn->setText(QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\277\320\265\321\200\320\265\320\264\320\260\321\202\321\207\320\270\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "No \321\200\320\260\320\264\320\270\320\276\320\272\320\260\320\275\320\260\320\273\320\260", nullptr));
        lineEdit_id_train->setText(QCoreApplication::translate("MainWindow", "27792a99", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Id \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        pushButton_Init->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\264\320\260\321\202\321\214", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "1. \320\241\321\202\320\260\321\202\321\203\321\201 \320\221\320\240\320\237", nullptr));
        checkBox_cmdOn_ans->setText(QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\277\320\265\321\200\320\265\320\264\320\260\321\202\321\207\320\270\320\272\320\260", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "No \321\200\320\260\320\264\320\270\320\276\320\272\320\260\320\275\320\260\320\273\320\260", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \321\201\320\270\320\263\320\275\320\260\320\273\320\260 \320\277\320\276 \320\240\320\232\n"
"0, \321\202\320\276 \321\201\320\262\321\217\320\267\320\270 \320\275\320\265\321\202", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\264 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\271 \320\276\320\261\320\275\320\260\321\200\321\203\320\266\320\265\320\275\320\275\320\276\320\271 \320\276\321\210\320\270\320\261\320\272\320\270\n"
"\320\275\320\260 CAN-\321\210\320\270\320\275\320\265", nullptr));
        checkBox_mbox0_free->setText(QCoreApplication::translate("MainWindow", "\320\241\320\262\320\276\320\261\320\276\320\264\320\275\320\276\321\201\321\202\321\214 mailbox0 CAN", nullptr));
        checkBox_mbox0_err_send->setText(QCoreApplication::translate("MainWindow", "\320\236\321\210\320\270\320\261\320\272\320\260 \320\277\321\200\320\270 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\265 \320\270\320\267 mailbox0 CAN", nullptr));
        checkBox_mbox0_arb_lost->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\202\320\265\321\200\321\217 \320\260\321\200\320\261\320\270\321\202\321\200\320\260\320\266\320\260 \320\262 mailbox0 CAN", nullptr));
        checkBox_mbox0_sent_succ->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\320\277\320\265\321\210\320\275\320\260\321\217 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\260 \320\270\320\267 mailbox0 CAN", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\276\321\210\320\270\320\261\320\276\320\272 \320\277\321\200\320\270 \320\277\321\200\320\270\321\221\320\274\320\265 \320\277\320\276 CAN-\321\210\320\270\320\275\320\265", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\276\321\210\320\270\320\261\320\276\320\272 \320\277\321\200\320\270 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\265 \320\277\320\276 CAN-\321\210\320\270\320\275\320\265", nullptr));
        checkBox_rk_err_rcv->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\321\221\320\274 \320\277\320\276 \320\240\320\232 \320\277\321\200\320\276\321\210\321\221\320\273 \321\201 \320\276\321\210\320\270\320\261\320\272\320\276\320\271", nullptr));
        checkBox_rk_succ_trans->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\267\320\275\320\260\320\272 \321\203\321\201\320\277\320\265\321\210\320\275\320\276\320\271 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\270 \320\277\320\276 \320\240\320\232", nullptr));
        checkBox_spi_err->setText(QCoreApplication::translate("MainWindow", "\320\236\321\210\320\270\320\261\320\272\320\270 \320\277\321\200\320\270 \320\276\320\261\320\274\320\265\320\275\320\265 \320\277\320\276 SPI-\321\210\320\270\320\275\320\265", nullptr));
        checkBox_spi_exch->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 \320\276\320\261\320\274\320\265\320\275\320\260 \320\277\320\276 SPI-\321\210\320\270\320\275\320\265", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\272 \320\274\320\260\321\201\321\202\320\265\321\200 \320\277\321\200\320\270\320\275\320\270\320\274\320\260\320\265\321\202\321\201\321\217 \320\275\320\260 \321\201\320\273\320\265\320\271\320\262\320\265 \320\277\320\276 SPI-\321\210\320\270\320\275\320\265", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\272 \321\201\320\273\320\265\320\271\320\262 \320\277\321\200\320\270\320\275\320\270\320\274\320\260\320\265\321\202\321\201\321\217 \320\275\320\260 \320\274\320\260\321\201\321\202\320\265\321\200\320\265 \320\277\320\276 SPI-\321\210\320\270\320\275\320\265", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\321\201\321\207\320\265\321\202\321\207\320\270\320\272", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\264\320\260\321\207\320\260 \320\264\320\260\320\275\320\275\321\213\321\205 \321\201 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\271 \320\264\320\273\320\270\320\275\320\275\320\276\320\271 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\230\321\202\320\265\321\200\320\260\321\206\320\270\321\217 \321\201\n"
"\321\207\320\270\321\201\320\273\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276\n"
"\320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        checkBox_repeat->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\320\276\321\217\320\275\320\275\320\260\321\217\n"
"\320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\260", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\321\203", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\221\320\240\320\237 - \320\237\320\220", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "2. \320\224\320\260\320\275\320\275\321\213\320\265 \320\276\321\202 \320\246\320\237 - 56 \320\261\320\260\320\271\321\202 (41 + 15\321\200\320\265\320\267\320\265\321\200\320\262), 8 \321\204\321\200\320\265\320\271\320\274\320\276\320\262", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\230\321\202\320\265\321\200\320\260\321\206\320\270\321\217 \321\201\n"
"\321\207\320\270\321\201\320\273\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\n"
"\320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        pushButton_Imit_BRP->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\264\320\260\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_raw), QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\221\320\240\320\2371", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("MainWindow", "CAN", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
