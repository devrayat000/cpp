#include <stdio.h>

#define k 385
#define a 100

int main()
{
    printf("A program to determine heat transfer between two points.\n");

    float t1, t2, x1, x2;
    printf("Input T1 & T2: ");
    scanf("%f %f", &t1, &t2);
    printf("Input X1 & X2: ");
    scanf("%f %f", &x1, &x2);

    float heat = k * a * (t2 - t1) / (x2 - x1);
    printf("Total heat is %.2f\n", heat);

    return 0;
}
