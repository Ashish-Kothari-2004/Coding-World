// Q14. Write a program to use different bitwise operators between the two integers & display the results.
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    // bitwise AND
    printf("%d & %d = %d\n", a, b, a & b);

    // bitwise OR
    printf("%d | %d = %d\n", a, b, a | b);

    // bitwise XOR
    printf("%d ^ %d = %d\n", a, b, a ^ b);

    // bitwise NOT
    printf("~%d = %d\n", a, ~a);
    printf("~%d = %d\n", b, ~b);

    // left shift
    printf("%d << 1 = %d\n", a, a << 1);
    printf("%d << 2 = %d\n", b, b << 2);

    // right shift
    printf("%d >> 1 = %d\n", a, a >> 1);
    printf("%d >> 2 = %d\n", b, b >> 2);

    return 0;
}
