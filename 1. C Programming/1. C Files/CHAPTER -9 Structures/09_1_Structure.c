// Structure --> A collection of value of different data type.
// (.) --> Member operator or dot operator.It is used to access child object.
#include <stdio.h>
#include <string.h>

// Creating a new user defined data type -----
struct student
{
    char Name[10];
    int rollNumber;
    float cgpa;
};

int main()
{
    struct student s;// Here struct student ---> data type & s ---> Structure variable
    // s.Name = "ashish";
    // Wrong way to initialize a string, If a string is declared using array  notation, it cannot be reinitialized.
    strcpy(s.Name, "ashish");
    s.rollNumber = 16;
    s.cgpa = 8.4;

    printf("Name is %s\n", s.Name);
    printf("Roll Number is %d\n", s.rollNumber);
    printf("CGPA is %f\n", s.cgpa);

    return 0;
}