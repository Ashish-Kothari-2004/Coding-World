// Q.Write a program to create an array of size n using calloc where n is an integer entered by the user.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;
    printf("How many number do you want to enter ");
    scanf("%d", &n);
    ptr = (int *) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        printf("You have entered %d\n", ptr[i]);
    }
    return 0;
}