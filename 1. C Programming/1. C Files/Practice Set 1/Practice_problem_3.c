// Q.Write a program to check whether a given number is even or odd.
// a) Using if-else
// b) Using switch-case
// c) Using conditional/ternary operator.

// a) Using if-else --------------------------------------
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter any number ");
//     scanf("%d", &n);
//     if(n % 2 == 0)
//     {
//         printf("Number is even\n");
//     }
//     else
//     {
//         printf("Number is odd\n");
//     }

//     return 0;
// }

// b) Using switch case ----
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter any number ");
//     scanf("%d", &n);
//     switch (n % 2)
//     {
//     case 0:
//         printf("Number is even\n");
//         break;

//     case 1:
//         printf("Number is odd\n");
//         break;
//     }
//     return 0;
// }

// c) Using ternary operator ----
#include <stdio.h>
int main()
{
    int n;
    printf("Entre any number ");
    scanf("%d", &n);
    n % 2 == 0 ? printf("Number is even\n") : printf("Number is odd\n");
    
    return 0;
}
