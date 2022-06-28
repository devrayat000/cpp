#include <stdio.h>
#include <math.h>

int main()
{
    int coef;
    double x, sum = 0.0, count = 0.0;

    printf("Write angle x in radian: ");
    scanf("%lf", &x);

    for (int i = 0; i < 10; i++)
    {
        coef = 2 * i + 1;

        count = pow(x, coef);
        for (int j = 1; j <= coef; j++)
            count /= j;


        if (i % 2 == 0)
            sum += count;
        else
            sum -= count;
    }

    printf("sin(%lf) = %lf\n", x, sum);

    return 0;
}
