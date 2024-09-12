//  Q.42 WAP to Write and Read a String from a File.
#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "Hello, world!";

    FILE *file = fopen("example1.txt", "w");
    if (file != NULL)
    {
        fputs(string, file);
        fclose(file);
        printf("String written to the file.\n");
    }
    else
    {
        printf("Unable to open the file for writing.\n");
        return 1;
    }

    file = fopen("example1.txt", "r");
    if (file != NULL)
    {
        char readString[100];
        fgets(readString, sizeof(readString), file);
        fclose(file);

        if (readString[strlen(readString) - 1] == '\n')
        {
            readString[strlen(readString) - 1] = '\0';
        }

        printf("String read from the file: %s\n", readString);
    }
    else
    {
        printf("Unable to open the file for reading.\n");
        return 1;
    }

    return 0;
}
