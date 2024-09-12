// Write a program to read a text file content and write it to another file twice.
// Imp.........

#include <stdio.h>
int main()
{
    FILE *fptr1, *fptr2;
    fptr1 = fopen("practice_set_4_01.txt", "r");
    fptr2 = fopen("practice_set_4_02.txt", "w");
    char ch1;
    ch1 = fgetc(fptr1);
    while(ch1 != EOF)
    {
        fputc(ch1, fptr2);
        ch1 = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);
    fptr1 = fopen("practice_set_4_01.txt", "r");
    fptr2 = fopen("practice_set_4_02.txt", "a");
    // a --> appned means previous content will not be deleted.
    ch1 = fgetc(fptr1);
    while(ch1 != EOF)
    {
        fputc(ch1, fptr2);
        ch1 = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);

    return 0;
}