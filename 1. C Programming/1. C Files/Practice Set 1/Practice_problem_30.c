// Q.Write a C program to find the number entered by the user is prime or not.

#include <stdio.h>
int main()
{
    int n, c = 0;
    printf("Enter any number ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            c++;
        }
    }
    if(c == 2)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d  is not a prime number\n", n);
    }
    return 0;
}
