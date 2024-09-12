// Q.35 WAP for getting any string from user then displays it in reverse using predefine function.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter any string: ");
    scanf("%s", str);
    strrev(str);
    printf("%s\n",str);
    
    return 0;
}