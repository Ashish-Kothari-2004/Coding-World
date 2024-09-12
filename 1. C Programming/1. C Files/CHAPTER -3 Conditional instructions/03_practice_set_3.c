// Q.Write a program to determine whether a character entered by user is lowercase or not.
#include <stdio.h>
int main()
{
    char character;
    printf("Enter a character ");
    scanf("%c", &character);

    if (character >= 97 && character <= 122)
    {
        printf("%c is lowercase character\n", character);
    }
    else
    {
        printf("%c is not lowercase character\n", character);
    }

    return 0; 
}