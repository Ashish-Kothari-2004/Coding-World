// Q.Write a C program to find the factorial of a number entered by the user.
#include <stdio.h>
int main()
{
    int n, f = 1;
    printf("Enter any number ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("factorial of a number is %d\n", f); 
    return 0;
}