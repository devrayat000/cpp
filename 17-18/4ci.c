#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define square(x) x*x
#define cube(x) x*x*x

int main()
{
    printf("%d\n", square(cube(3+3)));
    printf("%04d\n", square((cube(3+3))));
    
    return 0;
}