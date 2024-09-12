// Q4. Write a program to read the detail and display the information of all the student in class using array of structure.

#include <stdio.h>
struct student
{
    char name[10];
    int rollNo;
    float marks;
    char section;
};

int main()
{
    struct student s1[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s1[i].name);
        
        printf("Enter roll no. for student %d: ", i + 1);
        scanf("%d", &s1[i].rollNo);

        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &s1[i].marks);
        
        printf("Enter section for student %d: ", i + 1);
        scanf(" %c", &s1[i].section);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name of student %d is %s\n", i + 1, s1[i].name);

        printf("Enter roll no. for student %d is %d\n", i + 1, s1[i].rollNo);

        printf("Enter marks for student %d is %f\n", i + 1, s1[i].marks);

        printf("Enter section for student %d is %c\n", i + 1, s1[i].section);
    }
    
    return 0;
}