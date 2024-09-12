// Q7. WAP to implement multiplication of two matrices.
#include <stdio.h>
int main()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {4, 2, 1}};
    int arr2[3][3] = {{4, 5, 6}, {7, 8, 9}, {3, 4, 6}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr1[i][j] = arr1[i][j] * arr2[j][i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}