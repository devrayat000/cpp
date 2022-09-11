#include<stdio.h>

int main()
{
    printf("Hello\n");

    float r;
    printf("Radius of circle: ");
    scanf("%f", &r);

    float area = 3.1416 * r * r;
    printf("Area of a circle of radius %.2f is %.2f", r, area);
    return 0;
}