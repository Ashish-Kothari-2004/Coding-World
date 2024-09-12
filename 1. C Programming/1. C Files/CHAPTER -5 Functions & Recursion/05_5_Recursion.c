// Recursion --> When a function calls itself, it's call recurtion.
// PROPERTIES OF RECURSION ---
// 1. Anything that can be done with iteration (loop), can be done with recursion and vice-versa.
// 2. Recursion can sometimes give the most simple solution. 
// 3. Base Case is the condition which stops recursion.
// 4. Iteration has infinite loop & Recursion stack overflow.

// Q.Print "Hello World !" five times.
// #include <stdio.h>
// void printHW(int);
// int main()
// {
//     printHW(5);
//     return 0;
// }

// void printHW(int n)
// {
//     if(n == 0)
//     {
//         return;
//     }

//     // Recursive funtion
//     printf("Hello World !\n");
//     printHW(n - 1);
// }

// Q.print factorial of a number.
#include <stdio.h>
int factorial(int);

int main()
{
    int n = 5;
    printf("Factorial of a number is %d\n", factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factorialNm1 = factorial(n-1); // factorial (n - 1)  -->  factorial (5 - 1) -->  4
    int factorialN = factorialNm1 * n;
    return factorialN;
}
