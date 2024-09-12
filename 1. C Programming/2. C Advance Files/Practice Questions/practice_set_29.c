// Q.29 WAP for getting any string from user then display this string in alphabetical order.
#include <stdio.h>
#include <string.h>

void sort(char str[])
{
    int length = strlen(str);
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (str[j] > str[j + 1])
            {
                int temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main()
{
    char str[50];
    printf("Enter any string ");
    scanf("%s", str);
    sort(str);
    printf("Alphabetical order of the string:\n");
    printf("%s\n", str);

    return 0;
}