// Q.print the sum of first n natural numbers.
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter number ");
//     scanf("%d", n);

//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//     sum = sum + i;
//     }
//     printf("%d\n",sum);
// }

//Q.Write a program to sum first ten natural numbers using while loop.
// #include <stdio.h>
// int main()
// {
//     float sum = 0;
//     int i = 1;
//     while (i <= 10)
//     {
//         sum = i + sum;
//         i++;
//     }
//     printf("%f\n", sum);
//     return 0;
// }

//Q.Write a program to sum first ten natural numbers using do while loop.
#include <stdio.h>
int main()
{
    float sum;// Also we can use sum = 0; And then sum = i + sum;
    int i = 1;
    do
    {
        sum = i + sum;
        i++;
    } while (i <= 10);
    printf("%f\n", sum);
    return 0;
}
