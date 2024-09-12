// String --> A character array teminated by a null character '\0'(null character).Null character denotes string temination.

// Types of initialising a string -----------------------------------
// 1.char str[] = {'A', 'S', 'H', 'I', 'S', 'H','\0'};
// 2.char str[] = "ASHISH";
// 3.char *str = "ASHISH";

#include <stdio.h>
int main()
{
    // Intialising string -------

    char StrName[] = {'A', 'S', 'H', 'I', 'S', 'H','\0'};
    for(int i = 0; StrName[i] != '\0'; i++)
    {
        printf("%c", StrName[i]);
    }
    printf("\n");

    // char StrName[] = "ASHISH";  // convenient way to print string 
    // printf("%s\n", StrName);

    return 0;
}