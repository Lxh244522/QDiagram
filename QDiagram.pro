#-------------------------------------------------
#
# Project created by QtCreator 2016-11-28T11:25:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QDiagram
TEMPLATE = app


SOURCES += main.cpp\
        diagramwindow.cpp \
    node.cpp \
    link.cpp

HEADERS  += diagramwindow.h \
    node.h \
    link.h

RESOURCES += \
    image.qrc
