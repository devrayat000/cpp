#include <stdio.h>

int main()
{
    int x, trailing_0 = 0;
    long long fact = 1;

    printf("Enter x: ");
    scanf("%d", &x);

    for (int j = 1; j <= x; j++)
        fact *= j;

    printf("%d! = %lld\n", x, fact);

    while (fact % 10 == 0)
    {
        trailing_0++;
        fact /= 10;
    }

    printf("%d! has %d trailing zero(s)\n", x, trailing_0);

    return 0;
}
