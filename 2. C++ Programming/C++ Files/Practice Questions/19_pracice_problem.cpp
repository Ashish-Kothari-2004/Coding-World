// Q.Write a program to print the factorial of a number using loop and recursion.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, f = 1;
//     cout << "Enter any number ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         f = f * i;
//     }
//     cout << "Factorial of a number is " << f << endl; 
//     return 0;
// }

#include <iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout << "Enter any number ";
    cin >> n;
    cout << "Factorial of a number is " << factorial(n) << endl; 
    return 0;
}
int factorial(int n)
{   
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }

}