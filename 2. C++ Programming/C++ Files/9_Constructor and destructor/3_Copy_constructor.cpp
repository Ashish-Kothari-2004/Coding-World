// Copy Constructor
#include <iostream>
using namespace std;
class Number
{
private:
    int a;
public:
    Number()// Default constructor for n1 and n2
    {
        a = 0;
    }
    Number(int x)
    {
        a = x;
    }

    // When there is no copy constructor found, compiler supplies its own copy constructor.
    // Number(Number &n1)// <-- Copy constructor
    // {
    //     cout << "Copy constructor called"<< endl;
    //     a = n1.a;
    // }

    void display()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    Number n1, n2, n3(2);
    n1.display();
    n2.display();
    n3.display();

    Number z1(n1), z2;// Copy constructor invoked
    z1.display();

    z2 = z1;// Copy constructor not invoked
    z2.display();

    Number z3 = z2;// Copy constructor invoked
    z3.display();

    return 0;
}