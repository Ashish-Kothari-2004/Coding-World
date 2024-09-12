// Instead of writing (*ptr).code, we can use arrow operator to access stucture properties as follows.
// (*ptr).code or ptr->code
#include <stdio.h>
struct student
{
    char Name[10];
    int rollNumber;
    float CGPA;
};

int main()
{
    struct student s = {"Ashish", 16, 8.8};
    struct student *ptr = &s;
    printf("Name is %s\n", ptr->Name);
    printf("Roll Number is %d\n", ptr->rollNumber);
    printf("CGPA is %f\n", ptr->CGPA);

    return 0;
}