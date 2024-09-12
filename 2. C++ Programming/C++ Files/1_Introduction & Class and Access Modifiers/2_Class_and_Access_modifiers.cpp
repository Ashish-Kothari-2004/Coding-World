// Class -> A class in C++ is the building block that leads to Object-Oriented programming. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object. For Example: Consider the Class of Cars. There may be many cars with different names and brand but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range etc. So here, Car is the class and wheels, speed limits, mileage are their properties.

// A Class is a user defined data-type which has data members and member functions.Data members are the data variables and member functions are the functions used to manipulate these variables and together these data members and member functions defines the properties and behavior of the objects in a Class. 
// In the above example of class Car, the data member will be speed limit, mileage etc and member functions can be apply brakes, increase speed etc.

// Object -> An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

// Access modifiers or Access specifiers
// 1. public
// 2. private 
// 3. protected 

#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1); // Declaration
    void getdata()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
    }
};

void employee :: setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee ashish;
    // ashish.a = 65;// This will throw error as a is private.
    ashish.d = 23;
    ashish.e = 32;
    ashish.setdata(4, 4, 6);
    ashish.getdata();

    return 0;
}