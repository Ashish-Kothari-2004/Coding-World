// Program for swaping the private data of two classes

#include <iostream>
using namespace std;
class c2; // Forward declaration
class c1
{
private:
    int a;

public:
    void setData(int n1)
    {
        a = n1;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
    }
    friend void swap(c1 &o1, c2 &o2); // Address of object1 and object2
};

class c2
{
private:
    int b;

public:
    int setData(int n2)
    {
        b = n2;
    }
    void display()
    {
        cout << "The value of b is " << b << endl;
    }
    friend void swap(c1 &o1, c2 &o2); // Address of object1 and object2
};

// Use address of objects
void swap(c1 &o1, c2 &o2)
{
    int temp;
    temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}

int main()
{
    c1 o1;
    c2 o2;
    o1.setData(3);
    o1.display();

    o2.setData(7);
    o2.display();

    swap(o1, o2);
    cout << "After swaping the value of a is ";
    o1.display();
    cout << "After swaping the value of b is ";
    o2.display();
    return 0;
}