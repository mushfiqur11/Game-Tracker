#-------------------------------------------------
#
# Project created by QtCreator 2018-04-21T16:00:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cricket
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ball.cpp \
    qtlinking.cpp \
    player.cpp \
    team.cpp

HEADERS  += mainwindow.h \
    ball.h \
    qtlinking.h \
    player.h \
    team.h

FORMS    += mainwindow.ui \
    qtlinking.ui

RESOURCES += \
    icon.qrc \
    images.qrc

RC_FILE += \
    icon.rc
