// Q.Write a program to read a text file character by character and write its content twice in saparate file.
#include <stdio.h>
int main()
{
    FILE *fptr1, *fptr2;
    fptr1 = fopen("practice_set_3_01.txt", "r");
    fptr2 = fopen("practice_set_3_02.txt", "w");
    char ch;
    ch = fgetc(fptr1);
    while(ch != EOF)
    {
        fputc(ch, fptr2);
        fputc(ch, fptr2);
        ch = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}