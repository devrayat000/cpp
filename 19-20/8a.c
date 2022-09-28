#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float groups[4][3];
    int i, j;

    for (i = 0; i < 4; i++)
    {
        printf("Enter data for group %d\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &groups[i][j]);
        }
    }

    printf("Enter group and position number to view grades or CTRL+C to close\n");
    while (scanf("%d%d", &i, &j) != EOF)
    {
        printf("Grade for group %d position %d is %.2f\n", i, j, groups[i - 1][j - 1]);
    }

    return 0;
}