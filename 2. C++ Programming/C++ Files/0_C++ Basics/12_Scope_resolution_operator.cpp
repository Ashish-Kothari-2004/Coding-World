// Scope resolution operator (::) --> The scope resolution operator is used to reference the global variable or member function that is out of scope. Therefore, we use the scope resolution operator to access the hidden variable or function of a program.

// Why we use sope resolution operator ?
// 1.To access a global variable when there is a local variable with same name: 
// 2.To define a function outside a class. 
// 3.To access a class’s static variables.
// 4.In case of multiple Inheritance: If the same variable name exists in two ancestor classes, we can use scope resolution operator to distinguish.

#include <iostream>
using namespace std;
int sum = 45;
int main()
{
    // int a, b, sum;
    // cout << "Enter the value of a ";
    // cin >> a;
    // cout << "Enter the value of b ";
    // cin >> b;
    // sum = a + b;
    // cout << "The sum of a and b is " << sum << endl;
    // cout << "The value of global sum is " << :: sum << endl;//:: is scope resolutin operator

    float d = 34.3f;
    long double e = 45.3l;
    cout << "The size of d is " << sizeof(d) << endl
         << "The size of e is " << sizeof(e) << endl
         << "The size of 34.3 is " << sizeof(34.3) << endl
         << "The size of 34.3f is " << sizeof(34.3f) << endl
         << "The size of 34.3F is " << sizeof(34.3F) << endl
         << "The size of 34.3l is " << sizeof(34.3l) << endl
         << "The size of 34.3L is " << sizeof(34.3L) << endl;
    return 0;
}
