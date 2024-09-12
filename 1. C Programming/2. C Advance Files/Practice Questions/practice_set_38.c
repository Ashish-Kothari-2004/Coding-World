// Q.38 WAP for reading a text file “info.txt” and find out how many character exist in file.
#include <stdio.h>
int main()
{
    FILE *fptr = fopen("info.txt", "r");
    if(fptr == NULL)
    {
        printf("Unable to open file\n");
    }
    else
    {
        char ch;
        int character = 0;
        for (int i = 0; (ch = fgetc(fptr)) != EOF; i++)
        {
            if (ch != ' ' &&  ch != '\n' && ch != '\t')
            {
                character++;
            }
        }
        printf("Number of character %d\n", character);
    }
    return 0;
}
