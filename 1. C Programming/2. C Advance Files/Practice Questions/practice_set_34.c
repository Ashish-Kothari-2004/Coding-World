// Q.34 WAP for getting any string from user then find out whether this string is palindrome or not using predefine function.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter any string: ");
    scanf("%s", str);
    char reversed[50];
    strcpy(reversed, str);
    strrev(reversed);
    if (strcmp(str, reversed) == 0)
    {
        printf("String is palindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }

    return 0;
}