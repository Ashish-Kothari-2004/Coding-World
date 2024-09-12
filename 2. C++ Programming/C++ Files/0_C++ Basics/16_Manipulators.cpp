// Manipulators: Manipulators are helping functions that can modify the input/output stream. It does not mean that we change the value of a variable, it only modifies the I/O stream using insertion (<<) and extraction (>>) operators.

// 1.Manipulators are special functions that can be included in the I/O statement to alter the format parameters of a stream.
// 2.Manipulators are operators that are used to format the data display.
// 3.To access manipulators, the file <iomanip.h> should be included in the program.

// Types of Manipulators There are various types of manipulators:
// 1. endl -> It is defined in iostream. It is used to enter a new line and after entering a new line it flushes (i.e. it forces all the output written on the screen or in the file) the output stream.

// 2. setw

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 2, b = 23, c = 54543;
    cout << "The value of a is " << setw(5) << a << endl
         << "The value of b is " << setw(5) << b << endl
         << "The value of c is " << setw(5) << c << endl;

    return 0;
}