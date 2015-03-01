#include <stdio.h>

#include "DigitalStopWatch.h"

int main(void)
{
    DigitalStopWatch *w = create_watch();

    stop_watch(w);

    start_watch(w);
    stop_watch(w);
    stop_watch(w);
    start_watch(w);
    start_watch(w);

    destroy_watch(w);
    return 0;
}

