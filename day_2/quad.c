#include <stdio.h>
#include <math.h>

int main()
{
    printf("A program to determine the solution of a quaratic equation.\n");

    double a, b, c, D, x1, x2;

    printf("Enter a b & c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = (b * b) - (4 * a * c);

    if (D < 0)
        printf("There is no real solution for this equation\n");
    else
    {

        if (D == 0)
        {
            x1 = x2 = -b / (2 * a);
            printf("The equation has a single solution: %.3lf\n", x1);
        }
        else
        {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            printf("The solution of this equation is x1 = %.3lf & x2 = %.3lf\n", x1, x2);
        }
    }

    return 0;
}