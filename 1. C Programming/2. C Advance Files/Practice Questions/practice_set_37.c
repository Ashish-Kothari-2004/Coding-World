// 37. WAP to copy one file contents to other file.
#include <stdio.h>
int main()
{
    FILE *fptr1 = fopen("sample1.txt", "r");
    FILE *fptr2 = fopen("sample2.txt", "w");
    char ch;
    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Unable to open the file\n");
        return 1;
    }
    else
    {
        for (int i = 0; (ch = fgetc(fptr1)) != EOF; i++)
        {
            fputc(ch, fptr2);
        }
    }
    printf("Contents copy successfully\n");
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}