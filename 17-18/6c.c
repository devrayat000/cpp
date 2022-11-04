#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct date
{
    int year;
    int month;
    int day;
} bd, now;


int main()
{
    time_t t = time(NULL);
    struct tm currentTime = *localtime(&t);

    now.year = currentTime.tm_year + 1900;
    now.month = currentTime.tm_mon + 1;
    now.day = currentTime.tm_yday;

    printf("Enter birthday in following format DD-MM-YYYY: \n");
    scanf("%d-%d-%d", &bd.day, &bd.month, &bd.year);

    if (now.year - bd.year  <= 35)
    {
        printf("You are eligible");
    }
    else {
        printf("You are not eligible");
    }

    return 0;
}