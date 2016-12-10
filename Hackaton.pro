#-------------------------------------------------
#
# Project created by QtCreator 2016-12-10T14:49:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Hackaton
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    scene.cpp \
    startbutton.cpp \
    dialogbox.cpp \
    interactiveobject.cpp \
    mainmenu.cpp

HEADERS  += mainwindow.h \
    scene.h \
    startbutton.h \
    dialogbox.h \
    interactiveobject.h \
    mainmenu.h

FORMS    += mainwindow.ui

RESOURCES += \
    scenes/1/scene1.qrc
