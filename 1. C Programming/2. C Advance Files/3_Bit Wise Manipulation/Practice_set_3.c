// 3. WAP to invert 5th bit of any number by using bitwise XOR operator. 
// 110000 ^ 010000 = 100000 = 32
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number ");
    scanf("%d", &a);
    a = ( a ^ (1 << 4));// 23 = 10111 ^ 01000 = 1
    printf("After inverting the fifth bit the value of the number is %d\n", a);
    
    return 0;
}