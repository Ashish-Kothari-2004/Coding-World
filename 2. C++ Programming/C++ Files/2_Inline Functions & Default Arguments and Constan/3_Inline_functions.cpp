// Inline functions --> C++ provides an inline functions to reduce the function call overhead. Inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call. This substitution is performed by the C++ compiler at compile time. Inline function may increase efficiency if it is small.

// Remember, inlining is only a request to the compiler, not a command. Compiler can ignore the request for inlining. Compiler may not perform inlining in such circumstances like:

// 1) If a function contains a loop.(for, while, do-while)
// 2) If a function contains static variables.
// 3) If a function is recursive.
// 4) If a function return type is other than void, and the return statement doesn’t exist in function body.
 // 5) If a function contains switch or goto statement.

// Inline function in C++ is an enhancement feature that improves the execution time and speed of the program. The main advantage of inline functions is that you can use them with C++ classes as well.

// Inline functions provide following advantages:
// 1) Function call overhead doesn’t occur.
// 2) It also saves the overhead of push/pop variables on the stack when function is called.
// 3) It also saves overhead of a return call from a function.
// 4) When you inline a function, you may enable compiler to perform context specific optimization on the body of function. Such optimizations are not possible for normal function calls. Other optimizations can be obtained by considering the flows of calling context and the called context.
// 5) Inline function may be useful (if it is small) for embedded systems because inline can yield less code than the function call preamble and return.

// static variable --> A static variable is a variable that is declared using the keyword static. The space for the static variable is allocated only one time and this is used for the entirety of the program.Once this variable is declared, it exists till the program executes. So, the lifetime of a static variable is the lifetime of the program.

#include <iostream>
using namespace std;
int inline product(int n, int m)
{
    // Not recommend to use below line with inline functions
    // static int c = 0;// This will execute only once
    // c = c + 1;// Next time this function is run, the value of c will be retained.
    // return n * m + c;

    return n * m;
}
int main()
{
    int n, m;
    cout << "Enter the value of n and m ";
    cin >> n >> m;
    cout << "The product is " << product(n, m) << endl;
    cout << "The product is " << product(n, m) << endl;
    cout << "The product is " << product(n, m) << endl;
    cout << "The product is " << product(n, m) << endl;
    cout << "The product is " << product(n, m) << endl;
    cout << "The product is " << product(n, m) << endl;
    return 0;
}