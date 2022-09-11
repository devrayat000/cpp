#include <stdio.h>

double sum_2(double, double);
double sum(int);

int main() 
{

}

double sum_2(double a, double b)
{
    return a + b;
}

double sum(int n)
{
    double runner, sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &runner);
        sum += runner;
    }
    
    return sum;
}