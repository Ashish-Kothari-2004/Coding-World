#include <iostream>
// int t;
using namespace std;
int swap(int n1, int n2)
{
    int t;
    t = n1;
    n1 = n2;
    n2 = t;
}

int swapPointer(int *n1, int *n2)
{
    int t;
    t = *n1;
    *n1 = *n2;
    *n2 = t;
}

int swapReferenceVar(int &n1, int &n2)
{
    int t;
    t = n1;
    n1 = n2;
    n2 = t;
}

int &return_By_Reference(int &n1, int &n2)
{
    int t;
    t = n1;
    n1 = n2;
    n2 = t;
    // return t;
    return n1;// It can only return reference variable or global variable.
}

int main()
{
    int a = 3, b = 2;

    // cout << "Before swaping the value of a is " << a << endl
    //      << "Before swaping the value of b is " << b << endl;

    // Call by value ------
    // // It will not work because the copy of a and b will pass to the function as a argument.
    swap(a, b);
    cout << "After swaping the value of a is " << a << endl
         << "After swaping the value of b is " << b << endl;

    // Call by reference using pointers ------
    swapPointer(&a, &b);
    cout << "The value of a using Pointer is " << a << endl
         << "The value of b using Pointer is " << b << endl;

    // Call by reference using reference variables ------
    swapReferenceVar(a, b);
    cout << "The value of a using reference variable is " << a << endl
         << "The value of b using referende variable is " << b << endl;

    // Return by reference -------
    return_By_Reference(a, b);
    // return_By_Reference(a, b);
    // return_By_Reference(a, b) = 34;
    cout << "The value of reference n1 is " << a << endl;

    return 0;
}