// 5. Write a program in C for adding two matrices of the same size.
#include <stdio.h>
int main()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {3, 5, 2}};
    int arr2[3][3] = {{6, 7, 8}, {9, 0, 1}, {2, 4, 9}};
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            arr1[i][j] = arr1[i][j] + arr2[i][j];
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
    

    return 0;
}