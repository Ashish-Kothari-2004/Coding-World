// Q. Write a program in c to take multiword string from the user and print all the words of the string in a text file.
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter multiword string ");
    gets(str);
    FILE *ptr = fopen("practice_set_11.txt", "w");
    fprintf(ptr, "%s", str);
    fclose(ptr);
    
    return 0;
}