#include <stdio.h>
int main()
{
    int day;
    printf("Enter a day (1-7) ");
    scanf("%d", &day);
    switch (day)  // Nested switch (switch inside switch) are allowed.
    {
    case 1:
        printf("Monday\n");//Cases can be in any order.
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default: printf("Not a valid number\n");
    };
    return 0;
}