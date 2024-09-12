// Q25. Write a program to count the number of characters and number of lines in a file.
#include <stdio.h>
int main()
{
    FILE *fptr = fopen("ashish.txt", "r");
    int character = 0, line = 0;
    char str[100];
    for (int i = 0; str[i] != EOF; i++)
    {
        str[i] = fgetc(fptr);
    }
    for (int i = 0; str[i] != EOF; i++)
    {
        if (str[i] == '\n')
        {
            line++;
        }
        else if (str[i] != ' ' && str[i] != '\n')
        {
            character++;
        }
    }
    if (character > 0)
    {
        line++;
    }
    printf("Number of lines in the file : %d\n", line);
    printf("Number of characters in the file : %d\n", character);
    fclose(fptr);
    return 0;
}