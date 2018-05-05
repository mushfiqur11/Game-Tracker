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
    qtlinking.cpp \
    ball.cpp

HEADERS  += mainwindow.h \
    qtlinking.h \
    ball.h

FORMS    += mainwindow.ui \
    qtlinking.ui

RESOURCES += \
    icon.qrc

RC_FILE += \
    icon.rc
