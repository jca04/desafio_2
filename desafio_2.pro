TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        controllers/estacion.cpp \
        main.cpp \
        models/bd.cpp

HEADERS += \
    controllers/estacion.h \
    models/bd.h
