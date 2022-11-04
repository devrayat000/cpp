#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;

    for (int i = 0; i < 5; i++)
    {
        int max = 2*i;
        for (int j = 0; j < 2*(n - i); j++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < max + 1; j++)
        {
            printf(j == 0 || j == max || i == n - 1 ? "* " : "^ ");
        }
        printf("\n");
    }
    

    return 0;
}