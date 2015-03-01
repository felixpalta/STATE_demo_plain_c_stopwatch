#include "DigitalStopWatch.h"
#include "watchstate.h"
#include "stoppedstate.h"
#include "startedstate.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

struct DigitalStopWatch
{
    WatchState state;
};

DigitalStopWatch *create_watch(void)
{
    DigitalStopWatch *instance_ptr = malloc(sizeof(*instance_ptr));
    /* Don't care for careful NULL checking */
    assert(instance_ptr != NULL);

    transition_to_stopped(&instance_ptr->state);

    return instance_ptr;
}

void destroy_watch(DigitalStopWatch *w)
{

    free(w);
}

void start_watch(DigitalStopWatch *w)
{
    assert(w != NULL);

    w->state.start_action(&w->state);
}

void stop_watch(DigitalStopWatch *w)
{
    assert(w != NULL);

    w->state.stop_action(&w->state);
}
