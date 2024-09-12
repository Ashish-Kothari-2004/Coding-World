// Q.Write a C program to print the fibonacci series using loops.
#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c;
    printf("Enter any number ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}