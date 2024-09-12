// Q.Write a progaram using function which calculate the sum and average of two numbers.Use pointers and print the value of sum and average in main().
// #include <stdio.h>
// void sumAndavg(int x, int y, float *sum, float *avg);
// int main()
// {
//     int a = 4, b = 5;
//     float sum;
//     float avg;
//     sumAndavg(a, b, &sum, &avg);
//     printf("The sum of a + b is %f\n", sum);
//     printf("The average of a + b is %f\n", avg);
//     return 0;
// }
// void sumAndavg(int x, int y, float *sum, float *avg)
// {
//     *sum = x + y;
//     *avg = (*sum / 2);
// }

// 6. Write a program in C to find the maximum number between two numbers using a pointer.
#include <stdio.h>
void calMax(int *x , int *y);
int main()
{
    int x, y;
    printf("Enter first number ");
    scanf("%d", &x);

    printf("Enter second number ");
    scanf("%d", &y);
    
    calMax(&x, &y);
    return 0;
}
void calMax(int *x , int *y)
{
    if(*x > *y)
    {
        printf("%d is the maximum number\n", *x);
    }
    else
    {
        printf("%d is the maximum number\n", *y);
    }
}
