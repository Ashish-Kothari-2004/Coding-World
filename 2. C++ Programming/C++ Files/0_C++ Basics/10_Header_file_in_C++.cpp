// There are two types of header file in C++

// 1.System header files --> It comes with the compiler.
// eg.#include <iostream>

// 2.User defined header files --> It is written by the programmer.
// eg.#include "ashish" // This will produce an error if ashish.h is not present in the current directory.

#include <iostream>
#include "ashish.h"
using namespace std;
int main()
{
    cout<<"Hello i am learning C++"<<endl;
    return 0;
}