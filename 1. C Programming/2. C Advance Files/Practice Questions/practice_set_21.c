// Q21. Write a program to Compare two Strings.
#include <stdio.h>
#include <string.h>
void stringCompare(char str1[], char str2[])
{
    int result = strcmp(str1, str2);
    if (result == 0)
    {
        printf("Strings are equal\n");
    }
    else if (result < 0)
    {
        printf("String 1 is less than string 2\n");
    }
    else
    {
        printf("String 2 is less than string 1\n");
    }
}
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter first string ");
    gets(str1);

    printf("Enter second string ");
    gets(str2);

    stringCompare(str1, str2);
    return 0;
}