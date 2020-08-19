#-------------------------------------------------
#
# Project created by QtCreator 2020-08-04T17:27:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = fire-system
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


SOURCES += \
        main.cpp \
        mainwindow/mainwindow.cpp \
    window_page/inquire/qform_inquire.cpp \
    window_page/monitor/qform_monitor.cpp \
    window_page/inquire/fire/qform_inquire_fire.cpp \
    user_class/headerview/headerview.cpp \
    window_page/inquire/fault/qform_inquire_fault.cpp \
    window_page/install/qform_install.cpp \
    window_page/manage/qform_manage.cpp \
    window_page/test/qform_test.cpp \
    window_page/set/qform_set.cpp \
    window_page/help/qform_help.cpp \
    userControl/switchbutton.cpp \
    userControl/myboardlist.cpp

HEADERS += \
         mainwindow/mainwindow.h \
    window_page/inquire/qform_inquire.h \
    window_page/window_page.h \
    window_page/monitor/qform_monitor.h \
    window_page/inquire/fire/qform_inquire_fire.h \
    user_class/headerview/headerview.h \
    user_class/user_class.h \
    window_page/inquire/fault/qform_inquire_fault.h \
    window_page/install/qform_install.h \
    window_page/manage/qform_manage.h \
    window_page/test/qform_test.h \
    window_page/set/qform_set.h \
    window_page/help/qform_help.h \
    userControl/switchbutton.h \
    userControl/myboardlist.h

FORMS += \
         mainwindow/mainwindow.ui \
    window_page/inquire/qform_inquire.ui \
    window_page/monitor/qform_monitor.ui \
    window_page/inquire/fire/qform_inquire_fire.ui \
    window_page/inquire/fault/qform_inquire_fault.ui \
    window_page/install/qform_install.ui \
    window_page/manage/qform_manage.ui \
    window_page/test/qform_test.ui \
    window_page/set/qform_set.ui \
    window_page/help/qform_help.ui
