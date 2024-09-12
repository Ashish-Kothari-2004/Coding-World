// Q.Write a C program to print the following parttern.Take input from the user using scnaf.
// 1
// 2 3 
// 4 5 6
// 7 8 9 10
// 11 12 13 14 
#include <stdio.h>
int main()
{
    int l, n = 1;
    printf("Enter any number ");
    scanf("%d", &l);
    for(int i = 1; i <= l; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}