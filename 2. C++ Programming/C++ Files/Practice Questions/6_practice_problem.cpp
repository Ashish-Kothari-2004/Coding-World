// Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter(circumference) and area.

#include <iostream>
using namespace std;
int main()
{
    int radius, area, perimeter;
    cout << "Enter the value of a radius " << endl;
    cin >> radius;
    area = 3.14 * radius * radius;
    perimeter = 2 * 3.14 * radius;
    cout << "The area of a circle is " << area << endl
         << "The perimeter or circumference of a circle is " << perimeter << " meter square" << endl;

    return 0;
}