// Q.Make a structure to store bank account information of a customer of ABC bank.Also make an alias for it.
#include <stdio.h>
typedef struct account 
{
    char name[10];
    double accountNumber;
}acc;

int main()
{
    acc c1 = {"ashish", 32874637476};
    acc c2 = {"rohan", 75645475454};
    printf("Name is %s and account number is %d\n", c1.name, c2.accountNumber);
    printf("Name is %s and account number is %d\n", c2.name, c2.accountNumber);

    return 0;
}