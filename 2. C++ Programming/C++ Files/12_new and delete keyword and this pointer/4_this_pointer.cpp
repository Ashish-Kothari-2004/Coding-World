// this pointer -> To understand ‘this’ pointer, it is important to know how objects look at functions and data members of a class.

// 1. Each object gets its own copy of the data member.
// 2. All-access the same function definition as present in the code segment.
// Meaning each object gets its own copy of data members and all objects share a single copy of member functions. The compiler supplies an implicit pointer along with the names of the functions as ‘this’. The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls and is available as a local variable within the body of all nonstatic functions. ‘this’ pointer is not available in static member functions as static member functions can be called without any object

// The "this" pointer is usually used when there are members in the function with same name as those of the class members.

// Use of this pointer:
// 1. When local variable’s name is same as member’s name.
// 2. To return reference to the calling object.

// this -> 'this' is a keyword which is a pointer which points to the object which invokes the member function.

#include <iostream>
using namespace std;
class A
{
    int a;
public:
    A setData(int a)
    {
        // a = a;
        this->a = a;
        return *this;
    }
    void getData()
    {
        cout << "The value of the a is " << a << endl;
    }
};

int main()
{
    A a;
    // a.setData(23);
    // a.getData();
    a.setData(3).getData(); // << Here setData return the object which invokes the member function which is a.
    
    return 0;
}