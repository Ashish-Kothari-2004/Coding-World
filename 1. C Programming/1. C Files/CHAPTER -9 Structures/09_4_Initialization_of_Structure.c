#include <stdio.h>
struct student
{
    char Name[10];
    int rollNumber;
    float CGPA;
};

int main()
{
    struct student s = {"ASHISH", 16, 8.8}; // follow order define in structure declaration.
    printf("Name is %s\n", s.Name);
    printf("Roll Number is %d\n", s.rollNumber);
    printf("CGPA is %f\n", s.CGPA);
    
    return 0;
} 