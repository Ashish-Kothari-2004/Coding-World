/* 
// Binary Operator Overloading using class function.

#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    A(){}// Default constructor
    A(int x, int y) : a(x), b(y) {}
    void display()
    {
        cout<< "The value of a " << a << endl
            << "The value of b " << b << endl;
    }
    A operator+(A &obj)
    {
        // cout << "The value of a is " << a << endl
        //     << "The value of b is " << b << endl;
        // cout << "The value of obj.a is " << obj.a << endl
        //     << "The value of obj.b is " << obj.b << endl;

        A temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        // return A(obj.a+a, obj.b+b);
        return temp;
    }
};
int main()
{
    A obj(23, 45);
    obj.display();
    A obj1(78, 98);
    obj1.display();
    A obj2 = obj + obj1;
    obj2.display();
    
    return 0;
}
*/


// Binary Operator Overloading using friend function.

#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    A(){}// Default constructor
    A(int x, int y) : a(x), b(y) {}
    void display()
    {
        cout<< "The value of a " << a << endl
            << "The value of b " << b << endl << endl;;
    }
    // friend A operator+(A obj1, A obj2);
    friend A operator+(A &obj1, A &obj2);
};

// A operator+(A obj1, A obj2)
A operator+(A &obj1, A &obj2)
    {
        // cout << "The value of a is " << a << endl
        //     << "The value of b is " << b << endl;
        // cout << "The value of obj.a is " << obj.a << endl
        //     << "The value of obj.b is " << obj.b << endl;

        A temp;
        temp.a = obj1.a + obj2.a;
        temp.b = obj1.b + obj2.b;
        return temp;
    }
int main()
{
    A obj1(23, 45), obj2(78, 90);
    obj1.display();
    obj2.display();
    A obj3 = obj1 + obj2;
    obj3.display();


    return 0;
}
