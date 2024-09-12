// Q13. Write program to pass address of structure variable to user defined function and display the contents.
#include <stdio.h>
struct employee
{
    int Id;
    float salary;
    char name[20];
};
void display(struct employee *p)
{
    printf("Salary of the employee is %.2f\n", (*p).salary);
    printf("Name of the employee is %s\n", (*p).name);
    printf("Id of the employee is %d\n", (*p).Id);
}
int main()
{
    struct employee e1 = {23435353, 50000, "Ashish"};
    display(&e1);
    return 0;
}