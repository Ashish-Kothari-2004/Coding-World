// Q11. Write a program to read and display a 3 X 3 matrix.
#include <stdio.h>
int main()
{
    int arr[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Enter element for %d row and %d column\n", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d   ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}