// Structures with functions - 
// 1.Passing structure's members as function argument.
// 2.Passing whole structure as function argument.
// 3.Passing address of structure variable.

#include <stdio.h>
struct detail
{
    char name[30];
    int student_id;
};

// 1.Passing structure's members as function argument.
void display1(char N[], int id)
{
    printf("Name is %s\n", N);
    printf("Student id is %d\n", id);
}

// 2.Passing whole structure as function argument.
void display2(struct detail s1)
{
    printf("Name is %s\n", s1.name);
    printf("Student id is %d\n", s1.student_id);
}

// 3.Passing address of structure.
void display3(struct detail *s1)
{
    printf("Name is %s\n", (*s1).name);
    printf("Student id is %d\n", s1->student_id);// Using arrow operator.
}

int main()
{
    struct detail d1 = {"Ashish Kothari", 3245435};
    display1(d1.name, d1.student_id);
    display2(d1);
    display3(&d1);

    return 0;
}