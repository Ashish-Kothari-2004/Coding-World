#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;
public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int z)
    {
        a = z;
        b = 0;
    }
    complex()
    {
        a = 1;
        b = 1;
    }
    void display()
    {
        cout << "The value complex number " << a << " + " << b << "i"<< endl;
    }
};

int main()
{
    // complex c1();// Throw error as default constructor
    complex c1;// It is a right way to initialize default constructor
    complex c2(3, 4);
    complex c3(5);
    c1.display();
    c2.display();
    c3.display();
    
    return 0;   
}

