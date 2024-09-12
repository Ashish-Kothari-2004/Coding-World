// Q.Write a C program to ask user to entered any 5 numbers.Now find the sum of even numbers.
#include <stdio.h>
int main()
{
    int n, sum = 0;
    for(int i = 1; i <= 5; i++)
    {
        printf("Enter any number ");
        scanf("%d", &n);
        if(n % 2 == 0)
        {
            sum = sum + n;
        }
    }
    printf("The sum of all even numbers is %d\n", sum);
    
    return 0;
}