#include <stdio.h>// printHello is name of a Function and void is return type.
void printHello(); // Function Prototype.

// NOTE ---
// Execution always starts from main.
// A function gets called directly or indirectly from main.
// There can be multiple fuction in a program.
// Function can only return one value at a time.
// Function can be used multiple times and it increases code reusability.       
// Changes to the parameters in function don't change the values in calling function.

int main()
{
    printHello(); // Function call
    printHello();
    printHello();
    printHello();
    return 0;
}
void printHello()
{
    printf("Hello !\n"); // Function Definition.
    printf("Mr.");
    printf("Ashish Kothari\n\n");
}