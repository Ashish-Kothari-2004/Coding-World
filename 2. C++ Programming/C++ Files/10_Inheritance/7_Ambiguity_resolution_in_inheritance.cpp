#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "Hello how are you ?" << endl;
    }
};

class Base2
{
public:
    void greet()// Here 'greet' method is generating ambiguity.
    {
        cout << "Kaise ho ?" << endl;
    }
};

class Greet : public Base1, public Base2
{
    int a;
public:
    void greet()
    {
        Base1 ::greet();// For the solving the ambiguity of greet method of class Base1 and Base2
    }
};

// Ambiguity 2
class b
{
public:
    void say()
    {
        cout << "Hello World !" << endl;
    }
};
class d : public b
{
public:
    // d's say() method will override the b's say() method and resolve the ambiguity.
    void say()
    {
        cout << "Hello World !" << endl;
    }
};

int main()
{
    Base1 obj1;
    obj1.greet();
    Base2 obj2;
    obj2.greet();
    Greet g1;
    // g1.greet();// Thorw error since greet is ambiguous
    g1.greet();

    // Ambiguity 2
    d obj3;
    obj3.say();
    
    return 0;
}