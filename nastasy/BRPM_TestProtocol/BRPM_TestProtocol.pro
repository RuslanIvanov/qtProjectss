#-------------------------------------------------
#
# Project created by QtCreator 2019-08-24T14:57:45
#
#-------------------------------------------------

QT       += core gui serialbus serialport network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BRPM_TestProtocol
TEMPLATE = app

OBJECTS_DIR = build
MOC_DIR = build

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        brpm_encoder.cpp \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        brpm_encoder.h \
        data.h \
        mainwindow.h

FORMS += \
        mainwindow.ui

#Дата сборки
BUILD_DATE = $$system(LANG=en_US.UTF-8; export LANG; LANGUAGE=en; export LANGUAGE; date +%d.%m.%y)
DEFINES += "BUILD_DATE=\"\\\"$$BUILD_DATE\\\"\""
#Ветка
BRANCH = $$system(LANG=en_US.UTF-8; export LANG; LANGUAGE=en; export LANGUAGE; git rev-parse --abbrev-ref HEAD )
DEFINES += "BRANCH=\"\\\"$$BRANCH\\\"\""
#Инкрементный номер коммита
REVISION = $$system(LANG=en_US.UTF-8; export LANG; LANGUAGE=en; export LANGUAGE; git log --oneline | wc -l)
DEFINES += "REVISION=\"\\\"$$REVISION\\\"\""
#Число модификаций относительно зафиксированной версии
SOURCES_STATUS = $$system(LANG=en_US.UTF-8; export LANG; LANGUAGE=en; export LANGUAGE; git diff --shortstat)
DEFINES += "SOURCES_STATUS=\"\\\"$$SOURCES_STATUS\\\"\""
#Комментарий к изменнениям в последнем коммите
GIT_LOG = $$system(LANG=en_US.UTF-8; export LANG; LANGUAGE=en; export LANGUAGE; git log --oneline | head -n1)
DEFINES += "GIT_LOG=\"\\\"$$GIT_LOG\\\"\""

# Default rules for deployment.
target.path = /usr/local/
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    rc.qrc
