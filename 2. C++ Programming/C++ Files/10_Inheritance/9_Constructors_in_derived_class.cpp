/* NOTEs:
1. We can use constructors in derived classes in C++.
2. If base class constructor does not have any arguments, there is no need of any constructor in derived class.
3. But if there are one or more arguments in the base class constructor, derived class constructor need to pass arguments to the base class constructor.
4. If both base and derived classes have constructor, base class constructor executed first.
5. In multiple inheritance, base classes are constructed in the order in which they appear in the class declaration.
6. In multilevel inheritance, the constructors are executed in the order of inheritance.
*/

/* Special syntax:
1. C++ suppots an special syntax for passing arguments to multiple base classes.
2. The constructor of the derived class receive all the arguments at once and then will pass the call to the respective base classes.
3. The body is called after all the constructors are finished executing.
*/

/* Special case of Virtual base class:
1. The constructors of the virtual base classes are invoked before a nonvirtual base class.
2. If there are multiple base classes, they are invoked in the order declared.
3. Any non virtual base class are then constructed before the derived class constructor is executed.
*/

/* Order of execution
Case 1:
class A: public B
{
    // The order of execution of constructor >>  B() then A()
};

Case 2:
class A: public B, public C
{
    // The order of the execution of constructor >> B(), C() then A()
};

Case 3:
class A: public B, virtual public C
{
    // The order of execution of constructor >> C(), B() then A()
    // Virtual base class constructor called first.
};

*/

#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
    }
    void printData1()
    {
        cout << "The value of the data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2; // private data members never inherited.
public:
    Base2(int j)
    {
        data2 = j;
    }
    Base2()
    {
    }
    void printData2()
    {
        cout << "The value of the data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int data3, data4;

public:
    // Derived(int a, int b, int c, int d) : Base1(a), Base2(b)// Speciap syntax to pass the argument to Base class.
    Derived(int a, int b, int c, int d) : Base2(b), Base1(a) 

    // Will same for passing argument to the base class, the order of passing argument will same as declaration in the derived class. >> Base1, Base2
    {
        data3 = c;
        data4 = d;
        cout << "Derived class constructor is called" << endl;
    }
    void printDerived()
    {
        printData1();
        printData2();
        cout << "The value of data3 is " << data3 << endl
             << "The value of the data4 is " << data4 << endl;
    }
};

int main()
{
    Derived d1(34, 45, 456, 76);
    d1.printDerived();
    return 0;
}