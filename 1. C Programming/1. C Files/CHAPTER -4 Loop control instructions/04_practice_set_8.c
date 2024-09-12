// Q.Write a program to calculate the sum of the number occuring in the multiplication table of 8.(consider 8 x 1 to 8 x 10)

// Solved using while Loop
// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     float sum;
//     while (i <= 10)
//     {
//         sum = sum + 8 * i;
//         i++;
//     }
//     printf("%f\n", sum);
//     return 0;
// }

// Solved using for Loop
#include <stdio.h>
int main()
{
    float sum;
    for (int i = 0; i <= 10; i++)
    {
        sum = sum + 8 * i;
    }
    printf("%f\n", sum);
    return 0;
}