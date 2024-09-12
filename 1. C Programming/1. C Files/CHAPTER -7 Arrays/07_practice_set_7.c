// Q.Create an arrray of size 3 x 10 containing multiplication tables of the numbers 2, 7 and 9 respectively.

// #include <stdio.h>
// int main()
// {
//     int mul[3][10];
//     int i = 0;
//     while (i < 10)
//     {
//         mul[0][i] = 2 * (i + 1);
//         printf("2x%d = %d\n", (i + 1), mul[0][i]);
//         i++;
//     }
//     printf("\n");
//     int j = 0;
//     while (j < 10)
//     {
//         mul[1][j] = 7 * (j + 1);
//         printf("7x%d = %d\n", (j + 1), mul[1][j]);
//         j++;
//     }
//     printf("\n");
//     int k = 0;
//     while (k < 10)
//     {
//         mul[2][k] = 9 * (k + 1);
//         printf("9x%d = %d\n", (k + 1), mul[2][k]);
//         k++;
//     }
//     printf("\n");
//     return 0;
// }


// Solved with the help of function.

#include <stdio.h>
void printfTable(int *mul[3][10])
{
    for (int i = 0; i < 10; i++)
    {
        mul[0][i] = 2 * (i + 1);
        printf("2x%d = %d\n", (i + 1), mul[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        mul[1][i] = 7 * (i + 1);
        printf("7x%d = %d\n", (i + 1), mul[1][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        mul[2][i] = 9 * (i + 1);
        printf("9x%d = %d\n", (i + 1), mul[2][i]);
    }
    printf("\n");
}
int main()
{
    int mul[3][10];
    printfTable(mul[3][10]);
    return 0;
}
