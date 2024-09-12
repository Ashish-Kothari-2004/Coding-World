// Q.Write a program to swap two numbers using temprary variable and without using temprary variable.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n1, n2, t;
//     cout << "Enter fists number ";
//     cin >> n1;
//     cout << "Enter second number ";
//     cin >> n2;
//     t = n1;
//     n1 = n2;
//     n2 = t;
//     cout << "After swaping first number is " << n1 << " and second number is " << n2 << endl;
//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter fists number ";
    cin >> n1;
    cout << "Enter second number ";
    cin >> n2;
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    cout << "After swaping first number is " << n1 << " and second number is " << n2 << endl;
    return 0;
}