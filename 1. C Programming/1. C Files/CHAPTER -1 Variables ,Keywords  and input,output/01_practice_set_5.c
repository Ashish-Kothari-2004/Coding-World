// principal ---> Amount 
// rate ---> how much amount we need to pay yearly.
// year ----> years

#include <stdio.h>
int main()
{
    int principal = 100, rate = 4, years = 1 ;
    int simpalinterest = (principal * rate * years) / 100;
    printf("The value of simpal interest is %d \n" , simpalinterest);
    return 0;
}