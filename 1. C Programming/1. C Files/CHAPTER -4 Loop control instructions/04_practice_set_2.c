// Q.Print the table of a number input by the use.

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter number ");
//     scanf("%d", &n);
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d\n", n * i);
//     }
//     return 0;
// }

// Q.Write a program to print multiplication table of a given number n.
// #include <stdio.h>
// int main()
// {
//     int n, i = 1;
//     printf("Enter number ");
//     scanf("%d", &n);

//     while (i <= 10)
//     {
//         printf("%d\n", n * i);
//         i++;
//     }
//     return 0;
// }

// Q.Write a program to print multiplication table of a given number n in reverse order.
#include <stdio.h>
int main()
{
    int n, i = 10;
    printf("Enter number ");
    scanf("%d", &n);
    while (i >= 1 )
    {
        printf("%d\n", i * n);
        i--;
    }
    return 0;
}
