// 2.Selection Logic simply involves a number of conditions or parameters which decides one out of several written modules. The structures which use these type of logic are known as Conditional Structures.
// These structures can be of three types:

// We have three types of conditional statements in C++:
// 1.if statements
// 2.if else-if ladder
// 3.switch case statements

// *** Program for if else statement ***
// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout << "Enter your age ";
//     cin >> age;
//     if (age >= 18)
//     {
//         cout << "You can drive " << endl;
//     }
//     else
//     {
//         cout << "You can not drive " << endl;
//     }
//     return 0;
// }

// ***Program for if else-if ladder***
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter any number between 1 to 7 ";
//     cin >> n;
//     if (n == 1)
//     {
//         cout << "Today is Monday" << endl;
//     }
//     else if (n ==2)
//     {
//         cout << "Today is Tuesday" << endl;
//     }
//     else if (n == 3)
//     {
//         cout << "Today is Wednesday" << endl;
//     }
//     else if (n == 4)
//     {
//         cout << "Today is Thursday" << endl;
//     }
//     else if (n == 5)
//     {
//         cout << "Today is Friday" << endl;
//     }
//     else if (n == 6)
//     {
//         cout << "Today is Saturday" << endl;
//     }
//     else if (n == 7)
//     {
//         cout << "Today is Sunday" << endl;
//     }
//     else
//     {
//         cout << "You have entered wrong number" << endl;
//     }
//     return 0;
// }

// *** Program for switch case statement ***
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter any character ('m', 'T', 'w', 't', 'f', 'S', 's'): ";
    cin >> c;
    switch (c)
    {
    case 'm':
        cout << "Monday" << endl;
        break;
    case 'T':
        cout << "Tuesday" << endl;
        break;
    case 'w':
        cout << "Wednesday" << endl;
        break;
    case 't':
        cout << "Thursday" << endl;
        break;
    case 'f':
        cout << "Friday" << endl;
        break;
    case 'S':
        cout << "Saturday" << endl;
        break;
    case 's':
        cout << "Sunday" << endl;
        break;
    default:
        cout << "You have entered wrong character" << endl;
    }
    return 0;
}