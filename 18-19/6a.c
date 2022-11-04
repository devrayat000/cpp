#include <stdio.h>

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
    int a = 69, b = 4;
    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d, %d", a, b);
    return 0;
}