// Q. WAP to switch on the 5th bit using the OR bitwise operator.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d", &n);

    n = ( n | (1 << 4));
    printf("After shifting the bits the value of the number is %d\n", n);

    
    return 0;
}