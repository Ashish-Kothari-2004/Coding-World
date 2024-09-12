// Q.Write a C program to reverse the number entered by the user.
#include <stdio.h>
int main()
{
    int n, r, m = 0;
    printf("Enter any number ");
    scanf("%d", &n);
    while(n > 0)
    {
        r = n % 10;
        m = m * 10 + r;
        n = n / 10;
    }
    printf("Reverse of the number is %d\n", m);
    return 0;
}