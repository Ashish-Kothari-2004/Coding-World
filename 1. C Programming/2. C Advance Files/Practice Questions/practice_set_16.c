// Q16. Write a program to print bit pattern of a 16 bit integer.
#include <stdio.h>
void BitParttern(int num)
{
    int mask = 1 << 15;
    for (int i = 0; i < 16; i++)
    {
        if (num & mask)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        mask = mask >> 1;
    }
    printf("\n");
}
int main()
{
    int num;
    printf("Enter any 16 bit integer : ");
    scanf("%d", &num);

    BitParttern(num);

    return 0;
}
