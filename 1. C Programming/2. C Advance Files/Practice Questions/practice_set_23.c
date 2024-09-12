// Q23. Write a program to copy n characters of a character array from the mth position in another character array using pointers.
#include <stdio.h>

void copyArray(char *sourceArray, char *destinationArray, int m, int n)
{
    char *ptr1 = sourceArray + m - 1;
    char *ptr2 = destinationArray;

    for (int i = 0; i < n; i++)
    {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }

    *ptr2 = '\0';

    printf("%s\n", destinationArray);
}

int main()
{
    char sourceArray[100], destinationArray[100];
    printf("Enter array: ");
    gets(sourceArray);

    int m, n;
    printf("Enter position: ");
    scanf("%d", &m);
    printf("Enter number of characters: ");
    scanf("%d", &n);

    copyArray(sourceArray, destinationArray, m, n);

    return 0;
}
