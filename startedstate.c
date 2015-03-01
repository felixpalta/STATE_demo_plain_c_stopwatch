#include "startedstate.h"

#include "stoppedstate.h"

#include <stdio.h>

static void stop_watch(WatchState *state)
{
    printf("Watch Stopped.\n");
    transition_to_stopped(state);
}

static void restart_watch(WatchState *state)
{
    printf("Restarting the Watch.\n");

}

void transition_to_started(WatchState *state)
{
    watch_state_set_default_actions(state);
    state->stop_action = stop_watch;
    state->start_action = restart_watch;
}
