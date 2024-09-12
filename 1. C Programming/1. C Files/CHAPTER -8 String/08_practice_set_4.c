// Q.Write a program to encrypt a string by adding 1 to the ascii value of its characters.
// #include <stdio.h>
// void encrypt(char *str);
// int main()
// {
//     char str[] = "My name is ASHISH";
//     encrypt(str);
//     return 0;
// }
// void encrypt(char *str)
// {
//     char *ptr = str;
//     int i = 0;
//     while(*ptr != '\0')
//     {
//         *ptr = *ptr + 1;
//         ptr++;
//     }
//     *ptr = '\0';
//     printf("%s\n", str);
// }

// Q.Write a program to dencrypt a string encrypted using encrypt function in above this problem.
#include <stdio.h>
void dencrypt(char *str);
int main()
{
    char str[] = "Nz!obnf!jt!BTIJTI";
    dencrypt(str);
    return 0;
}
void dencrypt(char *str)
{
    char *ptr = str;
    int i = 0;
    while(*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    *ptr = '\0';
    printf("%s\n", str);
}