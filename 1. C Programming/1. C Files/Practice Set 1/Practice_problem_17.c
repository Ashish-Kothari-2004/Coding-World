// Q.Write a C program to check whether the number entered by the user is perfect or not.
// Perfect number --> perfect number, a positive integer that is equal to the sum of its proper divisors. The smallest perfect number is 6.
#include <stdio.h>
int main()
{
    int n, r, s = 0;
    printf("Enter any number ");
    scanf("%d", &n);
    for(int i = 1;i < n;i++)
    {
        r = n % i;
        if(r == 0)
        {
            s = s + i;
        }
    }
    printf("The value of s is %d\n", s);
    if(s == n)
    {
        printf("Number is perfect number\n");
    }
    else
    {
        printf("Number is not a perfect number\n");
    }
    return 0;
}