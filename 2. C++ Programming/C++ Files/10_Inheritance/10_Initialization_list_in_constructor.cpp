#include <iostream>
using namespace std;
class Test
{
private:
    int a;
    int b;

public:
    Test(int x, int y) : a(x), b(y)
    // Test(int x, int y) : a(x), b(x+y)
    // Test(int x, int y) : a(x), b(3 * y)
    // Test(int x, int y) : a(x), b(a + y)
    // Test(int x, int y) : b(y), a(x + b)// << This will create problem because a is initialize first. a is declared first in private section of class.
    {
        cout << "Constructor is called " << endl;
        cout << "The value of a is " << a << endl
             << "The value of b is " << b << endl;
    }
};

int main()
{
    Test t1(23, 45);

    return 0;}