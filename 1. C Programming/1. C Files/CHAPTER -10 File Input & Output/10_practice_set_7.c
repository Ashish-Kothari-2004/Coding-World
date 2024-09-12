// Q.Write a program to generate multiplication table of a given number in text format.Make sure that the file content is readable and well formatted.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number ");
    scanf("%d", &n);
    FILE *fptr;
    fptr = fopen("practice_set_7.txt", "w");
    int i = 1;
    while(i <= 10)   
    {
        fprintf(fptr, "%d\n", n * i);
        i++;
    }
    fclose(fptr);
    
    return 0;
}