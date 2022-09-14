#include <stdio.h>

struct time {
    unsigned int hour;
    unsigned int minute;
};

struct Employee {
    struct time signin_time;
    struct time signout_time;
} shawon;

int main() 
{
    printf("Enter signin time (in 24hr format): ");
    scanf("%u:%u", &shawon.signin_time.hour, &shawon.signin_time.minute);
    printf("Enter signout time (in 24hr format): ");
    scanf("%u:%u", &shawon.signout_time.hour, &shawon.signout_time.minute);

    int working_hour = shawon.signout_time.hour - shawon.signin_time.hour;
    int working_minute = shawon.signout_time.minute - shawon.signin_time.minute;
    if (working_minute < 0)
    {
        working_minute += 60;
        working_hour--;
    }

    printf("Working hour = %.2u:%.2u\n", working_hour, working_minute);
}