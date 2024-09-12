// Q.Write a C++ program to find the number entered by the user is armstrong or not.
// Armstrong number --> An armstrong number is a number which equal to the sum of the cubes of its individual digits.
// e.g --> 371 
#include <iostream>
using namespace std;
int main()
{
    int n, m, r, sum = 0;
    cout << "Enter any number ";
    cin >> n;
    m = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    if(sum == m)
    {
        cout << m << " is a Armstrong number" << endl;
    }
    else 
    {
        cout << m << " is not a Armstrong number" << endl;
    }
    return 0;   
}