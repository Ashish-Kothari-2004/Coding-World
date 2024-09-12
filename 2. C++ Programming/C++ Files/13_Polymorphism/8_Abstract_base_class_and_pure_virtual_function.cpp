/* 
Abstract base class: Sometimes implementation of all function cannot be provided in a base class because we don’t know the implementation. Such a class is called abstract class. 
An abstract class is a class that is designed to be specifically used as a base class. An abstract class contains at least one pure virtual function. You declare a pure virtual function by using a pure specifier ( = 0 ) in the declaration of a virtual member function in the class declaration.
// NOTE: Abstract base class and abstract class are same.


Pure virtual funcitons: A pure virtual function (or abstract function) in C++ is a virtual function for which we can have implementation, But we must override that function in the derived class, otherwise the derived class will also become abstract class.

Some Interesting Facts:
1) A class is abstract if it has at least one pure virtual function.
2) We can have pointers and references of abstract class type.
3) If we do not override the pure virtual function in derived class, then derived class also becomes abstract class.
4) An abstract class can have constructors.
5) An abstract class in C++ can also be defined using struct keyword.

*/

#include <iostream>
using namespace std;
class Base
{
public:
    int varBase = 0;
    virtual void display() = 0;// do-nothing function 
    // Throw error if function is not defined in derived class since display is a pure virtual function.
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