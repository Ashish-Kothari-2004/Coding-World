// Question for Rcursion
// Q.Print the following parttern using recursion. 
// *
// **
// ***
// ****
// *****
// ******
// *******
#include <stdio.h>
void printStars(int);
int main()
{
     int n;
     printf("Enter line number ");
     scanf("%d", &n);
     printStars(n);
     return 0;
}
void printStars(int n)
{
     if (n == 1)
     {
          printf("*\n");
          return;
     }
     printStars(n - 1);
     for (int i = 1; i <= n; i++)
     {
          printf("*");
     }
     printf("\n");
}

// Q.Write a program using functions to print the follwing partten(first n line).
// *
// ***
// *****
// *******
// *********
#include <stdio.h>
void parttern(int);
int main()
{
    int num;
    printf("Enter line number ");
    scanf("%d", &num);
    parttern(num);
    return 0;
}
void parttern(int num)
{
   if (num == 1)
   {
        printf("*\n");
        return;
   }
   parttern(num - 1);
   for (int i = 1; i <= (2*num - 1); i++)
   {
        printf("*");
   }
   printf("\n");
}