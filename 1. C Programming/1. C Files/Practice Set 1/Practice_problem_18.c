// Write a C program to find the sum of first and the last digit of the number.
#include <stdio.h>
int main()
{
    int n, r, sum = 0;
    printf("Enter any number ");
    scanf("%d", &n);
    sum = n % 10;
    while(n > 0)
    {
        r = n % 10;
        n = n / 10;
    }
    sum = sum + r;
    printf("The value of first digit and last digit is %d\n", sum);
    return 0;
}