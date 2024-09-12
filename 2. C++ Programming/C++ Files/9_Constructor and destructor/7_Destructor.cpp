// Destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed.
// Destructor is also a special member function like constructor. Destructor destroys the class objects created by constructor. 
// Destructor has the same name as their class name preceded by a tilde (~) symbol.
// It is not possible to define more than one destructor. 
// The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be overloaded.
// Destructor neither requires any argument nor returns any value.
// It is automatically called when object goes out of scope. 
// Destructor release memory space occupied by the objects created by constructor.
// In destructor, objects are destroyed in the reverse of an object creation.

#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object" << count << endl;
    }
    ~num()
    {
        cout << "This is the time when destructor is called for object" << count << endl;
        count--;
    }

    
};
int main()
{
    cout << "We are inside our main function " << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects n2 and n2" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    
    cout << "Back to main function" << endl;

    return 0;
}