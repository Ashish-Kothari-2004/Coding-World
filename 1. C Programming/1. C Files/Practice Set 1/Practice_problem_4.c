// Q.Write a C program to exchange two numbers using a temporary variable and without.
// Using teporary varialble ------
// #include <stdio.h>

// int main()
// {
//     int a, b, tem = 0;
//     printf("Enter first number ");
//     scanf("%d", &a);
//     printf("Enter second number ");
//     scanf("%d", &b);
//     printf("Number before sawping a = %d and b = %d\n", a , b);
//     tem = a ;
//     a = b ;
//     b = tem;
//     printf("Number after swaping is a = %d and b = %d \n", a ,b);

//     return 0;
// }

// Without third variable -----
#include <stdio.h>
int main()
{
    int a , b;
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b ");
    scanf("%d", &b);
    printf("Numbers before swaping is a = %d, b = %d\n", a ,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Numbers after swaping is a = %d, b = %d\n",  a, b);

    return 0;
} 