// Q.3 Write a pragram to change the value of a variable to ten times of it's current value.Write a function and pass the value by reference.
// #include <stdio.h>
// void fun(int *x);
// int main()
// {
//     int a = 2;
//     fun(&a);
//     printf("The value of a is %d\n", a);
//     return 0;
// }
// void fun(int *x)
// {
//     *x = *x * 10;
// }

// Q.Try problem 3 using call by value and verify that it does not change the value of the said variable.
#include <stdio.h>
void fun(int x);
int main()
{
    int a = 2;
    fun(a);
    printf("The value of a is %d\n", a);
    return 0;
}
void fun(int x)
{
    x = x * 10;
}