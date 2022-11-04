#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Time
{
    int hour: 6;
    int minute: 7;
    int second: 7;
} currentTime;

int main()
{
    time_t t = time(NULL);
    struct tm now = *localtime(&t);
    currentTime.hour = now.tm_hour;
    currentTime.minute = now.tm_min;
    currentTime.second = now.tm_sec;

    printf("Current time is %.2d:%.2d:%.2d", currentTime.hour, currentTime.minute, currentTime.second);
    return 0;
}