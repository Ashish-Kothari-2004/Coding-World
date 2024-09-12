// Q26. Write a program to copy one file into another.
#include <stdio.h>
int main()
{
    FILE *source = fopen("source.txt", "r");
    FILE *destination = fopen("destination.txt", "w");
    if (source == NULL || destination == NULL)
    {
        printf("Unable to open files\n");
    }
    else
    {
        int ch;
        while ((ch = fgetc(source)) != EOF)
        {
            fputc(ch, destination);
        }
    }
    fclose(source);
    fclose(destination);
    return 0;
}
