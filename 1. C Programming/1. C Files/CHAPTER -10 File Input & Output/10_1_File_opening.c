// File opening modes in C -----------------
// "r" --> open for reading ----> If the file does not exist, fopen returns NULL.
// "rb" --> open for reading in binary.
// "w" --> open for writing ----> If the file exist, contents will be overwrite.
// "wb" --> open for writing in binary.
// "a" --> open for append
// If file is not exist then it will automatically created if we want to write a file.

#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Hello.txt", "w");
    fclose(fptr);
    
    return 0;
}
