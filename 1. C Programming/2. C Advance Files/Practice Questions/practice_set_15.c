// Q15. Write a program to shift inputed data by two bits right/left.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number ");
    scanf("%d", &a);
    printf("Enter second number ");
    scanf("%d", &b);

    printf("After right shift the value of a>>2 is %d\n", a >> 2);
    printf("After left shift the value of b<<2 is %d\n", b << 2);

    return 0;
}