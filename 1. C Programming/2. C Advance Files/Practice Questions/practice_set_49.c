// Q.49 Write a program to convert input string into initials.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertToInitials(char *str)
{
    int length = strlen(str);

    str[0] = toupper(str[0]);

    for (int i = 1; i < length; i++)
    {
        if (str[i] == ' ')
        {
            str[i + 1] = toupper(str[i + 1]);
        }
    }

    printf("Initials: %c", str[0]);
    for (int i = 1; i < length; i++)
    {
        if (str[i] == ' ')
        {
            printf("%c", str[i + 1]);
        }
    }
    printf("\n");
}

int main()
{
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    convertToInitials(inputString);

    return 0;
}
