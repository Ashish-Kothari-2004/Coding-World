// Q.36 WAP for getting any string from user and store all upper case letter of the string in file “up.txt”, lower case alphabet in “lw.txt”, digit in “dg.txt” and all special character in “sp.txt”. 
#include <stdio.h>
#include <ctype.h>

void store_Char_To_File(const char *str, const char *filename)
{
    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error opening file %s\n", filename);
        return;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isupper(str[i]))
        {
            fputc(str[i], file);
        }
    }

    fclose(file);
}

void store_Low_To_File(const char *str, const char *filename)
{
    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error opening file %s\n", filename);
        return;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            fputc(str[i], file);
        }
    }

    fclose(file);
}

void store_Dig_To_File(const char *str, const char *filename)
{
    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error opening file %s\n", filename);
        return;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
        {
            fputc(str[i], file);
        }
    }

    fclose(file);
}

void store_Sp_Char_To_File(const char *str, const char *filename)
{
    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error opening file %s\n", filename);
        return;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isalnum(str[i]))
        {
            fputc(str[i], file);
        }
    }
    fclose(file);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    store_Char_To_File(str, "up.txt");
    store_Low_To_File(str, "lw.txt");
    store_Dig_To_File(str, "dg.txt");
    store_Sp_Char_To_File(str, "sp.txt");

    printf("Characters stored in respective files.\n");

    return 0;
}
