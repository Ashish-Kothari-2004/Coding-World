#include <stdio.h>
int main()
{
    char day;
    printf("Enter first charactes of a day ");
    scanf("%c", &day);
    switch (day)
    {
    case 'm':
        printf("Monday\n");
        break;
    case 'T':
        printf("Tuesday\n");
        break;
    case 'w':
        printf("Wednesday\n");
        break;
    case 't':
        printf("Thursday\n");
        break;
    case 'f':
        printf("Friday\n");   
        break;
    case 's':
        printf("Satrurday\n");
        break;
    case 'S':
        printf("Sunday\n");
        break;
    default : printf("Not a right character\n");
    };
    return 0;
}
