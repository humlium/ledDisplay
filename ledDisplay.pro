#-------------------------------------------------
#
# Project created by QtCreator 2015-09-01T22:10:55
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ledDisplay
TEMPLATE = app
#CONFIG+= static

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    resource.qrc
