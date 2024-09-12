// Dynamic Memory Allocation --> Dynamic memory allocation is a way to allocate memory to a data structure during the runtime.We can use dynamic memory allocation functions in C to allocate and free memory during runtime.

// malloc() function --> malloc stand for memory allocation.It takes number of bytes to be allocated as an input and returns a pointer of type void.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Sizeof operator in C 
    // printf("The size of integer in my pc is %d\n", sizeof(int));
    // printf("The size of float in my pc is %d\n", sizeof(float));
    // printf("The size of character in my pc is %d\n", sizeof(char));
    // printf("The size of double in my computer is %d\n", sizeof(double));
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));//The expression returns a NULL pointer if memory cannot be allocated.
    for(int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("The value of %d element is %d\n", i, ptr[i]);
    }
    return 0;
}