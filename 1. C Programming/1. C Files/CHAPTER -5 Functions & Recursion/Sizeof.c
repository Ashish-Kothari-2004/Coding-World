# include <stdio.h>
int main()
{
    printf("%lu\n", sizeof(char));// 1 byte
    printf("%lu\n", sizeof(int));// 4 byte
    printf("%lu\n", sizeof(float));// 4 byte
    printf("%lu\n", sizeof(double));// 8 byte

    printf("%lu\n", sizeof(short));// 2 byte
    printf("%lu\n", sizeof(long));// 4 byte 
    printf("%lu\n", sizeof(long long));// 8 byte

    return 0;
}
