#include <iostream>
using namespace std;
class y;
class x
{
private:
    int n1;

public:
    void setValue(int value)
    {
        n1 = value;
    }
    friend int add(x o1, y o2);
};

class y
{
private:
    int n1;

public:
    void setValue(int value)
    {
        n1 = value;
    }
    friend int add(x o1, y o2);
};

int add(x o1, y o2)
{
    cout << "The sum of two object is " << o1.n1 + o2.n1 << endl;
}

int main()
{
    x o1;
    y o2;
    o1.setValue(23);
    o2.setValue(45);
    add(o1, o2);
    return 0;
}