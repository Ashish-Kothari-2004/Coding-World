//Q.Print the table of a given number using function.
#include <stdio.h>
void Table(int n);// Here n is parameter.

int main()
{
    int n;
    printf("Enter first number ");
    scanf("%d", &n);
    Table(n);// Here (n) is argument.
    return 0;
}

void Table(int n)// Here n is parameter.
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i * n);
    }
}

