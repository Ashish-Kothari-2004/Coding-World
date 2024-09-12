// Q.Calculate income tax paid by an employee to the government as per the slabs mentioned below:
// Income slab       Tax
// 2.5L - 5.0L       5%
// 5.0L - 10.0L      20%
// Above 10.0L       30%
#include <stdio.h>
int main()
{
    int income;
    float tax;
    printf("Enter your Anual Income ");
    scanf("%d", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax = 0.20 * (income - 250000);
    }
    else if (income > 1000000)
    {
        tax = 0.50 * (income - 250000);
    }
    printf("Your net tax is %f\n", tax);

    return 0;
}