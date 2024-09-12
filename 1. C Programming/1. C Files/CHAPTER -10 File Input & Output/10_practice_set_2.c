// Q.Write a program to read three integer form a file.
#include <stdio.h>
int main()
{
    FILE *fptr;
    int num1, num2, num3;
    fptr = fopen("practice_set_2.txt", "r");
    fscanf(fptr, "%d", &num1);
    printf("First number is %d\n", num1);
    fscanf(fptr, "%d", &num2);
    printf("Second number is %d\n", num2);
    fscanf(fptr, "%d", &num3);
    printf("Third number is %d\n", num3);
    fclose(fptr);
    return 0;
}