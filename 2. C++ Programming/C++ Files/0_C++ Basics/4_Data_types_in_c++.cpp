// Data type --> Data type define the type of data a variable can hold.
// Data type in c++ are categorised in three groups.

// 1.Built-in or primitive or primary. --> int, float, char, bool, etc.
// 3.Derived.--> Array, function, pointer.
// 2.User defined or Abstract data type --> struct, union, enum

// Rules to declare a variables C++ ......
// Variable name in C++ can be range from 1 to 255 character.
// All variable name must begin with a letter of the alphabet or an underscore.
// Variable names are case sensitive.
// No spaces or special characters are allowed.
// You can not use keyword (a reserved word) as a variable name.

#include <iostream>
using namespace std;
int glo = 25;
void sum()
{
    int glo;
    glo = 3;
    cout << glo << endl;
}

int main()
{
    int glo = 4;
    bool Is_true = true;
    bool Is_false = false;
    cout << glo << endl;
    sum();
    cout << Is_true << endl;
    cout << Is_false << endl;
    return 0;
}