#include <stdio.h>

int bin(int);

int main()
{
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("binary of %d is %d\n", x, bin(x));

    return 0;
}

int bin(int x)
{
    int b = 0, r = 0, i = 1;
    while(x) {
        r = x % 2;
        b += r * i;
        i *= 10;
        x /= 2;
    }
    return b;
}
