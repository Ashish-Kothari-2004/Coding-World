// Use of pointer Arithmetic-- To Accessing the arrays.
// pointer can be incremented and decremened.
 
// The following operation can be performed on a pointer ---
// 1.Addition of a number on a pointer.
// 2.subtraction of a number from a pointer.
// 3.subtraction of a pointer from another.
// 4.comparison of two pointer variable.

#include <stdio.h>
int main()
{
    // increment and decrement of a pointer -----
    // If int reserve 4 bytes in computer then the value of ptr will increase by 4.
    // int i = 3;
    // int *ptr = &i;
    // printf("The value of ptr is %u\n", ptr);
    // ptr++;//ptr = ptr + 1;
    // printf("The value of ptr is %u\n", ptr);
    // ptr--;// ptr = ptr - 1;
    // printf("The value of ptr is %u\n", ptr);

    // If float reserve 4 bytes in computer then the value of ptr will increase by 4.
    // float i = 3.4;
    // float *ptr = &i;
    // printf("The value of ptr is %u\n", ptr);
    // ptr++;// ptr = ptr + 1;
    // ptr--;// ptr = ptr - 1;
    // printf("The value of ptr is %u\n", ptr);

    // If char reserve 1 bytes in computer then the value of ptr will increase by 1.
    // char i = '3';
    // char *ptr = &i;
    // printf("The value of ptr is %u\n", ptr);
    // ptr++;
    // printf("The value of ptr is %u\n", ptr);
    // ptr--;
    // printf("The value of ptr is %u\n", ptr);

    // Subtraction of a pointer from another -----
    // float percentage = 80;
    // float _percentage = 90;
    // float *a = &percentage;
    // float *b = &_percentage;
    // printf("%d\n", a - b);// 1 refers to 1 data type.

    // comparison of two pointer variable -----
    int marks = 3;
    int *ptr = &marks;
    int _marks = 4;
    int *_ptr = &_marks;
    printf("The address of marks is %u\n", ptr);
    printf("The address of _marks is %u\n", _ptr);
    printf("Difference %u\n", ptr - _ptr);// 1 --> one data type.
    _ptr = &marks;
    printf("comparison %u\n", ptr == _ptr);// 1 --> True

    return 0;

}