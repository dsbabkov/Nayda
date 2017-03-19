#-------------------------------------------------
#
# Project created by QtCreator 2017-03-11T17:33:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Nayda
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        main_application.cpp \
    BeforeTheGame/Classes/Before_TheGame_Interface.cpp \
    BeforeTheGame/Classes/Before_TheGame_Master.cpp \
    BeforeTheGame/Classes/Before_TheGame_Server.cpp \
    Classes/Parent_GUI.cpp \
    Classes/Parent_Master.cpp \
    Classes/Parent_Server.cpp \
    Game/Munchkin/Munchkin_Classes/TheGame_Munckin_Interface.cpp \
    Game/Munchkin/Munchkin_Classes/TheGame_Munckin_Master.cpp \
    Game/Munchkin/Munchkin_Classes/TheGame_Munckin_Server.cpp \
    BeforeTheGame/Classes/Before_TheGame.cpp \
    TheGame_GUIcpp.cpp \
    Classes/errors.cpp

HEADERS  += main_application.h \
    BeforeTheGame/Classes/Before_TheGame_Interface.h \
    BeforeTheGame/Classes/Before_TheGame_Master.h \
    BeforeTheGame/Classes/Before_TheGame_Server.h \
    Classes/Parent_GUI.h \
    Classes/Parent_Master.h \
    Classes/Parent_Server.h \
    Game/Munchkin/Munchkin_Classes/TheGame_Munckin_Interface.h \
    Game/Munchkin/Munchkin_Classes/TheGame_Munckin_Master.h \
    Game/Munchkin/Munchkin_Classes/TheGame_Munckin_Server.h \
    BeforeTheGame/Classes/Before_TheGame.h \
    TheGame_GUIi.h \
    Classes/errors.h

FORMS    += main_application.ui \
    TheGame_GUI.ui

DISTFILES += \
    Game/Munchkin/Munchkin.cfg \
    Sys_Config.cfg
