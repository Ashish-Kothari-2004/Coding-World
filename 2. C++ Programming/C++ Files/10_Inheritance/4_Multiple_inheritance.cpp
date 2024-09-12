// 2. Multiple Inheritance: Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.

#include <iostream>
using namespace std;
class Base1
{
protected:
    int intBase1;

public:
    void setBase1(int a)
    {
        intBase1 = a;
    }
};
class Base2
{
protected:
    int intBase2;

public:
    void setBase2(int b)
    {
        intBase2 = b;
    }
};
class Base3
{
protected:
    int intBase3;

public:
    void setBase3(int c)
    {
        intBase3 = c;
    }
};
// This derived class is derived from Base1, Base2 and Base3 
class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1int is " << intBase1 << endl;
        cout << "The value of Base2int is " << intBase2 << endl;
        cout << "The value of Base3int is " << intBase3 << endl;
        cout << "The sum of the Base1int, Base2int and Base3int is " << intBase1 + intBase2 + intBase3 << endl;
    }
};

int main()
{
    Derived d1;
    d1.setBase1(5);
    d1.setBase2(45);
    d1.setBase3(23);
    d1.show();
    return 0;
}