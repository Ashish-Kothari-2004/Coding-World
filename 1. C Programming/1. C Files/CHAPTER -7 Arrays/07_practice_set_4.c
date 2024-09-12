// Q.Write a program in C for a 2D array of size 3x3 and print the matrix.
#include <stdio.h>
int main()
{
    int arr[3][3];
    printf("Enter any nine numbers\n");
    scanf("%d %d %d %d %d %d %d %d %d", &arr[0][0], &arr[0][1], &arr[0][2], &arr[1][0], &arr[1][1], &arr[1][2], &arr[2][0], &arr[2][1], &arr[2][2]);
    printf("The matrix of given number is\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j ++)
        {
           printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}