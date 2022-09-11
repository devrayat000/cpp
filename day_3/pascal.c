#include <stdio.h>

int main()
{
    int rows, coef = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i <= rows; i++)
    {
        for (int t = 0; t <= rows - i; t++)
            printf("  ");

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
