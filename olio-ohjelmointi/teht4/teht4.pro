TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Luottotili.cpp \
        Pankkitili.cpp \
        asiakas.cpp \
        main.cpp

HEADERS += \
    Asiakas.h \
    Luottotili.h \
    Pankkitili.h
