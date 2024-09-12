// Q.Write a C program to check whether the number is strong or not.
// strong number --> Strong number is a special number whose sum of the factorial of digits is equal to the original number.
// e.g --> 145
#include <stdio.h>
int main()
{
    int n1, n2, r, f, s = 0;
    printf("Enter any number ");
    scanf("%d", &n1);
    n2 = n1;
    while (n1 > 0)
    {
        r = n1 % 10;
        f = 1;
        for (int i = 1; i <= r; i++)
        {
            f = f * i;
        }
        s = s + f;
        n1 = n1 / 10;
    }
    if (s == n2)
    {
        printf("Number is a strong number\n");
    }
    else
    {
        printf("Number is not strong number\n");
    }
    return 0;
}

// unsolved problem ----

// #include <stdio.h>
// int main()
// {
//     int n1, n2, r, f = 1, s = 0;
//     printf("Enter any number ");
//     scanf("%d", &n1);
//     n2 = n1;
//     while (n1 > 0)
//     {
//         r = n1 % 10;
//         // f = 1;
//         for (int i = 1; i <= r; i++)
//         {
//             f = f * i;
//             printf("The value of s is %d\n", s);
//             printf("The value of f is %d\n", f);
//         }
//         s = s + f;
//         n1 = n1 / 10;
//     }
//     if (s == n2)
//     {
//         printf("Number is a strong number\n");
//     }
//     else
//     {
//         printf("Number is not strong number\n");
//     }
//     return 0;
// }
