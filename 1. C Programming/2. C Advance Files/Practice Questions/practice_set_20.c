// Q20. Write a program to Concatenate two strings.
#include <stdio.h>
void conString(char *str1, char *str2)
{
    int length = 0;
    while (str1[length] != '\0')
    {
        length++;
    }

    for (int i = 0; str2[i] != '\0'; length++, i++)
    {
        str1[length] = str2[i];
    }
    str1[length] = '\0';
    puts(str1);
    printf("\n");
}

int main()
{
    char str1[100], str2[100];
    printf("Enter first string ");
    gets(str1);
    printf("Enter second string ");
    gets(str2);
    conString(str1, str2);
    printf("\n");

    return 0;
}