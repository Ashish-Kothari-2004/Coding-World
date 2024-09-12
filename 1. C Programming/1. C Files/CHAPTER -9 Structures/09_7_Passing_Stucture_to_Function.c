#include <stdio.h>
struct employee 
{
    char Name[10];
    int Company_code;
};
void printInfo(struct employee e1);

int main()
{
    struct employee e1 = {"Ashish", 1545456};
    printInfo(e1);

    return 0;
}

void printInfo(struct employee e1)
{
    printf("Name is %s\n", e1.Name);
    printf("Company code is %d\n", e1.Company_code);
}