// Q.50 WAP to enter a string and print each chracter along with the address.
#include <stdio.h>

int main()
{
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    for (int i = 0; inputString[i] != '\0'; i++)
    {
        printf("Character: %c, Address: %p\n", inputString[i], &inputString[i]);
    }

    return 0;
}
