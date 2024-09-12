// Parameterized Constructor
#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;

public:
    complex(int x, int y);// Declaration of parameterized constructor 
    void display();
};

complex::complex(int x, int y)// Definition of parameterized constructor
{
    a = x;
    b = y;
}
void complex ::display()
{
    cout << "The value of a and b is " << a << ", " << b << endl;
}

int main()
{
    // Implicit call
    complex c1(2, 4);
    c1.display();
    
    // Explicit call
    complex c2 = complex(1, 1);
    c2.display();
    
    return 0;
}