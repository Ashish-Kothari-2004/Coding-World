// Types of file ----------
// There are two types of files.
// 1.Text files (.txt, .c, .java)
// 2.Binary files (.jpg, .mp3)
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Kothari.txt", "r");
    int num1;
    int num2;
    fscanf(fptr,"%d", &num1);//->This will read an integer from a file in num variable.
    fscanf(fptr ,"%d", &num2);
    printf("The value of num1 is %d\n", num1);
    printf("The value of num2 is %d\n", num2);
    fclose(fptr);// It is a good practice to close the file after we done our work.

    return 0;
}