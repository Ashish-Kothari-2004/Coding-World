// Q.Write a C++ program to print fibonacci series using loop.
// fibonacci series --> 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233.......
#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1, sum;
    cout << "Enter any number ";
    cin >> n;
    for(int i = 0; i <= n; i++)
    {
        cout << a << " ";
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << endl;
    return 0;
}
