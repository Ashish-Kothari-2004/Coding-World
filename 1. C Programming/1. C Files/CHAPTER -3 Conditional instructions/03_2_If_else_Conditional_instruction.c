#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age ");
    scanf("%d", &age);

    if (age >= 18 && age <= 100)
    {
        printf("You can drive\n");
    }
    if (age > 18)
    {
        printf("You can vote\n");
    }
    else
    {
        printf("you are teenager\n");
    }
    return 0;
}