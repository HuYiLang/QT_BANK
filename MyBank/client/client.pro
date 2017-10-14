#-------------------------------------------------
#
# Project created by QtCreator 2017-03-23T20:15:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = client
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    worker_init.cpp \
    work_log.cpp \
    deal_user.cpp \
    user_init.cpp \
    user_save_money.cpp \
    user_getmoney.cpp \
    user_tranaccounts.cpp \
    user_lookmoney.cpp \
    user_changepassward.cpp \
    user_account_detail.cpp \
    bankbook.cpp \
    user_tranrecord.cpp \
    record.cpp \
    user_close.cpp

HEADERS  += mainwindow.h \
    worker_init.h \
    connect.h \
    work_log.h \
    deal_user.h \
    user_init.h \
    user_save_money.h \
    user_getmoney.h \
    user_tranaccounts.h \
    user_lookmoney.h \
    user_changepassward.h \
    user_account_detail.h \
    bankbook.h \
    user_tranrecord.h \
    record.h \
    user_close.h

FORMS    += mainwindow.ui \
    worker_init.ui \
    work_log.ui \
    deal_user.ui \
    user_init.ui \
    user_save_money.ui \
    user_getmoney.ui \
    user_tranaccounts.ui \
    user_lookmoney.ui \
    user_changepassward.ui \
    user_account_detail.ui \
    bankbook.ui \
    user_tranrecord.ui \
    record.ui \
    user_close.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    res.qrc

QT       += network

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

OTHER_FILES += \
    android/AndroidManifest.xml

QT      += multimedia

