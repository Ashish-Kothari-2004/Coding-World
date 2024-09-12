// Q.Write a C++ program to find the number entered by the user is stronge or not.
// strong number --> Strong number is a special number whose sum of the factorial of digits is equal to the original number.
// e.g --> 145

#include <iostream>
using namespace std;
int main()
{
    int n, m, r, f, sum = 0;
    cout << "Enter any number ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        f = 1;
        for (int i = 1; i <= r; i++)
        {
            f = f * i;
        }
        sum = sum + f;
        n = n / 10;
    }
    if (m == sum)
    {
        cout << m << " is a strong number " << endl;
    }
    else
    {
        cout << m << " is not a strong number " << endl;
    }

    return 0;
}