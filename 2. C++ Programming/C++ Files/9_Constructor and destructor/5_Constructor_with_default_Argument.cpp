#include <iostream>
using namespace std;
class simple
{
private:
    int x, y;
public:
    simple(int a, int b = 0)// <- Constructor with default Argument
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "The value of data is " << x << "and " << y << endl;
    }
};

int main()
{
    simple s1(23, 56), s2(3);
    s1.display();
    s2.display();
    
    return 0;
}