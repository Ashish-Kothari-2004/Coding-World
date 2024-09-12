// Q. Write your own version of strcpy function from <string.h>
// #include <stdio.h>
// void strcopy(char *str1, char *str2);
// int main()
// {
//     char str1[] = "Ashish";
//     char str2[] = "Kothari";
//     strcopy(str1, str2);
//     return 0;
// }
// void strcopy(char *str1, char *str2)
// {
//     int i  = 0;
//     while(str2[i] != '\0')
//     {
//         str1[i] = str2[i];
//         i++;
//     }
//     str1[i] = '\0';
//     printf("%s\n", str1);
// }

// Another way to solve this problem -----
#include <stdio.h>
void strcopy(char *str1, char *str2);
int main()
{
    char str1[] = "Ashish";
    char str2[] = "Kothari";
    strcopy(str1, str2);
    return 0;
}
void strcopy(char *str1, char *str2)
{
    int a = 0;
    int i = 0;
    while(str2[i] != '\0')
    {
        a = str2[i];
        str1[i] = a;
        i++;
    }
    str1[i] = '\0';
    printf("%s\n", str1);
}
