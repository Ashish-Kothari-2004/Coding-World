// celsius to fahrenheit ---------
#include <stdio.h>
int main()
{
    float celcius = 37, far = (celcius * 9 / 5) + 32;
    printf("The value of celcius temprature in fahrenheit is %f \n", far);

    return 0;
}

// fahrenheit to celsius --------
#include <stdio.h>
int main()
{
    float fahrenheit = 98.6, cel = (fahrenheit - 32) / (9 / 5);
    pritnf("The value of cesius temparature in celsius is %f\n", cel);
    return 0;
}