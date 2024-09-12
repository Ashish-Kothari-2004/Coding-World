// Q.Write a C++ program to find the number entered by the user is palindrom or not.
// palindrome number -->  A palindrome number is a number that is same after reverse.
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, r, m = 0;
    cout << "Enter any number ";
    cin >> n1;
    n2 = n1;
    while (n1 > 0)
    {
        r = n1 % 10;
        m = m * 10 + r;
        n1 = n1 / 10;
    }
    if (m == n2)
    {
        cout << n2 << " is palindrom number" << endl;
    }
    else
    {
        cout << n2 << " is not a palindrom number" << endl;
    }
    return 0;
}
