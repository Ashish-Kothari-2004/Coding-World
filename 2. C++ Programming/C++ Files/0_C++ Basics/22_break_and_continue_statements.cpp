// break statement: The break statement terminates the smallest enclosing loop (i. e., while, do-while, for or switch statement)

// continue statement: The continue statement skips the rest of the loop statement and causes the next iteration of the loop to take place.

// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i = 1; i <= 10; i++)
//     {
//         cout << i << endl;
//         if(i == 5)
//         {
//             break;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}