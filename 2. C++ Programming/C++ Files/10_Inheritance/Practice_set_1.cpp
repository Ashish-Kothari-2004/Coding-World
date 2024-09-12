#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        int a, b, c;
        a = 1;
        b = 2;
        c = a + b;
        cout << "The value of C in base class " << c << endl;
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

int main()
{
    B obj;
    obj.show();// Will call show() method from Derived class or child class or sub class.
    obj.A::show();// Will call show() method form Base class or parent class or super class.

    return 0;
}