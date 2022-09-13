#include <stdio.h>

double factorial(int x) {
    if (x == 0) return 1;
    return x * factorial(--x);
}

double nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

double nCr(int n, int r) {
    return nPr(n, r) / factorial(r);
}

int main() 
{
    printf("5! = %g\n", factorial(5));
    printf("5P3 = %g\n", nPr(5, 3));
    printf("5C3 = %g\n", nCr(5, 3));
}