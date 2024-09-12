// Q19. Write a program to convert characters of a string to other case.
#include <stdio.h>
char *lowerCase(char *str1)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        str1[i] = str1[i] + 32;
        i++;
    }
    return str1;
}
char *upperCase(char *str2)
{
    int i = 0;
    while (str2[i] != '\0')
    {
        str2[i] = str2[i] - 32;
        i++;
    }
    return str2;
}

int main()
{
    char str1[100];
    char str2[100];
    printf("Enter string in upper case ");
    scanf("%s", str1);
    printf("Enter string in lower case ");
    scanf("%s", str2);

    printf("After converting the str1 from upper to lower case : %s\n", lowerCase(str1));
    printf("After converting the str2 from lower to upper case : %s\n", upperCase(str2));
    return 0;
}