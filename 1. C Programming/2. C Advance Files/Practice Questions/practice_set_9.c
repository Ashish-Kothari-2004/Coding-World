// Q9. Write a program to test whether a number is positive, negative or equal to zero using pointers.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number ");
    scanf("%d", &n);
    int *p = &n;
    if(*p < 0)
    {
        printf("Number is negative\n");
    }
    else if (*p == 0)
    {
        printf("Number is 0\n");
    }
    else 
    {
        printf("Number is positive\n");
    }
    return 0;
}