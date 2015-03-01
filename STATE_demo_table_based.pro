TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    DigitalStopWatch.c

HEADERS += \
    DigitalStopWatch.h

*gcc*{
QMAKE_CFLAGS += -std=c99 -pedantic -Wall -Wextra -Wconversion \
                -Wsign-conversion -Wunreachable-code -Wshadow
}
