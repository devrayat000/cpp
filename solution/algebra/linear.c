#include <stdio.h>

int main() 
{
    double eq1[3], eq2[3], del, x, y;
    printf("Solving linear equations in the form of: ax + by = c\n");

    printf("Enter a, b & c for equation 1: ");
    scanf("%lf%lf%lf", &eq1[0], &eq1[1], &eq1[2]);
    printf("Enter a, b & c for equation 2: ");
    scanf("%lf%lf%lf", &eq2[0], &eq2[1], &eq2[2]);

    del = (eq1[0] * eq2[1]) - (eq1[1] * eq2[0]);
    x = -((eq1[1] * eq2[2]) - (eq1[2] * eq2[1])) / del;
    y = -((eq2[0] * eq1[2]) - (eq2[2] * eq1[0])) / del;

    printf("Solution: x = %g, y = %g\n", x, y);
}