// Q.Write a program to count the number of occurrence of a given character in a string.
// #include <stdio.h>
// void occurrence(char *str, char ch);
// int main()
// {
//     char str[] = "ASHISH";
//     occurrence(str, 'S');
//     return 0;
// }
// void occurrence(char *str, char ch)
// {
//     int count = 0;
//     int i = 0;
//     while(str[i] != '\0')
//     {
//         if(str[i] == ch)
//         {
//             count++;
//         }
//         i++;
//     }
//     printf("occurrence = %d\n",  count);
// }

// Q.Write a program to check whether a given character is present in a string or not.
#include <stdio.h>
void checkchar(char str[], char ch);
int main()
{
    char str[] = "ASHISH";
    checkchar(str, 's');
    return 0;
}

void checkchar(char str[], char ch)
{
    char *ptr = str;
    int i = 0;
    while (*ptr != '\0')
    {
        if(*ptr == ch)
        {
            printf("The given character is present in string\n");
            return;
        }
        ptr++;
    }

    printf("The given charcter is not present in string\n");
}