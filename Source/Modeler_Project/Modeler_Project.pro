#-------------------------------------------------
#
# Project created by QtCreator 2017-10-26T11:41:07
#
#-------------------------------------------------

QT       += core gui

CONFIG += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Modeler_Project
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp \
    shapeParser.cpp

HEADERS  += shape.h \
    vector.h \
    mainwindow.h

DISTFILES +=

FORMS += \
    mainwindow.ui
