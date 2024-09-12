// fgetc and fputc are used in to read and write a character from a file.
// fgetc(fptr) --> Used to read a character from a file.
// fputc('c', fptr) --> Used to write a character 'c' to the file.
#include <stdio.h>
int main()
{
    FILE *fptr;
    // fptr = fopen("Ashish.txt", "r");
    // printf("The value of character is %c\n", fgetc(fptr));
    // printf("The value of character is %c\n", fgetc(fptr));
    // printf("The value of character is %c\n", fgetc(fptr));
    // printf("The value of character is %c\n", fgetc(fptr));
    // fclose(fptr);

    fptr = fopen("Demo.txt", "w");
    fputc('M', fptr);
    fputc('y', fptr);
    fputc(' ', fptr);
    fputc('n', fptr);
    fputc('a', fptr);
    fputc('m', fptr);
    fputc('e', fptr);
    fclose(fptr);
    
    return 0;
}
