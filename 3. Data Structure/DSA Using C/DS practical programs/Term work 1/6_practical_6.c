// 6. Write a program to find transpose of a matrix.
#include <stdio.h>
int main()
{
    int arr1[3][3] = {{1, 4, 76}, {23, 76, 12}, {2, 3, 5}};
    int arr2[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[i][j] = arr1[j][i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}