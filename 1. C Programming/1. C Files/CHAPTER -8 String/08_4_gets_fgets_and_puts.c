// String Function ----

// gets --> input a string (even multiword).But it is outdated and dangerous
// fgets -- intput a string.
// puts -- output a string .
#include <stdio.h>
int main()
{
    char str[100];

    // printf("Enter your full name ");
    // gets(str); 
    // puts(str);

    printf("Enter your full name ");// stdin --> standard input 
    fgets(str, 100, stdin);// stops when n - 1 chars input or new line entered.
    puts(str);// puts automatically enter a new line.
    return 0;
}