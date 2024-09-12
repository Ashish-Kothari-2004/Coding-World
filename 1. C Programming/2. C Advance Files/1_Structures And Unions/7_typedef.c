// typedef -> The typedef is a keyword that is used in C programming to provide existing data types with a new name. typedef keyword is used to redefine the name already the existing name. When names of datatypes become difficult to use in programs, typedef is used with user-defined datatypes, which behave similarly to defining an alias for commands.
// typedef in C 
// #include <stdio.h>
// int main()
// {
//     typedef long int li;
//     li a = 324.52343;
//     printf("%li\n", a);
//     return 0;
// }

// tyepdef in structure .....
#include <stdio.h>
// typedef struct student
typedef struct // It is also valid 
{   
    // char st[20];// Array Notation  
    char *st;// Pointer Notation 
    int a;
    float b;
}stu;

int main()
{
    // stu s1;
    // s1.st = "Ashish";
    // s1.a = 5;
    // s1.b = 34.454;
    stu s1 = {"Ashish Kothari", 5, 34.454};// Convenient way to initialization
    printf("%s\n", s1.st);
    printf("%d\n", s1.a);
    printf("%f\n", s1.b);

    return 0;
}