#include <stdio.h>

int main()
{
    printf("A program to calculate the perimeter of a circle.\n");

    float r;
    printf("Radius of circle: ");
    scanf("%f", &r);

    float perimeter = 2 * 3.1416 * r;
    printf("Perimeter of a circle of radius %.2f is %.2f\n", r, perimeter);

    return 0;
}
