#ifndef DIGITALSTOPWATCH_H
#define DIGITALSTOPWATCH_H

typedef struct DigitalStopWatch DigitalStopWatch;

DigitalStopWatch *create_watch(void);

void destroy_watch(DigitalStopWatch *w);

void start_watch(DigitalStopWatch *w);

void stop_watch(DigitalStopWatch *w);

#endif // DIGITALSTOPWATCH_H
