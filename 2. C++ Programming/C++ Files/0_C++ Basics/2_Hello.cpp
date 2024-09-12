// #include --> (Preprocessor directive) #include is a way of including a standard or user-defined file in the program and is mostly written at the beginning of any C/C++ program. This directive is read by the preprocessor and orders it to insert the content of a user-defined or system header file into the following program.

// <iostream> --> C++ comes with libraries that provide us with many ways for performing input and output. In C++ input and output are performed in the form of a sequence of bytes or more commonly known as streams.To perform any input and output operations in C++, we need to use iostream header files. Without an <iostream> header file, we cannot take input from the user or print any output.

// Input Stream --> If the direction of flow of bytes is from the device(for example, Keyboard) to the main memory then this process is called input.
// cin --> cin is an object of the input stream and is used to take input from input streams like files, console, etc.

// Output Stream --> If the direction of flow of bytes is opposite, i.e. from main memory to device( display screen ) then this process is called output.
// cout --> cout is an object of the output stream that is used to show output. Basically, cin is an input statement while cout is an output statement.

// namespace --> namespace provide the space where we can define or declare identifier i.e. variable,  method, classes. Using namespace, you can define the space or context in which identifiers are defined i.e. variable, method, classes. In essence, a namespace defines a scope. 'using' is a keyword used to use namespace and std is a short form of standard namespace.

// Insertion operator(<<).
// Extraction operator(>>).

#include <iostream>
using namespace std;
int main()
{
    cout<<"Hello World\n";
    return 0;
}
