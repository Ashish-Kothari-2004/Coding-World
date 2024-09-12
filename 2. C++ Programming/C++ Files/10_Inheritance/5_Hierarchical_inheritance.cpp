// 4. Hierarchical Inheritance: In this type of inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class.

#include <iostream>
using namespace std;
class base
{
public:
    void show_base()
    {
        cout << "Show base is called" << endl;
    }

};

class derived1 : public base 
{
public:
    void show_derived1()
    {
        cout << "Show derived1 is called" << endl;
    }

};

class derived2 : public base
{
public:
    void show_derived2()
    {
        cout << "Show derived2 is called" << endl;
    }

};

int main()
{
    derived1 d1;
    d1.show_base();
    d1.show_derived1();
    derived2 d2;
    d2.show_base();
    d2.show_derived2();

    return 0;
}