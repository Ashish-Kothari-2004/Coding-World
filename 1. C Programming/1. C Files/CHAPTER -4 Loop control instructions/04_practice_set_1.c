// Q.Print the number from 0 to n, if number is given by the user.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d", &n);

    // for (int i = 0; i <= n; i++)
    // {
    //     printf("%d\n", i);
    // }

    int i = 1;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
}