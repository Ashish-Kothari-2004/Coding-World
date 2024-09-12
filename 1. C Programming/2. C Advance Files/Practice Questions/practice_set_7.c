// Q7. Write a program to add two integers using functions and pointers.
#include <stdio.h>
int add(int *ptr1, int *ptr2)
{
    int sum = *ptr1 + *ptr2;
    return sum;

}

int main()
{
    int n1, n2;
    printf("Enter first number ");
    scanf("%d", &n1);
    printf("Enter second number ");
    scanf("%d", &n2);
    printf("Sum of the given number is %d\n", add(&n1, &n2));

    return 0;
}
