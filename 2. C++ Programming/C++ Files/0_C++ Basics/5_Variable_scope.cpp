// Variable scope --> Scope of a variable is the region in the code where the existence of the variable is valid.

// Based on sope we have two types of variable............

// 1.Local variable --> Local varible are declared inside the braces of any function and can be accessed only from there.

// 2.Global variable --> Global variable are declared outside any function and can be accessed from anywhere.

// NOTE --> Local and Global variable can have same meaning in c++.But first priority will give to the local variable.

#include <iostream>
using namespace std;
int global_variable = 1;

int main()
{
    int local_variable = 0;

    return 0;
}
void fun()
{
    cout<<"The value of Global variable is "<< global_variable;
    // cout<<"The value of local variable is "<< local_variable;// It will give erro because local variable is not declared in this function.
}