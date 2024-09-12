#include <iostream>
using namespace std;
template <class T1 = float, class T2 = float, class T3 = float>
class Ashish
{
private:
    T1 a;
    T2 b;
    T3 c;

public:
    Ashish(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << a << endl
             << b << endl
             << c << endl;
    }
};

int main()
{
    Ashish <int , int, float> obj1(1, 2, 2.3);
    obj1.display();

    Ashish <> obj2(23.2, 32.2, 12.2);// For default parameter
    obj2.display();
    
    return 0;
}