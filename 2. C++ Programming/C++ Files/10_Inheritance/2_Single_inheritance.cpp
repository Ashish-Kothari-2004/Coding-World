// 1. Single Inheritance: In single inheritance, a class is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.

#include <iostream>
using namespace std;
class Base // <-- Super class or parent class or Base class.
{
    int data1; // private by default and not inheritable.
public:
    int data2;
    void setdata(int n1, int n2);
    int getdata1(); // These three methods can access the private data member of this class, when this class is inherited.
    int getdata2();
};

void Base ::setdata(int n1, int n2)
{
    data1 = n1;
    data2 = n2;
}
int Base ::getdata1()
{
    return data1;
}
int Base ::getdata2()
{
    return data2;
}

class derived : public Base  // <-- Child class or sub class or derived class.
{
    int data3; // By default private
public:
    void process();
    void display();
};

void derived ::process()
{
    data3 = data2 + getdata1();
}

void derived ::display()
{
    cout << getdata1() << endl;
    cout << data2 << endl;
    cout << data3 << endl;
}

int main()
{
    derived d1, d2;
    d1.setdata(2, 3);
    d1.process();
    d1.display();
    d1.setdata(6, 7);
    d1.process();
    d1.display();

    return 0;
}