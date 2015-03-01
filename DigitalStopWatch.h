#ifndef DIGITALSTOPWATCH_H
#define DIGITALSTOPWATCH_H

typedef struct DigitalStopWatch DigitalStopWatch;

DigitalStopWatch *create_watch(void);

void destroy_watch(DigitalStopWatch *w);

void start_watch(DigitalStopWatch *w);

void stop_watch(DigitalStopWatch *w);

void pause_watch(DigitalStopWatch *w, int seconds);

#endif // DIGITALSTOPWATCH_H
