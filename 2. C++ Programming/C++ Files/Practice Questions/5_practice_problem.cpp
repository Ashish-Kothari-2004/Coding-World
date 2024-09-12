// Q.Length and breadth of a rectangle are 5 and 7 respectively. Write a program to calculate the area and perimeter of the rectangle.

#include <iostream>
using namespace std;
int main()
{
    int length = 5, breath = 7, area, perimeter;
    area = length * breath;
    perimeter = 2 * (length + breath);
    cout << "The area of the rectangle is " <<  area << endl
        << "The perimeter of the rectangle " << perimeter << endl;

    return 0;
}
