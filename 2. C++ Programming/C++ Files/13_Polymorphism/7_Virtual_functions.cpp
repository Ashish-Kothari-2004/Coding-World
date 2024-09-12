// A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the method.

/* 
Rules of Virtual functions.... 
1. Virtual functions cannot be static.

2. A virtual function can be a friend function of another class.
Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.

3. The prototype of virtual functions should be the same in the base as well as the derived class.

4. They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.

5. A class may have a virtual destructor but it cannot have a virtual constructor.
*/

#include <iostream>
using namespace std;
class Base
{
public:
    int varBase = 0;
    // void display()
    virtual void display()// Run time polymorphism 
    {
        cout << "1 The value of varBase is " << varBase << endl;
    }
};

class Derived: public Base
{
public:
    int varDerived = 0;
    // If function is not defined in derived class in case of virtual function the base class virtual function will call.
    void display()
    {
        cout << "2 The value of varBase is " << varBase << endl;
        cout << "2 The value of Derived is " << varDerived << endl;
    }
};
int main()
{
    Base *ptrBase;
    Derived objDrived;
    ptrBase = &objDrived;
    ptrBase->varBase = 8;
    ptrBase->display();
    return 0;
}