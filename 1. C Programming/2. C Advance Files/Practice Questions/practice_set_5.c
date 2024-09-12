// Q5. Write a program to pass entire structure to a user define function.
#include <stdio.h>
struct employee
{
    char name[20];
    int Id;
    float salary;
};
void display(struct employee e1)
{
    printf("Name of employee: %s\n", e1.name);
    printf("Employee Id: %d\n", e1.Id);
    printf("Employee salary: %f\n", e1.salary);
}
int main()
{
    struct employee e1 = {"Ashish", 22041832, 50000};
    display(e1);
    return 0;
}