// Standard Library Function ---------
// In <string.h>

// 1.strlen(str) - count number of characters excluding '\0'
// 2.strcpy(newString , oldString) - copies value of old string to new string.
// 3.strcat(firstString , secondString) - concatenates first string with second string.
// Meaning of concatenates --------> link (things) together in a chain or series.
// 4.strcmp(firstString , secondString) - Compares 2 strings & returns a value.
// 0 --> string equal
// negative --> first < second (ASCII)
// positive --> first > second (ASCII)

// 1.strlen(str) ---------
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = "ashish";
//     int length = strlen(str);// strlen(str) return type is unsigned long.
//     printf("The length of string is : %d\n", strlen(str));
//     return 0;
// }

// 2.strcpy(newString , oldString) ----------
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[] = "Ashish";
//     char str2[] = "Kothari";
//     strcpy(str1, str2);
//     puts(str1);

//     return 0;
// }

// 3.strcat(firstString , secondString) -----------
// #include <stdio.h>  
// #include <string.h>
// int main()
// {
//     char str1 [] = "ASHISH";
//     char str2 [] = "KOTHARI";
//     strcat(str1, str2);
//     puts(str1);
//     return 0;
// }

// 4.strcmp(firstString , secondString) -----------
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "APPLE";
    char str2[] = "BANANA";
    printf("%d\n", strcmp(str1, str2));// The ASCII value of A is less than B.Then A - B = negative value. 

    char str3[] = "hhhb";
    char str4[] = "hhha";
    printf("%d\n", strcmp(str3, str4));

    char str5[] = "aa";
    char str6[] = "aa";
    printf("%d\n", strcmp(str5, str6));

    return 0;
}
