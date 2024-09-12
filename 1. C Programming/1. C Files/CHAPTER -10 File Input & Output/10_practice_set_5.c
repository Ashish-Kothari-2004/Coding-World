// Q.Write a program to modify a file containing an integer to double its value.
#include <stdio.h>
int main()
{
    FILE *fptr;
    int n;
    fptr = fopen("practice_set_5.txt", "r");
    fscanf(fptr, "%d", &n);
    fclose(fptr);
    fptr = fopen("practice_set_5.txt", "w");
    fprintf(fptr, "%d", n * 2);
    fclose(fptr);
    
    return 0;
}