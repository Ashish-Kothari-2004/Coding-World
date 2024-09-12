// Q. WAP to demonstrate the use of bitwise left sift (<<) operator.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any two number\n");
    scanf("%d", &a);
    printf("\n%d\n", a << 4);// 23 = 10111 = 23<<4 = 101110000 = 256+64+32+16= 368 


    return 0;
}