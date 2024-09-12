// Pointers -> In C++, a pointer refers to a variable that holds the address of another variable. Like regular variables, pointers have a data type. For example, a pointer of type integer can hold the address of a variable of type integer. A pointer of character type can hold the address of a variable of character type.
#include <iostream>
using namespace std;
int main()
{
    int a = 45;
    int *b = &a;
    cout << "The address of a is " << b << endl;
    cout << "The address of a is " << &a << endl;
    // & --> Address of operator 
    // * --> Value at address operator or dereference operator
    cout << "The value at address " << *b << endl;

    // Pointer to pointer 
    int **c = &b;
    cout << "Value at address c is " << *c << endl;// it will give the address of a
    cout << "Address of c is " << &c << endl;// it will give the address of c
    cout << "Value at address c value at address c " << **c << endl;
    cout << "\n";
    return 0;


}