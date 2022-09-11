#include <stdio.h>

int determinant(int[3][3]);

void main()
{
    int mat1[3][3];
    int det;

    printf("A program to calculate the determinant of a 3 x 3 matrix.\n");
    printf("Input elements in the first matrix :\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    det = determinant(mat1);

    printf("\nThe Determinant of the matrix is: %d\n\n", det);
}

int determinant(int matrix[3][3])
{
    int det = 0;
    for (int i = 0; i < 3; i++)
        det = det + (matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] - matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]));

    return det;
}
