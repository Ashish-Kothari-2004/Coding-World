#include <stdio.h>

struct employee
{
    char name[10];
    int code;
    float salary;
};

int main()
{
    struct employee e1, e2, e3;// Also we can create an array of stucture for convenience.
    printf("Enter the name of first employee ");
    scanf("%s", e1.name);
    printf("Enter the code of first employee ");
    scanf("%d", &e1.code);
    printf("Enter salary of first employee ");
    scanf("%f", &e1.salary);

    printf("Enter the name of second employee ");
    scanf("%s", e2.name);
    printf("Enter the code of second employee ");
    scanf("%d", &e2.code);
    printf("Enter salary of second employee ");
    scanf("%f", &e2.salary);

    printf("Enter the name of third employee ");
    scanf("%s", e3.name);
    printf("Enter the code of third employee ");
    scanf("%d", &e3.code);
    printf("Enter salary of third employee ");
    scanf("%f", &e3.salary);
    printf("\n");
    printf("DETAILS OF FIRST EMPLOYEE\n");
    printf("Name %s, code %d, salary %f\n", e1.name, e1.code, e1.salary);
    printf("DETAILS OF SECONd EMPLOYEE\n");
    printf("Name %s, code %d, salary %f\n", e2.name, e2.code, e2.salary);
    printf("DETAILS OF THIRD EMPLOYEE\n");
    printf("Name %s, code %d, salary %f\n", e3.name, e3.code, e3.salary);

    return 0;
}