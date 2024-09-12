// typedef keyword --> We can use typedef keyword to create an alias name for data type in c.
#include <stdio.h>
#include <string.h>

typedef struct ComputerScienceStudent 
{
    char name[10];
    int roll;
    float percentage;
}coe;// Here coe is alias 

int main()
{
    coe student1;
    strcpy(student1.name, "Ashish");
    student1.roll = 16;
    student1.percentage = 89;
    printf("Name is %s\n", student1.name);
    printf("Roll number is %d\n", student1.roll);
    printf("percentage is %f\n", student1.percentage);
    
    return 0;
}