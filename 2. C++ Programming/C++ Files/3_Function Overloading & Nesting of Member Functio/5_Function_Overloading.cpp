// Function Overloading --> Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading. In Function Overloading “Function” name should be the same and the arguments should be different. Function overloading can be considered as an example of a polymorphism feature in C++.

// Function overriding --> A function is a block of statements that together performs a specific task by taking some input and producing a particular output. Function overriding in C++ is termed as the redefinition of base class function in its derived class with the same signature i.e. return type and parameters. It falls under the category of Runtime Polymorphism.

// The parameters should follow any one or more than one of the following conditions for Function overloading:

// 1.Parameters should have a different type.
// add(int a, int b)
// add(double a, double b)

// 2.Parameters should have a different number.
// add(int a, int b)
// add(int a, int b, int c)

// 3.Parameters should have a different sequence of parameters.
// add(int a, double b)
// add(double a, int b)

#include <iostream>
using namespace std;
int sum (int n1, int n2)
{
    cout << "using two arguments n1 and n2" << endl;
    return n1 + n2;
}
int sum (int n1, int n2, int n3)
{
    cout << "using three arguments n1, n2 and n3" << endl;
    return n1 + n2 + n3;
}
int sum (double n1, double n2)
{
    cout << "using two argument of type double" << endl;
    return n1 + n2;
}
// Volume of a Cylinder..........
float volume(int r, int h)
{
    return 3.14 * r * r * h;
    
}
// Volume of a cube...........
int volume (int a)
{
    return a * a * a;

}
int main()
{
    cout << "The sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "The sum of 7.34, 8.45645 is " << sum(7.34, 8.45645) << endl;
    cout << "The sum of 7, 8 and 34 is " << sum(7, 8, 34) << endl;
    cout << "The volume of cylinder is " << volume(4, 6) << endl;
    cout << "The volueme of a cube is " << volume(3) << endl;

    return 0;
}