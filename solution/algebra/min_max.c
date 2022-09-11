#include <stdio.h>

double max_2(double, double);
double max_3(double, double, double);
double max(int);

int main() 
{

}

double max_2(double a, double b)
{
    return a > b ? a : b;
}

double max_3(double a, double b, double c)
{
    if (a >=b && a >= c)
        return c;
    else if (b >= c)
        return b;
    else
        return c;
    
}

double max(int n)
{
    double runner, sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &runner);
        sum = runner > sum ? runner : sum;
    }
    
    return sum / n;
}