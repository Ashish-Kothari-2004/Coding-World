// Q.Write a program to print the fibonacci sequence using recursion.
#include <iostream>
using namespace std;
int fibonacci(int n);
int main()
{
    int n;
    cout << "Enter any number ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}