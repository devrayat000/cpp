#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a = 7, b = 48, c = 69;
    c = a + b + c;
    b = c - (b + a);
    a = c - (b + a);
    c = c - (b + a);

    printf("a=%d,b=%d,c=%d\n", a, b, c);
    
    return 0;
}