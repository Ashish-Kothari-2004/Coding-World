// Q. Create a function which takes two parameter and display the distance between them.
#include <iostream>
#include <cmath>
class point
{
private:
    int x, y;

public:
    point(int a, int b); // constructor declaration
    friend int distance(point obj1, point obj2);
};

point::point(int a, int b) // Parameterized constructor
{
    x = a;
    y = b;
}
int distance(point obj1, point obj2)
{
    int d = sqrt(pow((obj2.x - obj1.x), 2) + pow((obj2.y - obj1.y), 2));
    return d;
}
using namespace std;
int main()
{
    point o1(3, 4), o2(7, 8);
    cout << "The distance between two points is " << distance(o1, o2) << endl;

    return 0;
}