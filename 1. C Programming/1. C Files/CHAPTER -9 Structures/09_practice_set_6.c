// Q.Write a structure capable of storing dates.Write a fuction to compare those dates.
#include <stdio.h>
typedef struct dates
{
    int day;
    int month;
    int year;
}date;
void display(date d1, date d2);
int comparison(date d1, date d2);

int main()
{
    date d1 = {23, 3, 2021};
    date d2 = {21, 4, 2022};
    display(d1, d2);
    int a = comparison(d1, d2); 
    printf("DATE comparison is : %d\n", a);

    return 0;
}
void display(date d1, date d2)
{
    printf("DATE %d/%d/%d\n", d1.day, d1.month, d1.year);
    printf("DATE %d/%d/%d\n", d2.day, d2.month, d2.year);
}
int comparison (date d1, date d2)
{
    if(d1.year > d2.year)
    {
        return 1;
    }
    if(d1.year < d2.year)
    {
        return -1;
    }
    if(d1.month > d2.month)
    {
        return 1;
    }
    if(d1.month < d2.month)
    {
        return -1;
    }
    if(d1.day > d2.day)
    {
        return 1;
    }
    if(d1.day < d2.day)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}