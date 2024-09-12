#include <iostream>
using namespace std;
class complex; // <- Forward declaration
class calculator
{
public:
    int sumRealComplex(complex o1, complex o2);
};

class complex
{
private:
    int a;
    int b;

public:
    void setData(int n1, int n2);
    void getData();
    friend int calculator ::sumRealComplex(complex o1, complex o2);// <- Declaration of friend function 
};

// Definition of a friend function of another class.
int calculator ::sumRealComplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}

void complex ::setData(int n1, int n2)
{
    a = n1;
    b = n2;
}

void complex ::getData()
{
    cout << "The complex number is " << a << " + " << b << "i" << endl;
}

main()
{
    complex o1, o2;
    calculator o3; // You may not declare two objects with the same name in the same scope.
    o1.setData(2, 3);
    o1.getData();
    o2.setData(5, 4);
    o2.getData();
    cout << "The sum of real part is " << o3.sumRealComplex(o1, o2) << endl;

    return 0;
}