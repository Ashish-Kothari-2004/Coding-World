// Q.Write a C program to enter any 5 number and find the sum and average of them.
#include <stdio.h>
int main()
{
    int n, sum = 0;
    int i = 1;
    while(i <= 5)
    {
        printf("Enter any number ");
        scanf("%d", &n);
        sum = sum + n;
        i++;

    }
    printf("The sum is %d\n", sum);
    printf("The average is %d\n", sum / 20);
    
    return 0;
}