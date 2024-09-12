// Q24. Write a program to read a file character by character, & display it simultaneously on the screen.

#include <stdio.h>
int main()
{
    FILE *fptr = fopen("ashish.txt", "r");
    if (fptr == NULL)
    {
        printf("Unable to open the file\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(fptr)) != EOF)
    {
        putchar(ch);
    }
    fclose(fptr);
    printf("\n");

    return 0;
}