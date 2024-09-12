// Q.Write a program with a structure representing a complex number.
// #include <stdio.h>
// typedef struct complex 
// {
//     int real;
//     int imagenary;

// }com;
// int main()
// {
//     com n1;
//     n1.real = 32;
//     n1.imagenary = 23;
//     printf("real number is %d\n", n1.real);
//     printf("Imagenary number is %d\n", n1.imagenary);
    
//     return 0;
// }

// Q.Create an array of 5 complex numbers created in above problem and display them with the help of display function.The values must be taken as an input from the user.
#include <stdio.h>
typedef struct complex
{
    int real;
    int imaginary;
}com;

void display (com n);
int main()
{
    com ar[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of real number ");
        scanf("%d", &ar[i].real);
        printf("Enter the value of imaginary number ");
        scanf("%d", &ar[i].imaginary);
    }
    for (int i = 0; i < 5; i++)
    {
        display(ar[i]);
    }
    
    return 0;
}

void display(com n)
{
    printf("The value of real number is %d\n", n.real);
    printf("The value of imaginary number is %d\n", n.imaginary);
}
