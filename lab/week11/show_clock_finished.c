#include <stdio.h>

typedef struct {
    int hour;
    int min;
    int sec;
} CLOCK;

void increment(CLOCK *clock)
{
    (clock->sec)++;
    
    if (clock->sec == 60) {
        clock->sec = 0;
        (clock->min)++;
        if (clock->min == 60) {
            clock->min = 0;
            (clock->hour)++;
            if (clock->hour == 24)
                clock->hour = 0;
        }
    }
    
    return;
}

void show(CLOCK *clock)
{
    printf("%02d:%02d:%02d \n", clock->hour, clock->min, clock->sec);
    return;
}

int main()
{
    // 14:38:56
    // 14:38:00
    CLOCK clock = {14, 58, 56};
    int k;
    
    for (k = 0; k < 10; k++) {
        increment(&clock);
        show(&clock);
    }
    
    return 0;
}
