#-------------------------------------------------
#
# Project created by QtCreator 2017-03-23T19:44:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = server
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    my_sql.cpp

HEADERS  += widget.h \
    my_sql.h \
    connect.h

FORMS    += widget.ui

QT       += network

QT       += sql
