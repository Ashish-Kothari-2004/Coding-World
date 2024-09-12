// Recursion --> When function is called within the same function, it is known as recursion in C++. The function which calls the same function, is known as recursive function. A function that calls itself, and doesn't perform any task after function call, is known as tail recursion.

// The process in which a function calls itself is known as recursion and the corresponding function is called the recursive function. The popular example to understand the recursion is factorial function.

// 6! = 6 * 5 * 4 * 3 * 2 * 1 
// n! = n * (n - 1)
// 0! = 1 By definition 
// 1! = 1 By definition 

// #include <iostream>
// using namespace std;
// int factorial(int n);

// int main()
// {
//     int n;
//     cout << "Enter any number ";
//     cin >> n;
//     cout << "Factorial of a number is " << factorial(n) << endl;           
//     return 0;
// }
// int factorial(int n)
// {
//     if(n == 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }


// nth term of fibonacci series 
// fibonacci series 1 1 2 3 5 8 13 21................
// first term is 1 
// second term is 1 
// third term  is 2 and so on

#include <iostream>
using namespace std;
int fibonacci(int n);

int main()
{
    int n;
    cout << "Enter any number ";
    cin >> n;
    cout << "The nth term of fibonacci series is " << fibonacci(n) << endl;
    return 0;
}

int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    return fibonacci (n - 1) + fibonacci(n - 2);
}
