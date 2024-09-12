// Literals: The values assigned to each constant variables are referred to as the literals. Generally, both terms, constants and literals are used interchangeably. For eg, “const int = 5;“, is a constant expression and the value 5 is referred to as constant integer literal.

// Constants: Constants are like a variable except that once defined, their value never changes during the program's execution.

#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    cout << "The value of a is " << a << endl;
    a = 8;
    cout << "The value of a is " << a << endl;
    
    const int pi = 3.14;
    cout << "The value of pi is " << pi << endl;
    // pi =  34.54;// It will give error because pi is a costant and it's value cannot be changed.
    cout << "The value of pi is " << pi << endl;

    return 0;
}