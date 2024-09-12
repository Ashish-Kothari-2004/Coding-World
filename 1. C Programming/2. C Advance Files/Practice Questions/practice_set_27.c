// Q27. Write a program to read the details of a student and then print it on the screen as well as write it into a file.
#include <stdio.h>
void printFile(char name[20], int roll_no, char section, float age)
{
    FILE *fptr = fopen("sample.txt", "w");
    if (fptr == NULL)
    {
        printf("Unable to open file\n");
    }
    else
    {
        fprintf(fptr, "Name: %s\n", name);
        fprintf(fptr, "Roll No: %d\n", roll_no);
        fprintf(fptr, "Section: %c\n", section);
        fprintf(fptr, "Age: %f\n", age);
    }
    fclose(fptr);
}
int main()
{
    char name[20];
    int roll_no;
    char section;
    int age;

    printf("Enter the name of student ");
    gets(name);
    printf("Enter the roll number of student ");
    scanf("%d", &roll_no);
    printf("Enter the section of student ");
    scanf(" %c", &section);
    printf("Enter the age of student ");
    scanf("%d", &age);

    printf("\nName of student: %s\n", name);
    printf("Roll number of student: %d\n", roll_no);
    printf("Section of student: %c\n", section);
    printf("Age of student: %d\n", age);

    printFile(name, roll_no, section, age);

    return 0;
}