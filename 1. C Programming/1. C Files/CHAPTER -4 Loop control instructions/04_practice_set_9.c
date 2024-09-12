// Q.Print the factorial of a number n.
// program for small number  
#include <stdio.h>
int main()
{
    int n;
    int factorial = 1;
    printf("Enter number ");
    scanf("%d", &n);
    int i = n;
    while (i >= 1)
    {
        factorial = factorial * i;
        i--;
    }
    printf("%d\n", factorial);
    return 0;
}

// Second methord 
// #include <stdio.h>
// int main()
// {
//     int n;
//     int factorial = 1;
//     printf("Enter number ");
//     scanf("%d", &n);                
//     int i = 1;
//     while (i <= n)
//     {
//         factorial = factorial * i;
//         i++;
//     }
//     printf("%d\n", factorial);
//     return 0;
// }