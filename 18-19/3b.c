#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool array_has(int arr[], int len, int elem)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == elem)
            return true;
    }
    return false;
}

int main()
{
    int i = 1, random_serial;
    int students[10], ids[3], temp_serial;

    printf("Enter students' serial no. \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &students[i]);
    }

    srand((unsigned)time(0));

    printf("Serial No\t\t\tSeat No\n");
    printf("---------\t\t\t-------\n");

    for (int i = 0; i < 3; i++)
    {
        random_serial = rand() % 10 + 1;
        while (array_has(ids, i, random_serial))
            random_serial = rand() % 10 + 1;

        for (int j = 0; j < 10 && random_serial != temp_serial; j++)
        {
            temp_serial = students[j];
        }
        printf("%d\t\t\tSerial no. %d\n", temp_serial, i + 1);
        ids[i] = temp_serial;
    }
    
    return 0;
}