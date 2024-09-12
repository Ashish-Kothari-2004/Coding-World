#include <stdio.h>
#include <math.h>
int main()
{
    // Arithmatic instructions and operators
    // 1.Arithmatic Operators --> * , / , + , - ,%

    int a = 8;
    int b = 3;
    int c = 9;
    int z = a * b;        // <-- legal
    /* int a * b = z ; */ // <-- illegal
    printf("The value of a+b is %d\n", a + b);
    printf("The value of a-b is %d\n", a - b);
    printf("The value of a*b is %d\n", a * b);
    printf("The value of a/b is %d\n", a / b);
    printf("The value of z is %d\n", z);
    printf("The value of a % b is %d\n", a % b);
    // % --> Modular Division Operater
    printf("when 5 divided by 2 leaves a remainder %d \n", 5 % 2);
    // % --> Return the remainder
    printf("when -5 divided by 2 leaves a remainder %d \n ", -5 % 2);
    // % --> can not be applied  on float
    printf("when 5 divided by -2 leaves a remainder %d \n ", 5 % -2);
    // % sign is same as of numerator

    printf("4 to the power 2 is %f \n", pow(4, 2)); // always use %f for power function

    /* Type conversion*/

    // An Arithmatic instruction between
    // int and int --> int
    // int and float --> float
    // float and float --> float
    printf("The value of 3 + 5 is %d\n", 3 + 5);         // operation between int and int
    printf("The value of 5.2 + 3 is %f\n", 5.2 + 3);     // operation between float and int
    printf("The value of 3.5 + 5.2 is %f\n", 3.5 + 5.2); // operation between float and float

    printf("The value of 5/2 is %d\n", 5 / 2);      // operation between int and int
    printf("The value of 5.0/2  is %f\n", 5.0 / 2); // operation between float and int
    printf("The value of 2/5  is %d\n", 2 / 5);     // operation between int and int
    printf("The value of 2.5/5 is %f\n", 2.5 / 5);  // operation between float and int

    return 0;
}