// Constructor -> Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object which is why it is known as constructors. Constructor do not return value, hence they do not have a return type not even void.

// Characteristics of Constructor
// 1. The name of the constructor is same as its class name.
// 2. Constructors are mostly declared in the public section of the class though it can be declared in the private section of the class.
// 3. Constructors do not return values, hence they do not have a return type.
// 4. A constructor gets called automatically when we create the object of the class.
// 5. Constructors can be overloaded.
// 6. Constructor can not be declared virtual.

// Types of constuctor
// 1. Defalut constructor         // Imp.
// 2. Parameterized constructor   // Imp.
// 3. Copy constructor            // Imp.
// 4. Overloaded constructor
// 5. Inline constructor
// 6. Constructor with default value


// 1.Defalut Constructor
#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;
public:
    complex(void); // <- Declaration of constructor as it takes no parameters
    void display(void);
};

complex ::complex(void) // <- Constructor Definition
{
    a = 1;
    b = 2;
}
void complex::display(void)
{
    cout << "The value of a and b is " << a << ", " << b << endl;
}

int main()
{
    complex c1;
    c1.display();

    return 0;
}