// Question for function.
// Q.Write a function to claculate Percentage of a student from Marks in Science, Math Sanskrite.

// #include <stdio.h>
// float percent(float, float, float);
// int main()
// {
//     float sc = 78, m = 89, s = 93;
//     printf("Your percentage is %f\n", percent(sc, m, s));
//     return 0;
// }
// float percent(float Science, float Math, float Sanskrite)
// {
//     float percentage = (Science + Math + Sanskrite) / 3;
//     return percentage;
// }

// Question for function.
// Q.Write a program using functions to find average of three numbers.
// #include <stdio.h>
// float average (float, float, float);
// int main ()
// {
//     float a, b, c;
//     printf("Enter your first number ");
//     scanf("%f", &a);
    
//     printf("Enter your first number ");
//     scanf("%f", &b);

//     printf("Enter your first number ");
//     scanf("%f", &c);

//     printf("The average of two number is %.2f\n", average(a, b, c));
//     return 0;
// }
// float average (float a, float b, float c)
// {
//     float average = ( a + b + c ) / 3;
//     return average;
// }

// Question for function.
// Q.Write a funtion to convert celsius to fahrenheit.
#include <stdio.h>
float celTOfah(float celsius);
int main()
{
    float tem = 37;
    printf("Temperature is %f\n", celTOfah(tem));
    return 0;
}
float celTOfah(float celsius)
{
    float fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}


