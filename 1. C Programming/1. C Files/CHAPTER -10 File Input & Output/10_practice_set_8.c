// Q.Write a program to write all the odd numbers from 1 to n in a file.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number ");
    scanf("%d", &n);
    FILE *fptr;
    fptr = fopen("practice_set_8.txt", "w");
    int i = 1;
    while(i <= n)
    {
        if(i % 2 != 0)
        {
            fprintf(fptr, "%d ", i);
        }
        i++;
    }
    fclose(fptr);
    return 0;
}