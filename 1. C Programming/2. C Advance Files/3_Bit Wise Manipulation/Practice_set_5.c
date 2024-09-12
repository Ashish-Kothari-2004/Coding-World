// WAP to demonstrate the use of bitwise XOR operator.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter any two number\n");
    scanf("%d%d", &a, &b);
    printf("\n%d\n", a ^ b);// 6 | 2 =( 0110 | 0010 ) = 0100 = 4

    return 0;
}