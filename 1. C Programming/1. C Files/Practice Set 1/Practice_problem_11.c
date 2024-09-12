// Q.Write a C program to find the output of bitwise (&) and bitwise(|) of the number 12 and 24. 
#include <stdio.h>
int main()
{
    int x = 12, y = 24;
    printf("Bitwise OR is %d\n", (x | y));
    printf("Bitwise AND is %d\n", (x & y));
    printf("Bitwise XOR is %d\n", (x ^ y));
    
    return 0;
}