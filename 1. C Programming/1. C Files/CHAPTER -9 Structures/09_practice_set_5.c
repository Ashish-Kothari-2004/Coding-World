// Q.Write a function sumvector which return the sum of two vectors pass to it.The vectors must be two dimesional.
#include <stdio.h>
struct vector 
{
    int x;
    int y;
};
struct vector sumvector(struct vector v1, struct vector v2);

int main()
{
    struct vector v1, v2, sum;
    v1.x = 34;
    v1.y = 23;
    v2.x = 35;
    v2.y = 12;
    sum = sumvector(v1, v2);
    printf("X dimension of vector is %d and Y dimension is %d\n", sum.x, sum.y);
    return 0;
}
struct vector sumvector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    
    return result;
}