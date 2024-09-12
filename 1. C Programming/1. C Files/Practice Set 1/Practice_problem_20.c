// Q.Write a C program to ask user to enter any number.Now find the highest digits of the number.
#include <stdio.h>
int main()
{
    int n, r, h;
    printf("Enter any number ");
    scanf("%d", &n);
    h = n % 10;
    while(n > 0)
    {
        r = n % 10;
        if(r > h)
        {
            h = r;
        }
        n = n / 10;
    }
    printf("The highest digit is %d\n", h);
    return 0;
}