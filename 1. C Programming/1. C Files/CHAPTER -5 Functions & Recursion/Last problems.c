// Q.Write a program to find whether a number is prime or not using recursion.
#include <stdio.h>
int checkForPrime(int);
int i;

int main()
{

  int n1, primeNo;
  printf(" Input any positive number : ");
  scanf("%d", &n1);

  i = n1 / 2;

  primeNo = checkForPrime(n1); // call the function checkForPrime

  if (primeNo == 1)
    printf(" The number %d is a prime number. \n\n", n1);
  else
    printf(" The number %d is not a prime number. \n\n", n1);
  return 0;
}

int checkForPrime(int n1)
{
  if (i == 1)
  {
    return 1;
  }
  else if (n1 % i == 0)
  {
    return 0;
  }
  else
  {
    i = i - 1;
    checkForPrime(n1); // calling the function checkForPrime itself recursively
  }
}
