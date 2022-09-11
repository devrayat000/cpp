#include <stdio.h>
#include <math.h>

long factorial(int);
double sine(double);

int main()
{
    double x;

    printf("Write angle x in radian: ");
    scanf("%lf", &x);

    printf("sin(%lf) = %lf\n", x, sine(x));

    return 0;
}

long factorial(int x)
{
    long f = 1;
    for (int i = 1; i <= x; i++)
        f *= i;

    return f;
}

double sine(double x)
{
    int coef;
    double sum = 0, count;

    for (int i = 0; i < 10; i++)
    {
        coef = 2 * i + 1;

        count = pow(x, coef) / factorial(coef);

        if (i % 2 == 0)
            sum += count;
        else
            sum -= count;
    }
    return sum;
}
