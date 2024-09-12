// Q.Write a C program to convert temperature from celsius to fahrenheit.
//(Celsius temperature * 1.8) + 32 = Fahrenheit temperature.
// #include <stdio.h>
// int main()
// {
//     float c;
//     printf("Enter temperature in celsius ");
//     scanf("%f", &c);
//     float fahrenheit = (c * 1.8) + 32;
//     printf("The temparature in fahrenheit is %f\n", fahrenheit);

//     return 0;
// }


// Q.write a C program to convert temperature from Fahrenheit to celsius.
// (Fahrenheit temperature – 32) / 1.8 = Celsius temperature.
#include <stdio.h>
int main()
{
    float f;
    printf("Enter temprature in fahrenheit ");
    scanf("%f", &f);
    float celsius = (f - 32) / 1.8;
    printf("Temprature in celsius %f\n", celsius);

    return 0;
}