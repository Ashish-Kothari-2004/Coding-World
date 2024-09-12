// Q12. Write a program to declare pointer as members of structure and display the contents of the structure.
#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[50];
    int age;
    float *marks;
};

int main()
{
    struct student s;

    s.marks = (float *)malloc(5 * sizeof(float));
    
    printf("Enter the name of the student: ");
    scanf("%s", s.name);

    printf("Enter the age of the student: ");
    scanf("%d", &s.age);

    printf("Enter the marks of the student:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &s.marks[i]);
    }

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", s.marks[i]);
    }
    printf("\n");

    free(s.marks);

    return 0;
}
