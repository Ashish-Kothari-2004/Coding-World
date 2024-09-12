// Q.Write a progarm to print the nth term of fibonacci series.
#include <iostream>
using namespace std;
int fibonacci(int n);
int main()
{
    int n;
    cout << "Enter any number ";
    cin >> n;
    cout << n << "th term of fibonacci series is " << fibonacci(n) << endl;
    return 0;
}
int fibonacci(int n)
{
    if(n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
