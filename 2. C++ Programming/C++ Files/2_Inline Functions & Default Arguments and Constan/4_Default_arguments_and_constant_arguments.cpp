// Default arguments --> A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn't provide a value for the argument.

// Constant arguments --> A constant argument is the one whose modification cannot take place by the function. Furthermore, in order to make an argument constant to a function, the use of a keyword const can take place like- int sum (const int a, const int b).


#include <iostream>
using namespace std;
float rate_of_interest(int m, float r = 2.0)// Here r is a default argument it will execute if no second argument is passed.
// Note that all the default arguments must be in the right side.
{
    return m * r;
}

float func1(float const pi)
{
    // pi = 4;// It will give error pi is a constant argument we cannot change its value
    return pi;
}

int main()
{
    int m;
    float r, pi = 3.14;

    // cout << "Enter the amout of money ";
    // cin >> m;
    // cout << "Enter the interest rate if you are VIP ";
    // cin >> r;
    // cout << "If you have " << m << " Rs you will get "<< rate_of_interest(m) << " Rs after one year" << endl;

    // cout << "If you are VIP and you have " << m << " Rs you will get " << rate_of_interest(m, r) << " Rs after one year";

    func1(pi);
    cout << "The value of pi is " << pi << endl;

    return 0;
}