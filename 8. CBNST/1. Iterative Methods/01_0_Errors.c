// Q . Write a c program to compute error, absolute error, relative error and relative error percentage.(take true value of pi = 3.1415926 and approx.value of pi = 22.0 / 7)

#include <stdio.h>
#include <math.h>
void main()
{
    float pi = 22.0 / 7;
    float approx_pi = 3.1415926;
    float Ae = fabs(pi - approx_pi);// fabs is used to get the absolute value of a floating point number.
    float Re = Ae / pi;
    float Pe = Re * 100;
    printf("Absolute Error = %f\nRelative Error = %f\nPercentage Error = %f%%", Ae, Re, Pe);
}