#include <stdio.h>
#include <math.h>

double red_int_ex(int, double, double);

int main()
{
    printf("%lf\n", red_int_ex(3, 1, 0));
    return 0;
}

double red_int_ex(int n, double u, double l)
{
    if (n == 0)
        return exp(u) - exp(l);
    return ((pow(u, n) * exp(u)) - (pow(l, n) * exp(l))) - (n * red_int_ex(n - 1, u, l));
}