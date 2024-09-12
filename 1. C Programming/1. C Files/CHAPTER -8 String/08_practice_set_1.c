// Q.Write a program to take a string as an input from the user using %s and %c.Confirm that the strings are equal.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    char ch;
    int i = 0;
    printf("Enter your first single string ");
    scanf("%s", str1); // scanf cannot input multi-words string with spaces.
    printf("%s\n", str1);

    fflush(stdin);
    printf("Enter your second single string ");
    while (i != '\n')
    {
        scanf("%c", &ch); // scanf cannot input multi-words string with spaces.
        str2[i] = ch;
        printf("%c", str2[i]);
        i++;
    }
    str2[i - 1] = '\0';
    printf("Comparison of strings is %d\n", strcmp(str1 , str2));

    return 0;
}