QT += core
QT -= gui
QT += sql widgets
QT += sql

#CONFIG += c++11

TARGET = Sarala
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    mysqlconnection.cpp

HEADERS += \
    mysqlconnection.h
