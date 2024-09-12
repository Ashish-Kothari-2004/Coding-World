// Q22. Write a program to read and print a text. Also count the number of characters, words, and lines in the text.
#include <stdio.h>
int main()
{
    char text[500];
    printf("Enter text ");
    gets(text);
    int word, character, line;
    word = character = line = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            word++;
        }
        else if (text[i] == '\n')
        {
            line++;
        }
        else
        {
            character++;
        }
    }
    if (character > 0)
    {
        word++;
        line++;
    }
    printf("Number of words : %d\n", word);
    printf("Number of lines : %d\n", line);
    printf("Number of character : %d\n", character);

    return 0;
}
