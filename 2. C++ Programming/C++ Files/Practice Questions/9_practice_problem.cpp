// Q.Write a program to calculate the sum of first and last digit of a number entered by the user.

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, r;
    cout << "Enter any number ";
    cin >> n;
    sum = n % 10;
    while(n > 0)
    {
        r = n % 10;
        n = n / 10;
    }
    sum = sum + r;
    cout << "The sum of first and last digit is " << sum << endl;
    return 0;
}