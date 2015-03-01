#include "DigitalStopWatch.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef void state_action(void);

typedef enum
{
    STATE_STOPPED,
    STATE_STARTED,

    N_OF_STATES,

} StateEnum;

typedef enum
{
    EVENT_STOPPING,
    EVENT_STARTING,

    N_OF_EVENTS,
} Event;

void event_stopping_action(void)
{
    printf("Stopping the watch.\n");
}

void event_starting_action(void)
{
    printf("Starting the watch.\n");
}

typedef struct
{
    StateEnum state_index;
    state_action *action;
} State;

struct DigitalStopWatch
{
    State state;
};

static const State state_table[N_OF_STATES][N_OF_EVENTS] =
{
    /* EVENT_STOPPING */                        /* EVENT_STARTING */
    { { STATE_STOPPED, event_stopping_action}, { STATE_STARTED, event_starting_action }}, /* From State: STOPPED */
    { { STATE_STOPPED, event_stopping_action}, { STATE_STARTED, event_starting_action }}, /* From State: STARTED */
};


DigitalStopWatch *create_watch(void)
{
    DigitalStopWatch *instance_ptr = malloc(sizeof(*instance_ptr));
    /* Don't care for careful NULL checking */
    assert(instance_ptr != NULL);

    instance_ptr->state.state_index = STATE_STOPPED;

    return instance_ptr;
}

void destroy_watch(DigitalStopWatch *w)
{

    free(w);
}

void start_watch(DigitalStopWatch *w)
{
    assert(w != NULL);

    w->state = state_table[w->state.state_index][EVENT_STARTING];
    w->state.action();
}

void stop_watch(DigitalStopWatch *w)
{
    assert(w != NULL);

    w->state = state_table[w->state.state_index][EVENT_STOPPING];
    w->state.action();
}
