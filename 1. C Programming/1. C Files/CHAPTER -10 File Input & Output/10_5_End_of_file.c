// EOF --> End of file.
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Ashish.txt", "r");
    char c;
    c = fgetc(fptr);
    while(c != EOF) 
    {
        printf("%c", c);
        c = fgetc(fptr);
    }

    return 0;
}