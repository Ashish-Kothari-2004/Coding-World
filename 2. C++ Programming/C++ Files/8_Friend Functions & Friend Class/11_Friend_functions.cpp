// Friend Function -> A friend function can be granted special access to private and protected members of a class in C++. They are the non-member functions that can access and manipulate the private and protected members of the class for they are declared as friends.
// 1. A global function -> We can declare any global function as a friend function.
// 2. A member function of another class -> We can also declare a member function of another class as a friend function in C++.

#include <iostream>
using namespace std;
class complex
{
    private:
        int n1;
        int n2;
    public:
        void setData(int a , int b);
        void getData();
        friend complex sumComplex(complex c1, complex c2);// <- It is not a member function of this class, it is just a declaration that it is friend fuction of this class and it can access the private member of this class.
};

void complex :: setData(int a, int b)
{
    n1 = a;
    n2 = b;
}

void complex :: getData()
{
    cout << "The complex number is " << n1 << " + " << n2 << "i" << endl;
}

// Not a member function of any class
complex sumComplex(complex c1, complex c2)
{
    complex c3;
    c3.setData((c1.n1 + c2.n1), (c1.n1 + c1.n2));
    return c3;
}

int main()
{
    complex c1, c2, sum;
    c1.setData(3, 6);
    c1.getData();
    c2.setData(7, 9);
    c2.getData();
    sum = sumComplex(c1, c2);
    sum.getData();

    return 0;
}


// Properties of friend function
// 1. Friend functions are not in the scope of that class, means they are not a member function of that class.
// 2. Since it is not in the scope of the class, it cannot be called from the object of that class. 
// 3. Can be invoked without the help of any object.
// 4. Usually contains the objects as a arguments.
// 5. Can be declared inside public and private section of a class.
