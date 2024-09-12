// Q.Write a program to check whether a given number is prime or not using Loops.
// Solved by me.
#include <stdio.h>
int main()
{
    int n = 0;
    // int n = 1;
    // int n = 2;
    // int n = 3;
    // int n = 4;
    // int n = 5;
    for (int i = 2; i <= n + 2; i++)
    {
        if (n % i != 0 || n == 0 || n == 1 || n == 2)
        {
            printf("Prime number\n");
            break;
        }
        else 
        {
            printf("Not a prime number\n");
            break;
        }
        }
    return 0;
}

// Solved by CodeWithHarry
// #include <stdio.h>
// int main()
// {
//     int n = 2, prime = 1;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             prime = 0;
//             break;
//         }
//     }
//     if (prime == 0)
//     {
//         printf("This is not a prime number\n");
//     }
//     else
//     {
//         printf("This is a prime number\n");
//     }
//     return 0;
// }