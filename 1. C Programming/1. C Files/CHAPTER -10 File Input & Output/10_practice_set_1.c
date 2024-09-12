// Q.Write a program to check whether a file exist or not before opening the file.
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("ashish", "r");
    if(fptr == NULL)
    {
        printf("This file does not exist\n");
    }
    else
    {
        printf("This file exist\n");
    }
    
    return 0;
}