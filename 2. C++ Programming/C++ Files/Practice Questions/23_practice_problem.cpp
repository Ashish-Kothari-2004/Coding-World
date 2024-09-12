// Q.Write a program to make a class area with three different functions triangle, rectangle and cirle.

#include <iostream>
using namespace std;
class Area
{
private:
    double base, height, length, breadth, radius; // Data members

public:
    double Triangle(double b, double h); // Member functions
    double Rectangle(double l, double b);
    double Circle(double r);
};

double Area ::Triangle(double b, double h)
{
    base = b;
    height = h;
    return (base * height) / 2;
}

double Area ::Rectangle(double l, double br)
{
    breadth = br;
    length = l;
    return length * breadth;
}

double Area ::Circle(double r)
{
    radius = r;
    return 3.14 * radius * radius;
}

int main()
{
    class Area A1;
    cout << "The Area of a triangle is " << A1.Triangle(5, 4) << endl;
    cout << "The Area of a rectangle is " << A1.Rectangle(6.5, 2) << endl;
    cout << "The Area of circle is " << A1.Circle(9.3) << endl;

    return 0;
}
