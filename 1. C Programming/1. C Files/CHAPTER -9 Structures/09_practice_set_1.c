// Q.Create a two dimensional vector using stuctures in C.
#include <stdio.h>
struct vector
{
    int v1;
    int v2;
};

int main()
{
    struct vector v;
    v.v1 = 54;
    v.v2 = 35;
    printf("First dimension is %d and second dimesion is %d\n", v.v1, v.v2);

    return 0;
}