// 9. Write a program to check whether the matrix is sparse matrix or not.
#include <stdio.h>
int main()
{
    int matrix[100][100], rows, cols, i, j, count = 0;

    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (count > (rows * cols) / 2)
    {
        printf("The matrix is a sparse matrix.\n");
    }
    else
    {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}