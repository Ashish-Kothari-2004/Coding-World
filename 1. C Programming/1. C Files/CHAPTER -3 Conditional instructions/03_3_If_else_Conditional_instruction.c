#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number ");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("positive number\n"); // we can use if inside the if
        if (number % 2 == 0)
            ;
        {
            printf("Even number\n");
        }
    }
    else
    {
        printf("nagative number\n");
    }
    return 0;
}