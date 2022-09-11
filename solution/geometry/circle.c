#include <stdio.h>

const double PI = 3.141593;

double perimeter(double);
double area(double);

int main() 
{
    double radius;

    scanf("%lf", &radius);

    printf("perimeter %lf\n", perimeter(radius));
}

double perimeter(double r)
{
    return 2 * PI * r;
}

double area(double r)
{
    return PI * r * r;
}