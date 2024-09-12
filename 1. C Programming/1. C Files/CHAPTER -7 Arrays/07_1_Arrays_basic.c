// Arrays --> Arrays is a collection of similar data type stored at contiguous memory locations.
// An array can be any type of data type ---------
// 1.Array of integers --> int IntArray[] = {1, 2, 3, 4, 5};
// 2.Array of floating point numbers --> float FloatArray[] = {1.2, 3.4, 5.5, 6.7};
// 3.Array of characters --> char CharArray[] = {'a', 'b', 'c'};

// Note - It is very important to note that the array index starts with 0. 
#include <stdio.h>
int main()
{
    // Initialization of an Array.
    // int a[5] = {1, 2, 3, 4, 5};// Also we can write like this --> a[] = {1, 2, 3, 4, 5}
    // printf("The value of a is %d\n", a[0]);// Allocate space for 5 integer. 
    // printf("The value of b is %d\n", a[1]);
    // printf("The value of c is %d\n", a[2]);
    // printf("The value of d is %d\n", a[3]);
    // printf("The value of e is %d\n", a[4]);

    // Second methord--- 
    // // But not recommended.
    int a[5];// Allocate space for 5 integer.
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    printf("The value of a is %d\n", a[0]);
    printf("The value of b is %d\n", a[1]);
    printf("The value of c is %d\n", a[2]);
    printf("The value of d is %d\n", a[3]);
    printf("The value of e is %d\n", a[4]);
    
    return 0;

}