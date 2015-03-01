#ifndef WATCHSTATE_H
#define WATCHSTATE_H

/* "Interface" for the states */
/* Every new state will be "implementing" this interface. */

typedef struct WatchState WatchState;

typedef void EventStartFunc(WatchState *);
typedef void EventStopFunc(WatchState *);
typedef void EventPauseFunc(WatchState *, int seconds);

struct WatchState
{
    EventStartFunc *start_action;
    EventStopFunc *stop_action;
    EventPauseFunc *pause_action;
};

void watch_state_set_default_actions(WatchState *state);

#endif // WATCHSTATE_H
