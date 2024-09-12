// Q.Write a function slice() to slice a string.It should change the original string such that it is now the sliced string. Take m and as the start and ending position of slice.

// #include <stdio.h>
// void slice(char *str, int m, int n);
// int main()
// {
//     char str[] = "Ashish Kothari";
//     slice(str, 7, 14);
//     printf("%s\n", str);
//     return 0;
// }
// void slice(char *str, int m, int n)
// {
//     int i = 0;
//     while (str[m + i] != '\0')
//     {
//         str[i] = str[m + i];
//         i++;
//     }
//     str[i] = '\0';
// }

// Another way to solve this problem ------
#include <stdio.h>
void slice(char *str, int m, int n);
int main()
{
    char str[] = "Ashish Kothari";
    slice(str, 7, 14);    
    return 0;
}

void slice(char *str, int m, int n)
{
    int i = 0;
    while((m + i) <= n)
    {
        str[i] = str[m + i];
        i++;
    }
    str[i] = '\0';
    printf("%s\n", str);

}
