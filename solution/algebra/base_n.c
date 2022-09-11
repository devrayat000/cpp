#include <stdio.h>

int base_n(int x, int base)
{
    int b = 0, r = 0, i = 1;
    while(x) {
        r = x % base;
        b += r * i;
        i *= 10;
        x /= base;
    }
    return b;
}

int bin(int x) {
    return base_n(x, 2);
}

int oct(int x) {
    return base_n(x, 8);
}

int main()
{
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("binary of %d is %d\n", x, bin(x));
    printf("octal of %d is %d\n", x, oct(x));

    return 0;
}
