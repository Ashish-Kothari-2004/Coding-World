#include <stdio.h>
int main()
{
    char StrName[50];

    printf("Enter your name ");
    scanf("%s", StrName);// scanf cannot input multi-word strings with spaces.Then we use gets.
    printf("%s\n", StrName);

    return 0;

}