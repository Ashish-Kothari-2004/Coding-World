// Q. WAP to check whether any number is even or odd using bitwise operator.
// 12 = 1100 & 0001 = 0000 -> even
// 11 = 1011 & 0001 = 0001 -> odd 
// 6 = 0110 & 0001 = 0000 -> even 

#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number ");
    scanf("%d", &a);
    if(a & 1)
    {
        printf("%d is a odd number\n", a);
    }
    else
    {
        printf("%d is even number\n", a);
    }
    
    return 0;
}