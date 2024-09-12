// Array within Structure -> A structure is a data type in C/C++ that allows a group of related variables to be treated as a single unit instead of separate entities. A structure may contain elements of different data types – int, char, float, double, etc. It may also contain an array as its member. Such an array is called an array within a structure. An array within a structure is a member of the structure and can be accessed just as we access other elements of the structure.

#include <stdio.h>
struct candidate
{
    int roll_no;
    char grade;
    float marks[5];// Array within sturcture
};
void display(struct candidate s1)
{
    printf("Roll No is %d\n", s1.roll_no);
    printf("Grade is %c\n", s1.grade);
    int length = sizeof(s1.marks) / sizeof(s1.marks[0]);
    for (int i = 0; i < length; i++)
    {
        printf("The Marks of subject %d is %.2f\n", i + 1, s1.marks[i]);
    }
}
int main()
{
    struct candidate A = {23, 'A', {67, 45, 56, 34, 89}};
    display(A);
    return 0;
}