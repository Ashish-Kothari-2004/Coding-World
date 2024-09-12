#include <stdio.h>
int main()
{
    int length, breadth;

    printf("What is the length of the rectangle \n");
    scanf("%d", &length);//  Important --> Never use \n in scanf function

    printf("what is the breadth of the recrangle \n");
    scanf("%d", &breadth);//  Important --> Never use \n in scanf function

    printf("Area of a rectangle is %d\n", length * breadth);
}
