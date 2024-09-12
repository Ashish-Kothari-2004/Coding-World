// Q.Write a C++ program to check whether the number entered by the user in prime or not.
#include <iostream>
using namespace std;
int main()
{
    int n, r, c = 0;
    cout << "Enter any number ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        r = n % i;
        if (r == 0)
        {
            c++;
        }
    }
    if (n == 0)
    {
        cout << "Not a consonant number and" << endl;
    }
    if (c == 2)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not a prime Number" << endl;
    }
    return 0;
}