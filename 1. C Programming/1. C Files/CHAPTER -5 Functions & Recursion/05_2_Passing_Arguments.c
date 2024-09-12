// Function can take value and give some value.
// take value ---> parameter
// give value ---> return value

// Types of passing argument -->
// void printHello();
// void printTable(n);
// int sum(int a, int b);

// Q.Print sum of two given number using function.
#include <stdio.h>
int sum(int x, int y); // Here x and y are parameters/formal parameter.

int main()
{
    int a, b, s;
    printf("Enter first number ");
    scanf("%d", &a);

    printf("Enter second number ");
    scanf("%d", &b);

    s = sum(a, b);     // Here a and b are arguments/actual parameter.
    printf("%d\n", s); // Value of (a, b) will copy to the (int x, int y).
    return 0;
}

int sum(int x, int y) // Here x and y are parameters/formal parameter.
                      // In sum(int x, int y) copyed the value of sum(a, b).
{
    return x + y;
}
