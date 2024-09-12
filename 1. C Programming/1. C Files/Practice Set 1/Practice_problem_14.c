// Q.Write a C program to check whether the number entered by the user is palindrom or not.
// palindrome number -->  A palindrome number is a number that is same after reverse.
#include <stdio.h>
int main()
{
    int n1, n2, r, m = 0;
    printf("Enter any number ");
    scanf("%d", &n1);
    n2 = n1;
    while(n1 > 0)
    {
        r = n1 % 10;
        m = m * 10 + r;
        n1 = n1 / 10;
    }
    if(m == n2)
    {
        printf("The number is a palindrome number\n");
    }
    else
    {
        printf("The number is not a palindrome number\n");
    }
    return 0;
}