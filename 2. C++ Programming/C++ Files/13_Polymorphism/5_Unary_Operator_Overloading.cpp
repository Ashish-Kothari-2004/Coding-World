// Unary operator overloading using class function 
/* 
#include <iostream>
using namespace std;
class A
{
private:
    int a, b;
public:
    A(int x , int y) 
    {
        a = x;
        b = y;
    }
    void operator-()
    {
        a = -a;
        b = -b;
    }

    void display()
    {
        cout << "The value of a is " << a << endl
            << "The value of b is " << b << endl;
    }

};

int main()
{
    A obj(23, 12);
    obj.display();
    -obj;
    obj.display();

    return 0;
}
 */



/* 
#include <iostream>
using namespace std;
class A
{
private:
    int a, b;
public:
    A(int x , int y) 
    {
        a = x;
        b = y;
    }
    void operator++()
    {
        a++;
        b++;
    }

    void display()
    {
        cout << "The value of a is " << a << endl
            << "The value of b is " << b << endl;
    }

};

int main()
{
    A obj(23, 12);
    obj.display();
    ++obj;
    obj.display();

    return 0;
}
 */

// Unary operator overloading using friend function 
 
#include <iostream>
using namespace std;
class A
{
private:
    int a, b;
public:
    A(int x , int y) 
    {
        a = x;
        b = y;
    }
    friend void operator--(A &obj1);
    void display()
    {
        cout << "The value of a is " << a << endl
            << "The value of b is " << b << endl;
    }

};

void operator--(A &obj1)
{
    obj1.a--;
    obj1.b--;
}

int main()
{
    A obj(23, 12);
    obj.display();
    --obj;// Used as unary operator for object not for operator-- function definition 
    obj.display();

    return 0;
}


