// Inheritance - The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming. Inheritance is a feature or a process in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.

// Sub Class: The class that inherits properties from another class is called Subclass or Derived Class.
// Super Class: The class whose properties are inherited by a subclass is called Base Class or Superclass.

// Why and when to use inheritance?
// Code reuse, Polymorphism, Simplify code, Easier to maintain and modify, Encapsulation

// Syntax:
// class  <derived_class_name> : <visibility-mode> <base_class_name>
// {
//         //body
// }

// Modes of Inheritance: There are 3 modes of inheritance.
// 1.Public Mode:
// 2.Protected Mode:
// 3.Private Mode:

/*
Base class member                  Types of inheritance
access specifier       public            private               protected

public                 public            private                protected
private                Not inherited     Not inherited          Not inherited
protected              protected         private                protected

*/

// Note:
// A derived class doesn’t inherit access to private data members.
// Visibility mode and access-specifier are same.
// In C++, the default mode of visibility is private.
// The private members of the base class are never inherited.

// Types Of Inheritance:-
// 1.Single inheritance
// 2.Multilevel inheritance
// 3.Multiple inheritance
// 4.Hierarchical inheritance
// 5.Hybrid inheritance

#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    float salary; // Base class constructor is called first
    employee() {}
    employee(int i, float j)
    {
        id = i;
        salary = j;
    }
};
class programmer : private employee // Default visibility mode is private
{
public:
    int languageCode = 8;
    // In C++ it is possible to initialize data member of a class inside a class definition and it also possible for structure to initialize structure members inside a structure definition but it is not possible in C language.
    // programmer(){}
    programmer(int inpId, float s)
    {
        id = inpId;
        salary = s;
    }
    void setdata()
    {
        cout << id << endl;
        cout << salary << endl;
    }
};

int main()
{
    // employee ashish(2, 22323), kothari(23, 35435);
    // cout << ashish.salary << endl;
    // cout << kothari.salary << endl;
    programmer p1(); // It will call base class default constructor first.
    programmer p2(23, 89);
    // p1.setdata();

    return 0;
}