/*
NOTE: Class templates with multiple parameters (one, two or more than one)
template < class T1, class T2, class T3, ........> (comma separated)
syntax:
    template <class T1, class T2>
    class className
    {
        class-body
    };

*/

#include <iostream>
using namespace std;
class TemClass
{
public:
    int val1 = 32; // Default value
    int val2 = 23;
};

template <class T1, class T2, class TC>
class MyClass
{
private:
    T1 data1;
    T2 data2;
    int data3;

public:
    MyClass(T1 d1, T2 d2, TC obj)
    {
        data1 = d1;
        data2 = d2;
        data3 = obj.val1;
    }
    void display()
    {
        cout << data1 << endl
             << data2 << endl
             << data3 << endl;
    }
};

int main()
{
    TemClass TemObj;
    MyClass<int, char, TemClass> obj1(2, 'a', TemObj);
    obj1.display();
    cout << endl;

    MyClass<char, char, TemClass> obj2('b', 'a', TemObj);
    obj2.display();
    cout << endl;

    MyClass<float, char, TemClass> obj3(435.32, 'a', TemObj);
    obj3.display();
    cout << endl;
    return 0;
}