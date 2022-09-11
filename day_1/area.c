#include<stdio.h>

float area_of_circle(float);

int main()
{
    printf("Hello\n");

    float r;
    printf("Radius of circle: ");
    scanf("%f", &r);

    float area = area_of_circle(r);
    printf("Area of a circle of radius %.2f is %.2f", r, area);
    return 0;
}

float area_of_circle(float radius)
{
    float area = 3.1416 * radius * radius;
    return area;
}