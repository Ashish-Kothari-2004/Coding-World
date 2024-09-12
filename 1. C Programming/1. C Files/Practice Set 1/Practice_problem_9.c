// Q.Write a C program to check whether the year entered by the user is a leap year or not.
#include <stdio.h>
int main()
{
    int y;
    printf("Enter any year ");
    scanf("%d", &y);
    if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
    {
        printf("Year is a leap year\n");
    }
    else
        printf("Year is not a leap year\n");
    return 0;
}