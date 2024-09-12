// Q.41 WAP to Write and Read an Integer from a File.

#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    FILE *file = fopen("example.txt", "w");
    if (file != NULL)
    {
        fprintf(file, "%d", number);
        fclose(file);
        printf("Integer written to the file.\n");
    }
    else
    {
        printf("Unable to open the file for writing.\n");
        return 1;
    }

    file = fopen("example.txt", "r");
    if (file != NULL)
    {
        int readNumber;
        fscanf(file, "%d", &readNumber);
        fclose(file);
        printf("Integer read from the file: %d\n", readNumber);
    }
    else
    {
        printf("Unable to open the file for reading.\n");
        return 1;
    }

    return 0;
}
