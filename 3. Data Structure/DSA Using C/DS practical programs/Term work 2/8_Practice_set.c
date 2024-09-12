// Q8. Wap to print sum of diagonals in a N*N matrix.
#include <stdio.h>

void DiagonalSum(int matrix[][100], int size)
{
    int mainDiagonalSum = 0;
    for (int i = 0; i < size; i++)
    {
        mainDiagonalSum += matrix[i][i];
    }

    printf("Sum of main diagonal: %d\n", mainDiagonalSum);
}

int main()
{
    int size;
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    int matrix[100][100];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    DiagonalSum(matrix, size);

    return 0;
}
