#include <stdio.h>

double avg_2(double, double);
double avg(int);

int main() 
{

}

double avg_2(double a, double b)
{
    return (a + b) / 2;
}

double avg(int n)
{
    double runner, sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &runner);
        sum += runner;
    }
    
    return sum / n;
}