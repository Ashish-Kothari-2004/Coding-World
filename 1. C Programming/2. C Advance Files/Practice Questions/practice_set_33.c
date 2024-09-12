// Q.33 WAP for getting any string from user than display it in opposite case.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter any string: ");
    scanf("%s", str);

    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else
        {
            printf("Invalid string\n");
            return 1;
        }
        
    }
    printf("%s\n", str);
    
    return 0;
}