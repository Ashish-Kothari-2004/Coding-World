// Q.51 WAP to open a text file in read mode and generate an error message if file doesn't exist.
#include <stdio.h>
int main()
{
    FILE *file;
    char filename[100];

    printf("Enter the file name: ");
    fgets(filename, sizeof(filename), stdin);

    filename[strcspn(filename, "\n")] = '\0';

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Error opening the file. File does not exist or cannot be opened.\n");
    }
    else
    {
        printf("File opened successfully.\n");

        fclose(file);
    }

    return 0;
}
