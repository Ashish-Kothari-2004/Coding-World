// Q.Write a C program to print the following parttern.
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number ");
    scanf("%d", &n);
    for (int l = 1; l <= n; l++)
    {
        for(int s = l; s < n; s++)
        {
            printf(" ");
        }
        for(int st = 1; st <= (l * 2) - 1; st++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}