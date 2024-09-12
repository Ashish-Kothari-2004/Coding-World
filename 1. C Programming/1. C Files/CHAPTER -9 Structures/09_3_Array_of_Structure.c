#include <stdio.h>
#include <string.h>

struct student
{
    char Name[10];
    int rollNumber;
    float cgpa;
};

int main()
{
    struct student s[10];
    strcpy(s[0].Name, "Ashish");
    s[0].rollNumber = 16;
    s[0].cgpa = 8.6;

    strcpy(s[1].Name, "Ram");
    s[1].rollNumber = 56;
    s[1].cgpa = 7.6;

    strcpy(s[2].Name, "Mohan");
    s[2].rollNumber = 45;
    s[2].cgpa = 8.9;

    printf("Name is %s\n", s[0].Name);
    printf("Roll Number is %d\n", s[0].rollNumber);
    printf("Cgpa is %f\n\n", s[0].cgpa);

    printf("Name is %s\n", s[1].Name);
    printf("Roll Number is %d\n", s[1].rollNumber);
    printf("Cgpa is %f\n\n", s[1].cgpa);

    printf("Name is %s\n", s[2].Name);
    printf("Roll Number is %d\n", s[2].rollNumber);
    printf("Cgpa is %f\n\n", s[2].cgpa);

    return 0;
}