#include <stdio.h>
#include <string.h>

void convertOppositeCase(char str[])
{
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A'; // Convert lowercase to uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a'; // Convert uppercase to lowercase
        }
    }
}

int main()
{
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    convertOppositeCase(str);

    printf("String in opposite case: %s\n", str);

    return 0;
}
