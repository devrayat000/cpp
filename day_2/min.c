#include<stdio.h>

int main()
{
    printf("A program to determine the smallest number.\n");

    int a, b, c, min;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a< b && a< c)
        min = a;
    else
    {
        if (b < c)
            min = b;
        else
            min = c;
    }

    printf("The smallest number is %d\n", min);
    
    return 0;
}