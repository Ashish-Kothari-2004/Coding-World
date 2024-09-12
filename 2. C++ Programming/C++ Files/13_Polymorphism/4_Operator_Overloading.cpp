/* 
Operator Overloading: Operator overloading is a compile-time polymorphism. It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.

Operators that can be overloaded
1. Unary operator overloading 
a. Using class function 
b. Using friend function 

2. Binary operators overloading 
a. Using class function 
b. Using friend function 

Scope resolution operator ::
Member selection operator  .       
Member selection through  *
Conditional operator :?
Sizeof operator  sizeof()

*/
// C++ program to demonstrate Operator Overloading or Compile-Time Polymorphism or late binding.
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with between two Complex objects
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << endl; }
};

// Driver code
int main()
{
    Complex c1(10, 5), c2(2, 4);

    // An example call to "operator+"
    Complex c3 = c1 + c2;

    c3.print();
}
