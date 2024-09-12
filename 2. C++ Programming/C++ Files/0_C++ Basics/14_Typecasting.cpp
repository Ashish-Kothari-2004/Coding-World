#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    float b = 45.33;
    double c = 343.5454564564;
    cout << "The value of a is " << a << endl
        << "The value of b is " << b << endl
        << "The value of c is " << c << endl
        << "After typecasting the value of b is " << (int)b << endl
        << "After typecasting the value of b is " << (int)b << endl
        << "After typecasting the value of c is " << (int)c << "\n"
        << "After typecasting the value of c is " << int(c)<< "\n";
        // we can alse write like this.
    return 0;
}