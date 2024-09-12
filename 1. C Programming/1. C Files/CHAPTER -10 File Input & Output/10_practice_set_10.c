/*
printf() -> print output on the console
scanf() -> take input from the console
gets() -> it only takes strings and multiword strings as a input from the console
puts() -> it only print strings and multiword strings as a output to the console
fscanf() -> to reading from a file after opening the file.
fprintf() -> for writing to a file.
fgets() - read string and multiword string from the file.
fputs() - write string and multiword string to the file.
fgetc()or getc() -> read a single character from a file.
fputc()or putc() -> write a single character to a file.
*/

// Q. Write a program in c to take multiword string from the text file and print all the words of the file on console output screen.
#include <stdio.h>
int main()
{
    char str[100];
    FILE *fptr = fopen("10_practice_set_10.txt", "r");
    fgets(str, sizeof(str), fptr);
    for (int i = 0; str[i] != EOF; i++)
    {
        printf("%c", str[i]);
    }
    
}
