// Q.Take value of length and breath of a rectangle from user as float. Find its area and print it on screen after type casting it to int.
#include <iostream>
using namespace std;
int main()
{
    float length , breath, area;
    cout << "Enter the value of length and breath " << endl;
    cin >> length >> breath;
    area = length * breath ;
    area = int(area);
    cout << "The area of the rectangle is " << area << " square unit" << endl;
    return 0;
}