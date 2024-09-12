#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Ashish.txt", "w");
    fprintf(fptr,"My name is Ashish Kothari ");
    fclose(fptr);

    int age = 18;
    fptr = fopen("Ashish.txt", "a");// a --> for append 
    fprintf(fptr, "I am %d year old", age);
    fclose(fptr);
    
    return 0;
}