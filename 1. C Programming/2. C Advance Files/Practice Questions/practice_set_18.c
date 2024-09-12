// Q.18. Write a program to find the length of a string.
#include <stdio.h>
int stringLength(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char str[50];
    printf("Enter string ");
    scanf("%s", str);
    printf("The length of the string is %d\n", stringLength(str));

    return 0;
}