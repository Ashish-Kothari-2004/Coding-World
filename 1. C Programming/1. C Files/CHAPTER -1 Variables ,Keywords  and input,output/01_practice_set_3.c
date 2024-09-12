#include <stdio.h>
int main()
{
    float radius, height;
    printf("Enter the radius of a cylinder ");
    scanf("%f", &radius);//  Important --> don't use \n in scanf function

    printf("Enter the height of a cylinder ");
    scanf("%f", &height);//  Important --> don't use \n in scanf function

    float area = 3.14 * radius * radius * height;
    printf("Area of a cylinder %f", area);
    // Are of a cylinder = pi*r*r*h;

    return 0;
}