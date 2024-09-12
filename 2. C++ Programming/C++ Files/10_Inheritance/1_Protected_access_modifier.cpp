// Protected: The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class. The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well. 
// Note: This access through inheritance can alter the access modifier of the elements of base class in derived class depending on the mode of Inheritance.

#include <iostream>
using namespace std;
class Base
{
    protected:
        int a;// Protected data members is inheritable
    public:
        int b;

};
class derived : Base  // By defalt visibility mode is private 
{
    public:
        void setdata(int x, int y)
        {
            a = x;
            b = y;
        }   
        void display()
        {
            cout << a << endl;
            cout << b << endl;
        }

};

int main()
{
    derived d1;
    d1.setdata(23, 54);
    d1.display();
    return 0;
}