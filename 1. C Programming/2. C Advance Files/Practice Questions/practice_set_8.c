// Q8. Write a program to enter a character and then determine whether it is a vowel or not using pointers.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character ");
    scanf("%c", &ch);
    char *ptr = &ch;
    if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
    {
        printf("Entered character %c is a vowel\n", ch);
    }
    else if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
    {
        printf("Entered character %c is a vowel\n", *ptr);
    }
    else
    {
        printf("Entered character %c is not a vowel\n", *ptr);
    }

    return 0;
}