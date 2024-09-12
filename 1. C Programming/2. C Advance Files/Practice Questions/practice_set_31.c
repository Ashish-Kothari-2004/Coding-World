// Q.31 WAP for getting any string from user then display it in reverse.
#include <stdio.h>
void strRev(char *str)
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    for (int i = 0; i < length/2; i++)
    {
        int temp = str[i];
        str[i] = str[length - 1];
        str[length - 1] = temp;
        length--;
    }
    
}
int main()
{
    char str[50];
    printf("Enter any string: ");
    scanf("%s", str);
    strRev(str);
    printf("%s\n", str);
    
    return 0;
}