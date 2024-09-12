// Q.Write a program to illustrate the use of arrow operator -> in C.  
typedef struct candidate
{
    char name[10];
    int number;
}can;
#include <stdio.h>
int main()
{
    can c1, c2;
    strcpy(c1.name, "ashish");
    c1.number = 16;
    strcpy(c2.name, "kothari");
    c2.number = 8; 
    can *ptr1 = &c1;
    can *ptr2 = &c2;
    printf("candidate name is %s\n", (*ptr1).name);
    printf("name is %s\n", ptr1->name);
    printf("number is %d\n", (*ptr1).number);
    printf("number is %d\n", ptr1->number);

    printf("candidate name is %s\n", (*ptr2).name);
    printf("name is %s\n", ptr2->name);
    printf("number is %d\n", (*ptr2).number);
    printf("number is %d\n", ptr2->number);


    return 0;
}