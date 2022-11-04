#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int i = 1, ret = 1;
    while ((i++) < n)
    {
        ret *= i;
    }
    return ret;
}

int main()
{ 
    printf("%d", factorial(4));
    return 0;
}