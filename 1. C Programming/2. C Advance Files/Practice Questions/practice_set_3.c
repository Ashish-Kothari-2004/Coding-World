// Q3. Write a program to enter full name and date of birth of a person and display the same using nested structure.

#include <stdio.h>
struct detail
{
    char fullName[20];
};
struct information
{
    struct detail d1;
    int date;
    int month;
    int year;
};
int main()
{
    struct information info1;
    printf("Enter name: ");
    gets(info1.d1.fullName);
    
    printf("Enter date: ");
    scanf("%d", &info1.date);
        
    printf("Enter month: ");
    scanf("%d", &info1.month);

    printf("Enter year: ");
    scanf("%d", &info1.year);

    printf("Name is %s\n", info1.d1.fullName);
    printf("Date of birth is %d/%d/%d\n", info1.date, info1.month, info1.year);

    return 0;
}