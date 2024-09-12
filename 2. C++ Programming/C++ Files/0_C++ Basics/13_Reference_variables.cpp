// Reference variables -> When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference by putting ‘&’ in the declaration. 

#include <iostream>
using namespace std;
int main ()
{
    float x = 34.54;
    // float & y = x;
    float &y = x;// We can also write like this 
    cout << "The value of x is " << x << endl
        << "The value of reference variable y is " << y << endl;

    return 0;
}