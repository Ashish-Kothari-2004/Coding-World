// Q. Create a power function using C++.
#include <iostream>
using namespace std;
double power(double b, int e)
{
    double p = 1;
    for (int i = 1; i <= e; i++)
    {
        p = p * b;
    }
    return p;
}
int main()
{
    double base;
    int exponent;
    cout << "Enter the value of base ";
    cin >> base;
    cout << "Enter the value of exponent ";
    cin >> exponent;
    cout << "The value of " << base << "^" << exponent << " is " << power(base, exponent) << endl;


    return 0;
}
