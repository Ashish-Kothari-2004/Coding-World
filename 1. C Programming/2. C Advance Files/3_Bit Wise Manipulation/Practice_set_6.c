//  WAP to demonstrate the use of bitwise compliment operator.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any two number\n");
    scanf("%d", &a);
    printf("\n%d\n", ~a);// 32 = 00100000 = ~32 = 11011111 = -128 + 64 + 16 + 8 + 4 + 2 + 1 = -64 + 31 = -33

    return 0;
}