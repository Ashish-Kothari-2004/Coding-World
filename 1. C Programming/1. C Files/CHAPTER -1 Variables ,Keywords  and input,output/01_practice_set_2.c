#include <stdio.h>
int main()
{
    float radius ;
    printf("Enter the radius of a circle ");
    scanf("%f", &radius);//  Important --> Never use \n in scanf function 
    printf("Area of a circle %f \n", 3.14 * radius * radius);

    return 0;
}