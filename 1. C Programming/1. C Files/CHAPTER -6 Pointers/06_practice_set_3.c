// Output of following program ?
// #include <stdio.h>
// int main()
// {
//     int *ptr;
//     int x;
 
//     ptr = &x;
//     *ptr = 0;
 
//     printf(" x = %d\n", x);// 0
//     printf("*ptr = %d\n", *ptr);// 0
 
//     *ptr += 5;
//     printf(" x  = %d\n", x);// 5
//     printf("*ptr = %d\n", *ptr);// 5
 
//     (*ptr)++;
//     printf(" x = %d\n", x);// 6
//     printf("*ptr = %d\n", *ptr);// 6
//     return 0;
// }

// Q.Write a program in C to add two numbers using pointers
// #include <stdio.h>
// int sum(int *a ,int *b);
// int main()
// {
//     int a = 2, b = 4;
//     printf("%d\n",sum(&a, &b));// sum will be printed because function return sum;
//     return 0;
// }
// int sum(int *a ,int *b)
// {
//     int sum = *a + *b;
//     return sum;
// }

// or 
#include <stdio.h>
void sumOfab(int *a, int *b, int *sum);
int main()
{
    int a = 2, b = 4, sum = 0;
    // sumOfab(&a, &b, &sum);
    printf("The value of sum before function call is %d\n", sum);
    sumOfab(&a, &b, &sum);
    printf("The value of sum after function call is %d\n", sum);
    return 0;
}
void sumOfab(int *a, int *b, int *sum)
{
    *sum = *a + *b;
}
