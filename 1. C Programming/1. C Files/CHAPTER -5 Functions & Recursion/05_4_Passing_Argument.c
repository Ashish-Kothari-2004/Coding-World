// Property -->
// Changes to the parameters in function don't change the values in calling function.

#include <stdio.h>
void calculatePrice(float v);// float value --> parameter
int main()
{
    float value = 100;// This value will copy to function definition.
    calculatePrice(value);
    printf("%f\n", value);// don't change the values in calling function. 
    return 0;
}


void calculatePrice(float v)// float v --> parameter
{
    v = v + (v * 0.18);
    // We can use another variable name in function definition.
    printf("%f\n", v);
}
