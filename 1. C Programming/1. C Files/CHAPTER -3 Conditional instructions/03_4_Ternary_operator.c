#include <stdio.h>
int main()
{ 
    //short hand of If else statement 
    int age;
    printf("Enter a number ");
    scanf("%d", &age);
    age >= 18 ? printf("You can drive\n") : printf("You can not drive\n");//Ternary operator
    return 0;
}