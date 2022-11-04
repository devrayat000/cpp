#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define min2(a, b) ((a < b) ? (a) : (b))
#define min4(a, b, c, d) (min2(min2(a, b), min2(c, d)))

int main()
{
    printf("%d\n", min2(7, 6));
    printf("%d\n", min4(6, 3, 1, 4));
    return 0;
}