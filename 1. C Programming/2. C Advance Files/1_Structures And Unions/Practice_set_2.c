// Q.Write a program to input the detail of a employee and print it using array of union.

#include <stdio.h>
#define Max_employee 10
union employee
{
    char name[20];
    float salary;
    int Id, age;
};

int main()
{
    int n;
    printf("Enter the number of employee ");
    scanf("%d", &n);
    if (n <= Max_employee)
    {

        union employee arr[n];
        for (int i = 0; i < n; i++)
        {
            printf("Enter the name of %d: employee ", i + 1);
            scanf("%s", arr[i].name);

            printf("Enter salary of %d: employee ", i + 1);
            scanf("%f", &arr[i].salary);

            printf("Enter Id of %d: employee ", i + 1);
            scanf("%d", &arr[i].Id);

            printf("Enter age of %d: employee ", i + 1);
            scanf("%d", &arr[i].age);
        }
        printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("Name of %d employee is %s\n", i + 1, arr[i].name);

            printf("Salary of %d employee is %f\n", i + 1, arr[i].salary);

            printf("Id of %d employee is %d\n", i + 1, arr[i].Id);

            printf("Age is %d\n", i + 1, arr[i].age);
        }
    }
    else
    {
        printf("please enter less than or equal to 10 employee\n");
    }
    return 0;
}
