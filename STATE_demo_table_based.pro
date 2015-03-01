TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    DigitalStopWatch.c \
    watchstate.c \
    stoppedstate.c \
    startedstate.c

HEADERS += \
    DigitalStopWatch.h \
    watchstate.h \
    stoppedstate.h \
    startedstate.h

*gcc*{
QMAKE_CFLAGS += -std=c99 -pedantic -Wall -Wextra -Wconversion \
                -Wsign-conversion -Wunreachable-code -Wshadow
}
