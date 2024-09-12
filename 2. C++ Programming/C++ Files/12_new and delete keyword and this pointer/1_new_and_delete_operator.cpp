// Dynamic memory allocation in C/C++ refers to performing memory allocation manually by a programmer. Dynamically allocated memory is allocated on Heap, and non-static and local variables get memory allocated on Stack.

// new keyword: The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available, a new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable.

// delete keyword: Since it is the programmer’s responsibility to deallocate dynamically allocated memory, programmers are provided delete operator in C++ language. 

#include <iostream>
using namespace std;
int main()
{
    // int *ptr = new int(5);/// for integer variable
    float *ptr = new float(5.233); // << for float variable
    cout << "The value at address ptr is " << *(ptr) << endl;

    int *arr = new int[3];// array of size 4
    arr[0] = 2;
    *(arr+1) = 3;
    arr[2] = 5;

    cout << "The value at address arr is " << arr[0] << endl;
    cout << "The value at address arr is " << arr[1] << endl;
    cout << "The value at address arr is " << arr[2] << endl;

    // delete arr 
    // delete arr;
    delete[] arr;// for deleting contiguous memory block.
    cout << "The value at address arr is " << arr[0] << endl;
    cout << "The value at address arr is " << arr[1] << endl;
    cout << "The value at address arr is " << arr[2] << endl;

    
    return 0; 
}