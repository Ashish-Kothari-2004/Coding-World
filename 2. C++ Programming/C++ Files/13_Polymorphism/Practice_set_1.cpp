// Virtual function

#include <iostream>
using namespace std;
class A
{
public:
    virtual void show()// Run Time Polymorphism
    {
        int a, b, c;
        a = 1;
        b = 2;
        c = a + b;
        cout << "The value of C in base class is: " << c << endl;
    }  
};

class B: public A
{
public:
    void show()
    {
        int a, b, c;
        a = 3;
        b = 1;
        c = a + b;
        cout << "The value of c in derived class " << c << endl;
    }
};

// int main()
// {
//     B obj;
//     obj.show();// Derived class or child class or sub class.
//     obj.A::show();// Base class or parent class or super class.

//     return 0;
// }

int main()
{
    A *ptr;
    B obj;
    ptr = &obj;
    ptr->show();// If show is virtual then derived class function will call.
     
    return 0;
}