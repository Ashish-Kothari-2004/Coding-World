// Q. Write a code to make a class  Calculator with different function as first three functions as add next two functions as multiplication one is for Subtraction and last for division.
#include <iostream>
using namespace std;
class calculator
{
public:
    double add(int n1, int n2);
    double add(int n1, int n2, int n3);
    double add(int n1, int n2, int n3, int n4);
    double multiply(int n1, int n2);
    double multiply(int n1, int n2, int n3);
    double subtract(int n1, int n2);
};

double calculator ::add(int n1, int n2)
{
    return n1 + n2;
}

double calculator ::add(int n1, int n2, int n3)
{

    return n1 + n2 + n3;
}

double calculator ::add(int n1, int n2, int n3, int n4)
{

    return n1 + n2 + n3 + n4;
}

double calculator ::multiply(int n1, int n2)
{
    return n1 * n2;
}

double calculator ::multiply(int n1, int n2, int n3)
{
    return n1 * n2 * n3;
}

double calculator ::subtract(int n1, int n2)
{
    return n1 - n2;
}
int main()
{
    calculator calc;
    // perform addition
    cout << "Addition: " << calc.add(2, 3) << endl;
    cout << "Addition: " << calc.add(4, 5, 5) << endl;
    cout << "Addition: " << calc.add(4, 5, 8, 1) << endl;

    // perform multiplication
    cout << "Multiplication: " << calc.multiply(4, 5) << endl;
    cout << "Multiplication: " << calc.multiply(5, 7, 3) << endl;

    // perform subtraction
    cout << "Subtraction: " << calc.subtract(9, 5) << endl;

    return 0;
}
