// Q28. Write a program to edit the record of a particular student.
#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int roll_no;
    int age;
};
void displayRecord(struct student *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nName of the student %d: %s\n", i + 1, ptr->name);
        printf("Roll number of the student %d: %d\n", i + 1, ptr->roll_no);
        printf("Age of the student %d: %d\n", i + 1, ptr->age);
        ptr++;
    }
}
void editRecord(struct student *temp)
{
    printf("\nEnter new name: ");
    scanf("%s", &temp->name);
    printf("Enter new roll number: ");
    scanf("%d", &temp->roll_no);
    printf("Enter new age: ");
    scanf("%d", &temp->age);
}
int main()
{
    int n;
    int rollNo;
    printf("Enter the number of student: ");
    scanf("%d", &n);
    struct student *ptr = (struct student *)malloc(n * sizeof(struct student));
    struct student *temp = ptr;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the student %d: ", i + 1);
        scanf("%s", &temp->name);
        printf("Enter the roll number of the student %d: ", i + 1);
        scanf("%d", &temp->roll_no);
        printf("Enter the age of the student %d: ", i + 1);
        scanf("%d", &temp->age);
        temp++;
    }
    temp = ptr;
    int flag = 1;
    displayRecord(ptr, n);
    printf("Enter roll number of the student whose record you want to edit ");
    scanf("%d", &rollNo);
    for (int i = 0; i < n; i++)
    {
        if (temp->roll_no == rollNo)
        {
            editRecord(temp);
            flag= 0;
        }
        temp++;
    }
    if(flag)
    {
        printf("Record not found\n");
    }
    displayRecord(ptr, n);

    return 0;
}