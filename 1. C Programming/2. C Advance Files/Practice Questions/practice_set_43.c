// Q.43 WAP to Write Data into a File using fprintf().

#include <stdio.h>
int main()
{
    int num1 = 10;
    float num2 = 3.14;
    char str[] = "Hello, world!";

    FILE *file = fopen("example.txt", "w");
    if (file != NULL)
    {
        fprintf(file, "Integer: %d\n", num1);
        fprintf(file, "Float: %.2f\n", num2);
        fprintf(file, "String: %s\n", str);
        fclose(file);
        printf("Data written to the file.\n");
    }
    else
    {
        printf("Unable to open the file for writing.\n");
        return 1;
    }

    return 0;
}
