#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, *weights;
    float avg;

    scanf("%d", &n);
    weights = (int*) malloc(n * sizeof(int));
    
    if (weights == NULL)
    {
        printf("Error!");
        exit(1);
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", weights + i);
    }

    for (int i = 0; i < n; i++)
    {
        avg += *(weights + i) / (float) n;
    }
    
    printf("Avg: %.2f\n", avg);

    free(weights);
    return 0;
}