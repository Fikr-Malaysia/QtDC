#-------------------------------------------------
#
# Project created by QtCreator 2013-09-07T11:25:58
#
#-------------------------------------------------

QT       += core gui sql

TARGET = QtDC
TEMPLATE = app

include(dashboard/dashboard.pri)

SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp


HEADERS  += mainwindow.h \
    logindialog.h \
    initdb.h

FORMS    += mainwindow.ui \
    logindialog.ui

RESOURCES += \
    icons.qrc


