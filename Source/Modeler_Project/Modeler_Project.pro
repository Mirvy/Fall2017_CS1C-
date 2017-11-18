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
    shapeParser.cpp \
    MainWindow.cpp \
    canvas.cpp \
    tabinterface.cpp \
    modtab.cpp

HEADERS  += shape.h \
    vector.h \
    MainWindow.h \
    canvas.h \
    tabinterface.h \
    modtab.h

DISTFILES += \
    ../build-Modeler_Project-Desktop-Debug/shapes.txt

FORMS += \
    MainWindow.ui
