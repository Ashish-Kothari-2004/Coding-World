#include <iostream>
using namespace std;
class Base
{
public:
    int varBase = 0;
    // In C++ it is permitted to initialize data members inside a class, in C it is not
    void display()
    {
        cout << "The value of varBase is " << varBase << endl;
    }
};

class Derived: public Base
{
public:
    int varDerived = 0;
    void display()
    {
        cout << "The value of varBase is " << varBase << endl;
        cout << "The value of Derived is " << varDerived << endl;
    }
};

int main()
{
    // Base *ptrBase;
    // Derived objDrived;
    // ptrBase = &objDrived;
    // In C++ it is permitted for a base class pointer to store the address of derived class object, but base class pointer can access only base class data members and methods.
    // ptrBase->varBase = 212;
    // ptrBase->display();
    // ptrBase->varDerived = 23;// can't access the member of the derived class by using pointer of the base class. 

    // Base b1; 
    // Base *ptrb;
    // ptrb = &b1;
    // ptrb->varBase = 23;
    // ptrb->display();

    Derived d1; 
    Derived *ptrd;
    ptrd = &d1;
    ptrd->varBase = 22;
    ptrd->varDerived = 2213;
    ptrd->display();
    

    return 0;
}