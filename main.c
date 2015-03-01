#include <stdio.h>

#include "DigitalStopWatch.h"

int main(void)
{
    DigitalStopWatch *w = create_watch();

    pause_watch(w, 10);

    stop_watch(w);

    pause_watch(w, 1);

    start_watch(w);

    pause_watch(w, 3);

    stop_watch(w);
    stop_watch(w);
    start_watch(w);

    pause_watch(w, 4);

    start_watch(w);

    destroy_watch(w);
    return 0;
}

