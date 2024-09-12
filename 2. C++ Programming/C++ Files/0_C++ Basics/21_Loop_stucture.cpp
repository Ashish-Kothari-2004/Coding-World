// 3.Loop structure --> The Iteration logic employs a loop which involves a repeat statement followed by a module known as the body of a loop.

// We have three types of Loops in C++:
// 1.for Loop
// 2.while Loop
// 3.do While Loop

// for loop in C++
// Syntax:
// for(initialization; condition; updation)
// {
//      statements in C++;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << i << endl;
//     }
//     return 0;
// }

// while loop in C++
// syntax:
// initialization;
// while(condition)
// {
//      statements in C++;
//      updation;
// }
//

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter any number ";
//     cin >> n;
//     int i = 1;
//     while(i <= 10)
//     {
//         cout << n * i << endl;
//         i++;
//     }
//     return 0;
// }

// do while loop in C++
// syntax:
// initialization;
// do
// {
//      statements in C++;
//      updation;
// }while(condition);
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number ";
    cin >> n;
    int i = 1;
    do
    {
        cout << i * n << endl;
        i++;
    } while (i <= 10);

        return 0;
}