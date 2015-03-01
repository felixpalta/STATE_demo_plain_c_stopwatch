#include "stoppedstate.h"

/* Possible transitions to other states */
#include "startedstate.h"

#include <stdio.h>

static void start_watch(WatchState *state)
{
    printf("Watch Started.\n");
    transition_to_started(state);
}

static void restop_watch(WatchState *state)
{
    printf("Watch already stopped.\n");
}

void transition_to_stopped(WatchState *state)
{
    watch_state_set_default_actions(state);
    state->start_action = start_watch;
    state->stop_action = restop_watch;
}
