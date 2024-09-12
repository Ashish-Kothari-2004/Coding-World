// Q17. Write a program to swap the first 8 bits with the last 8 bits in a given unsigned 16 bit integer.
#include <stdio.h>
int swapBits(int num)
{
    int left = num >> 8;
    int right = num << 8;
    return left | right;
}
int main()
{
    int num;
    printf("Enter any 16 bit interger number : ");
    scanf("%d", &num);
    printf("The swapped interger : %d", swapBits(num));
    printf("\n");

    return 0;
}

