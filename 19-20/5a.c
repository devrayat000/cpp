#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    // scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*i + 1; j++)
        {
            putchar((65 + i) - abs(j - i));
        }
        putchar('\n');
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*(n-i)-1; j++)
        {
            putchar((65 + n - i - 1) - abs(j - n + i + 1));
        }
        putchar('\n');
    }

    return 0;
}