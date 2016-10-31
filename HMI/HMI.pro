#-------------------------------------------------
#
# Project created by QtCreator 2016-08-13T12:54:23
#
#-------------------------------------------------

QT       -= core gui

TARGET = HMI
TEMPLATE = lib
CONFIG += staticlib

SOURCES += hmimodemanager.cpp \
    hmiprogram.cpp \
    hmiconfig.cpp \
    hmiauto.cpp \
    hmiutility.cpp \
    hmiteach.cpp

HEADERS += hmimodemanager.h \
    hmiprogram.h \
    hmiconfig.h \
    hmiauto.h \
    hmiutility.h \
    hmiteach.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
