// Q.Write a C program to check whether the number entered by the user is armstrog number or not.
// Armstrong number --> An armstrong number is a number which equal to the sum of the cubes of its individual digits.
// e.g --> 371 
#include <stdio.h>
int main()
{
    int n1, n2, r, s = 0;
    printf("Enter any number ");
    scanf("%d", &n1);
    n2 = n1;
    while(n1 > 0)
    {
        r = n1 % 10;
        s = s + (r * r * r);
        n1 = n1 / 10;
    }
    if(n2 == s)
    {
        printf("The number is armstrong number\n");
    }
    else
    {
        printf("The number is not armstrong number\n");
    }
    return 0;
}