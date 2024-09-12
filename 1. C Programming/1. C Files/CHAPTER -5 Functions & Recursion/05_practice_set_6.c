// Q.Write a program using recursion to calculate nth element of fibonacci series.

// Fibonacci Sequence --
// The Fibonacci Sequence is the series of numbers:
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.........
// The next number is found by adding up the two numbers before it:
// the 2 is found by adding the two numbers before it (1+1),
// the 3 is found by adding the two numbers before it (1+2),
// the 5 is (2+3), and so on!

// #include <stdio.h>
// long fibonacci(int num)
// {
//     if (num <= 1)
//         return num;
//     return fibonacci(num - 1) + fibonacci(num - 2);
// }
// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("\nThe %dth fibonacci number is %ld\n", num, fibonacci(num));
//     return 0;
// }

// Q.Write a program in C to Print Fibonacci Series using recursion.
// fibonacci series -
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34......
#include <stdio.h>
int fibonacci(int);
int main()
{
   int n;
   printf("Enter number ");
   scanf("%d", &n);

   for (int i = 1; i <= n; i++)
   {
      printf("%d\n", fibonacci(i));
   }
   return 0;
}
int fibonacci(int n)
{
   if (n == 1)
   {
      return 0;
   }
   if (n == 2)
   {
      return 1;
   }
   else
   {
      return fibonacci(n - 2) + fibonacci(n - 1);
   }
}