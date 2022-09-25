#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void cycle(int *a, int *b, int *c) {
    *a = (*b + *a);
    *b = (*c + *b);
    *c = (*a - *b + *c);
    *a = (*a - *c);
    *b = (*b - *a);
}

int main()
{
    int a = 7, b = 48, c = 69;
    cycle(&a, &b, &c);

    printf("a=%d,b=%d,c=%d\n", a, b, c);
    
    return 0;
}