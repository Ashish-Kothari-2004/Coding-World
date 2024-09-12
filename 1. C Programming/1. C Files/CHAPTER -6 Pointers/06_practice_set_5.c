// Q.Write a program in C to find the factorial of a given number using pointers.
#include <stdio.h>
void factorial(int num, int *fact);
int main()
{
    int num, fact = 1;
    printf("Enter number ");
    scanf("%d", &num);

    factorial(num, &fact);
    printf("factorial of a given number is %d\n", fact);
    return 0;
}
void factorial(int num, int *fact)
{
    int i = 1;
    while(i <= num)
    {
        *fact = *fact * i;
        i++;
    }
}