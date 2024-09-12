// Q. WAP to print binary pattern of any 16 bit integer number with the help of function.
#include <stdio.h>
void printBinary(int num)
{
    int mask, bit;
    for (int i = 0; i <= 15; i++)
    {
        mask = 1 << i;
        bit = num & mask>>i;
        printf("Result : %d", bit);
    }
}

int main()
{
    int a;
    printf("Enter any number ");
    scanf("%d", &a);
    printBinary(a);

    return 0;
}