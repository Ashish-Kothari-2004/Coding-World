#include <stdio.h>

struct student 
{
    char Name[10];
    int rollNumber;
    float CGPA;

};

int main()
{
    struct student s = {"ASHISH", 16, 8.9};
    struct student *ptr = &s;

    printf("Name is %s\n", (*ptr).Name);
    printf("Roll Number is %d\n", (*ptr).rollNumber);
    printf("CGPA is %f\n", (*ptr).CGPA);
    
    return 0;
}