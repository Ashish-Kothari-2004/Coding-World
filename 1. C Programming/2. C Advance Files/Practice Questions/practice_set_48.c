// Q.48 WAP to demonstrate the use of all the bultin function of <string.h>.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];
    char str4[20] = "Hello";
    char str5[20] = "WORLD";
    char str6[20] = "World";

    printf("Length of str1: %d\n", strlen(str1));

    strcpy(str3, str1);
    printf("str3 after strcpy: %s\n", str3);

    strcat(str1, str2);
    printf("str1 after strcat: %s\n", str1);

    int cmpResult = strcmp(str4, str5);
    printf("Result of strcmp(str4, str5): %d\n", cmpResult);

    char *chPtr = strchr(str6, 'r');
    printf("Pointer returned by strchr: %p\n", chPtr);

    char *substrPtr = strstr(str1, "World");
    printf("Pointer returned by strstr: %p\n", substrPtr);

    strncpy(str3, str1, 5);
    printf("str3 after strncpy: %s\n", str3);

    strncat(str3, str2, 3);
    printf("str3 after strncat: %s\n", str3);

    int nCmpResult = strncmp(str4, str5, 3);
    printf("Result of strncmp(str4, str5, 3): %d\n", nCmpResult);

    char *lastChPtr = strrchr(str6, 'r');
    printf("Pointer returned by strrchr: %p\n", lastChPtr);

    memset(str3, '*', 5);
    printf("str3 after memset: %s\n", str3);

    memcpy(str3, str4, 5);
    printf("str3 after memcpy: %s\n", str3);

    return 0;
}
