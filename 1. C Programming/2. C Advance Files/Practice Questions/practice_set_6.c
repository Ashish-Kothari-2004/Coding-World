// Q6. Write a program to find the biggest of three numbers using pointers.
#include <stdio.h>
void findMax(int *p1, int *p2, int *p3)
{
    if(*p1 > *p2 && *p1 > *p3)
    {
        printf("Biggest number is %d\n", *p1);
    }
    else if(*p2 > *p1 && *p2 > *p3)
    {
        printf("Biggest number is %d\n", *p2);
    }
    else
    {
        printf("Biggest number is %d\n", *p3);
    }
}

int main()
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    findMax(&a, &b, &c);
    return 0;
}