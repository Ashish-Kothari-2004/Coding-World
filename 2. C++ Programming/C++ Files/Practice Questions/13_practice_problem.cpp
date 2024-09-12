// Q.Write a C++ progaram to check whether the number entered by the user is perfect or not.
// Perfect number --> perfect number, a positive integer that is equal to the sum of its proper divisors. The smallest perfect number is 6.
#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0;
    cout << "Enter any number ";
    cin >> n;
    for(int i = 1; i < n; i++)
    {
        r = n % i;
        if(r == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == n)
    {
        cout << n << " is perfect number" << endl;
    }
    else
    {
        cout << n << " is not a perfect number" << endl;
    }
    return 0;
}