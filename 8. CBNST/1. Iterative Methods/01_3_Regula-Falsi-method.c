// 3. Regula-Falsi: 

#include <stdio.h>
#include <math.h>
#define f(x) x *x *x - 2 * x - 5

int main()
{
    int i, n, ans = 0;
    float x1, x2, x3;
    printf("\n enter the inital values");
    scanf("%f%f", &x1, &x2);
    printf("\n enter the number of iteration");
    scanf("%d", &n);
    while (ans == 0)
    {
        if (f(x1) * f(x2) > 0)
        {
            printf("\n enter the new interval");
            scanf("%f%f", &x1, &x2);
        }
        else
            ans = 1;
    }
    for (i = 1; i <= n; i++)
    {
        x3 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
        if (f(x1) * f(x3) < 0)
            x2 = x3;
        else
            x1 = x3;
    }
    printf("\n the root of the iteration is %f", x3);
    return 0;
}
