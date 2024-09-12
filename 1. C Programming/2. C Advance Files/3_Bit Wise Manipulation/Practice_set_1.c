// Q. WAP to check whether the fifth bit is on or off using AND bitwise operator.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number ");
    scanf("%d", &a);

    if(a & (1 << 4) != 0)
    {
        printf("Bit is on in the fifth position\n");
    }
    else
    {
        printf("Bit is off in the fifth position\n");
    }
    return 0;
}