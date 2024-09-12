// Q.32 WAP for getting any string from user in lower case letter then display frequency table for each alphabetic lower case character.
#include <stdio.h>

void displayFrequencyTable(const char *str)
{
    int frequency[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int index = str[i] - 'a';
            frequency[index]++;
        }
    }

    printf("Character\tFrequency\n");
    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] > 0)
        {
            printf("%c\t\t%d\n", 'a' + i, frequency[i]);
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string in lowercase letters: ");
    scanf("%s", str);

    displayFrequencyTable(str);

    return 0;
}
