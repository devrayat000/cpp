#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

struct tm age_calc(struct tm bd)
{
    time_t t = time(NULL);
    struct tm age, local = *localtime(&t);

    int year = (local.tm_year - bd.tm_year) + 1900;
    int month = (local.tm_mon - bd.tm_mon) + 1;
    int day = local.tm_mday - bd.tm_mday;

    if (day < 0)
    {
        day += 30;
        month--;
    }

    if (month < 0)
    {
        month += 12;
        year--;
    }

    age.tm_year = year;
    age.tm_mon = month;
    age.tm_mday = day;
    return age;
}

int main()
{
    struct tm bd, age;
    printf("Enter your birthday in DD-MM-YYYY format: ");
    scanf("%d-%d-%d", &bd.tm_mday, &bd.tm_mon, &bd.tm_year);

    age = age_calc(bd);

    printf("Age: %d years %d months %d days\n", age.tm_year, age.tm_mon, age.tm_mday);

    return 0;
}