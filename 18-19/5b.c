#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double rand_double() {
    double ret = (double) rand();
    return ret / (RAND_MAX + 1);
}

int sample_geometric_function(double p) {
    double q = rand_double();
    int n = 0;
    while (q >= p)
    {
        q = rand_double();
        n++;
    }
    return n;
}

int main()
{ 
    printf("%d", factorial(4));
    return 0;
}