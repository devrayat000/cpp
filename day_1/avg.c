#include <stdio.h>

int main()
{
    printf("A program to calculate the average of four numbers.\n");

    float a1, a2, a3, a4;
    printf("Input four numbers: ");
    scanf("%f %f %f %f", &a1, &a2, &a3, &a4);

    float avg = (a1 + a2 + a3 + a4) / 4;

    printf("The average of the four numbers is %.2f\n", avg);

    return 0;
}

