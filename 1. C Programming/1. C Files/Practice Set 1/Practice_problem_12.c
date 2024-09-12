// Q.Write a C program to find the sum of each digit of a number entered by the user.
#include <stdio.h>
int main()
{
    int n, r, sum = 0;
    printf("Enter any number ");
    scanf("%d", &n);
    while(n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("The sum of digits is %d\n", sum);
    return 0;
}