#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("%d is the absolute largest", abs(a) > abs(b) ? a : b);
    
    return 0;
}