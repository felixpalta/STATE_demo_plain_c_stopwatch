#include "watchstate.h"
#include <stdio.h>

static void default_stop_action(WatchState* state)
{
/* We'll get here if the stop event isn't supported
in the concrete state. */
    printf("Error: STOP event is not supported in this state.\n");
}

static void default_start_action(WatchState* state)
{
/* We'll get here if the start event isn't supported
in the concrete state. */
    printf("Error: START event is not supported in this state.\n");
}

void watch_state_set_default_actions(WatchState *state)
{
    state->start_action = default_start_action;
    state->stop_action = default_stop_action;
}
