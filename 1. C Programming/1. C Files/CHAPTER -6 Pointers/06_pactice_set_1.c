// Q.Write a program to print the address of a variable.Use this address to get the value of   this variable.
// #include <stdio.h>
// int main()
// {
//     int x = 3;
//     printf("The address of x is %u\n", &x);
//     printf("The value of x is %d\n", *(&x));
//     return 0;
// }

// Q.Write a program having a variable i.Print the address of i.Pass this variable to a function and print it's address.Are these addresses are same ?. why?
// #include <stdio.h>
// void add(int x);
// int main()
// {
//     int i;
//     printf("The address of i is %u\n", &i);
//     add(i);// when we pass argument in function call the copy of variable will be pass. 
//     return 0;// answer is defferent because the copy of argument will be pass.
// }
// void add(int i)
// {
//     printf("The address of i is %u\n", &i);
// }

// Q.Write a program to print the value of a variable i by using pointer to pointer variable.
#include <stdio.h>
int main()
{
    int a = 5;
    int *b = &a;
    int **c = &b;
    printf("The value of a is %d\n", **c);
    return 0;
}