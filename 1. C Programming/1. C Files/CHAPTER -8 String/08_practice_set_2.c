// Q.Write your own version of strlen function from <string.h>
// #include <stdio.h>
// void length(char *str);
// int main()
// {
//     char str[] = "ASHISH";
//     length(str);
//     return 0;
// }
// void length(char *str)
// {
//     char *ptr = str;
//     int len = 0;
//     while(*ptr != '\0')
//     {
//         len++;
//         ptr++;
//     }
//     printf("%d\n", len);
// }

// Another way to solve this problem -----
#include <stdio.h>
void length (char *str);

int main()
{
    char str[] = "ASHISH";
    length(str);
    return 0;
}

void length (char *str)
{
    int len = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    printf("%d\n", len);


}