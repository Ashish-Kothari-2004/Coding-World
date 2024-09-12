// Question for break statement
// Q.Keep taking number as input from the user until user enters an odd number.

#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter number ");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 2 != 0)
        {
            break;
        }
    } while (1); // 1 --> always true
    printf("Odd number\n");
}