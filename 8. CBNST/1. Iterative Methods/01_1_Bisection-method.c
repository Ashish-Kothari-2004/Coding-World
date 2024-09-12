// 1. Bisection method:
#include <stdio.h>
#include <math.h>
#define f(x) x *x *x - 2 * x - 5

int main()
{
    int i = 1;
    float a, b, c, f;
    printf("Enter the value of interval a and b:");
    scanf("%f %f", &a, &b);
    do
    {
        c = (a + b) / 2;
        f = f(c);
        printf("\n i=%d     a=%f    b=%f    c=%f    F(c)=%f", i, a, b, c, f);
        if (f < 0)
        {
            a = c;
        }
        else
        {
            b = c;
        }
        i++;
    } while (fabs(f(c)) > 0.001); // returns the absolute value of its floating-point argument x 
    printf("\n \n approximate root = %.4f \n", c);// The absolute value of -1231.000 is 1231.000
    return 0;
}
