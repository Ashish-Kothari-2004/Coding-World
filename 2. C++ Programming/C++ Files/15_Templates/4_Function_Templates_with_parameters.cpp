#include <iostream>
using namespace std;

template <class T1, class T2>
T1 funcAvg(T1 a, T2 b)
{
    T1 avg = (a + b) / 2;
    return avg;
}
template <class U>
void funcSwap(U &a, U &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    cout << "The average of the number is: " << funcAvg<float, float>(23, 1) << endl;
    cout << "The average of the number is: " << funcAvg<float, int>(2.23, 3) << endl;
    int x = 23, y = 32;
    char a = 'A', b = 'K';
    funcSwap<int>(x, y);
    cout << "After swapping the value of x and y is : " << x << endl
         << y << endl;
    funcSwap<char>(a, b);
    cout << "After swapping the value of a and b is : " << a << endl
         << b << endl;

    return 0;
}