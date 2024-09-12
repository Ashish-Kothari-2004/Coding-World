#include <stdio.h>
int main()
{
    int marks[5];
    // int *P = &marks[0]; // It will point to the address of first element of an array.
    int *P = marks; // Also we can write like this.
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d: ", i + 1);
        // scanf("%d", &marks[i]);
        scanf("%d", P);
        P++;
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of student %d is %d\n", i + 1, marks[i]);
    }
    return 0;
}
