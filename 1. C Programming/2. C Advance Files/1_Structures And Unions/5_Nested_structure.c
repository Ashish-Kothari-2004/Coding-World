// Nested Structure -> A nested structure in C is a structure within structure. One structure can be declared inside another structure in the same way structure members are declared inside a structure.
// The structure can be nested in the following different ways:

// 1.By separate nested structure - In this method, the two structures are created, but the dependent structure should be used inside the main structure(Organisation) as a member.

// #include <stdio.h>
// // Declaration of dependent structure
// struct employee // Dependent structure must be declared first.
// {
//     int employee_id;
//     char name[20];
//     int salary;
// };

// struct Organisation
// {
//     char organisation_name[20];
//     char org_number[20];
//     struct employee e1;
// };

// // Driver code
// int main()
// {
//     // Structure variable of organisation
//     struct Organisation org = {"Amazon", "3454545", {34434, "ASHISH", 80000}};
//     printf("%s %s %d %s %d\n", org.organisation_name, org.org_number, org.e1.employee_id, org.e1.name, org.e1.salary);

//     return 0;
// }

// 2.By embedded nested structure - Using this method, allows to declare structure inside a structure and it requires fewer lines of code.
// Case 1: Error will occur if the structure is present but the structure variable is missing. Whenever an embedded nested structure is created, the variable declaration is compulsory at the end of the inner structure, which acts as a member of the outer structure. It is compulsory that the structure variable is created at the end of the inner structure.

// Case 2: When the structure variable of the inner structure is declared at the end of the inner structure. Both cases are give below.

#include <stdio.h>
// Declaration of the outer structure
struct Organisation
{
    char organisation_name[20];
    char org_number[20];

    // Declaration of inner structure
    //   struct Employee
    //   {
    //     int employee_id;
    //     char name[20];
    //     int salary;// Throws an error
    //   };// datatype struct Employee is present, but Structure variable is missing.
    struct Employee
    {
        int employee_id;
        char name[20];
        int salary;
    } e1; // Structure variable must be present.

};

int main()
{
    // Structure variable of organisation
    struct Organisation org = {"Amazon", "3454545", {34434, "ASHISH", 80000}};
    printf("%ld\n", sizeof(org));
    printf("%s %s %d %s %d\n", org.organisation_name, org.org_number, org.e1.employee_id, org.e1.name, org.e1.salary);
    return 0;
}