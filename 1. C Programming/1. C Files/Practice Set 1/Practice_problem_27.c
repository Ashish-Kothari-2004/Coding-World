// Q.Write a program in C to display the pattern like right angle triangle using an asterisk.
// *
// **
// ***
// ****
// *****
// ******
// *******
#include <stdio.h>
void main()
{
    int n;
    printf("Enter any number ");
    scanf("%d", &n);
    for(int l = 1; l <= n; l++)
    {
        for(int i = 1; i <= l; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}