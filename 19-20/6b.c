#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(unsigned int a)
{
    if (a == 1)
        return false;
    for (int i = 2; i < a; i++)
        if (a % i == 0)
            return false;

    return true;
}

int main()
{
    // User input positive integer
    unsigned int n, count = 0;
    scanf("%u", &n);

    printf("Printing prime numbers upto %u\n", n);
    for (int i = 1; i < n; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
            count++;
        }
    }

    return 0;
}