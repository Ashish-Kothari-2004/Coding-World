// Q.30 WAP for getting any string from user then find out whether this string is palindrome or not.

#include <stdio.h>
#include <string.h>
void isPalindrome(char *str)
{
    int length = strlen(str);
    int flag = 0;
    for (int i = 0; i < length/2; i++)
    {
        if (str[i] != str[length - 1])
        {
            printf("String is not palindrome\n");
            flag = 1;
            return;
        }    
        length--; 
    }
    if (flag == 0)
    {
        printf("String is palindrome\n");
    }
    
}
int main()
{
    char str[50];
    printf("Enter any sting : ");
    scanf("%s", str);
    isPalindrome(str);
    return 0;
}