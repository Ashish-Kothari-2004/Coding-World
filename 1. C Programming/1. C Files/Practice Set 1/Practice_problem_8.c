// Q.Write a C program to find the product of only even number from 1 to entered number.
#include <stdio.h>
int main()
{
    int n, p = 1;
    printf("Enter any number ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            p = p * i;
        }
    }
    printf("The product of even number is %d\n", p);
    return 0;
}