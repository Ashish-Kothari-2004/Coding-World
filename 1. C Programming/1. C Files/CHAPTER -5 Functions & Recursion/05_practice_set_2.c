// Question for function.
//Q.Use library funtions to calculate the squre of a number given by the user.
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int number;
//     printf("Enter number ");
//     scanf("%d", &number);

//     printf("%f\n", pow(number,2));// Use %f in pow function because it is double type.
//     return 0;
// }

// Question for function.
//Q.Write functions to calculate area of a squre ,a circle and & a rectangle.
#include <stdio.h>
float squreArea(float);// or float squreArea(float a);
float circleArea(float);// or float circleArea(float rad);
float rectangleArea(float, float);// or float rectangleArea(float b, float l);
int main()
{
    float n1 = 5.0;
    float radius = 7.0;
    float breadth = 4.0, length = 2.5;
    printf("Area of a squre is %f\n", squreArea(n1));
    printf("Area of a circle is %f\n", circleArea(radius));
    printf("Area of a rectangle is %f\n", rectangleArea(breadth, length));
    return 0;
}

float squreArea(float a)
{
    return a * a;
}
float circleArea(float rad)
{
    return 3.14 * rad * rad;
}
float rectangleArea(float b, float l)
{   
    return b * l;
}