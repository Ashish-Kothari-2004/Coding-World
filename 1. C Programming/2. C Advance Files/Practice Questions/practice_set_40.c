//  Q.40 WAP to Write and Read a Character from a File.
#include <stdio.h>
int main()
{
    FILE *fptr1 = fopen("sample3.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    else
    {
        char ch;
        ch = fgetc(fptr1);
        printf("%c\n", ch);
        fclose(fptr1);
        printf("Enter character that you want to write in a file: ");
        scanf("%c", &ch);
        FILE *fptr2 = fopen("sample4.txt", "w");
        fputc(ch, fptr2);
        fclose(fptr2);
    }

    return 0;
}