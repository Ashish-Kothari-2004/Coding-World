// Function --> A function is simply a “chunk” of code that you can use over and over again, rather than writing it out multiple times. Functions enable programmers to break down or decompose a problem into smaller chunks, each of which performs a particular task.

// Types of Functions -----
// 1.Standard Library functions --> Library functions are also called “builtin Functions“. These functions are a part of a compiler package that is already defined and consists of a special function with special and different meanings. Builtin Function gives us an edge as we can directly use them without defining them whereas in the user-defined function we have to declare and define a function before using them. 

// // 2.User-defined funtions --> User Defined functions are user/customer-defined blocks of code specially customized to reduce the complexity of big programs. They are also commonly known as “tailor-made functions” which are built only to satisfy the condition in which the user is facing issues meanwhile reducing the complexity of the whole program.

// Categories of function -------

// Depending on whether arguments are present or not and whether a value is returned or not, functions are categorized into −

// 1.Functions without arguments and without return values

// 2.Functions without arguments and with return values

// 3.Functions with arguments and without return values

// 4.Functions with arguments and with return values


// 1.Function prototype --> A function prototype is simply the declaration of a function that specifies function's name, parameters and return type. It doesn't contain function body. A function prototype gives information to the compiler that the function may later be used in the program.

// 2.Function definition --> A function definition is the actual function. The definition contains the code that will be executed. The first line of a function definition, called the function header, should be identical to the function prototype, with the exception of the semicolon.

// Function call --> Calling or invoking the function locates the function in the memory, furnishing it with arguments and causing it to execute. When a function is called then the control passed to the function where it is actually defined. The actually statements are executed and control passed again to the calling program.


// Argument --> An argument is referred to the values that are passed within a function when the function is called. These values are generally the source of the function that require the arguments during the process of execution. These values are assigned to the variables in the definition of the function that is called. The type of the values passed in the function is the same as that of the variables defined in the function definition. These are also called Actual arguments or Actual Parameters.

// Parameter --> The parameter is referred to as the variables that are defined during a function declaration or definition. These variables are used to receive the arguments that are passed during a function call. These parameters within the function prototype are used during the execution of the function for which it is defined. These are also called Formal arguments or Formal Parameters.

#include <iostream>
using namespace std;
// int sum(int num1, int num2);// <-- Function prototype
// (num1, num2) is parameter or formal parameter.
int sum(int, int);
// It is not mandatory to write parameter's name.
// void greeting(void);// It is not madatory to write void as a parameter.
void greeting();
void greeting();
int main()
{
    int a, b;
    cout << "Enter the value of a ";
    cin >> a;
    cout << "Enter the value of b ";
    cin >> b;
    cout << "The sum of a and b is " << sum(a, b) << endl;// <-- Function call
    greeting();
    return 0;
}
// Here (num1, num2) is argument and actual parameter.
int sum(int num1, int num2)// <-- Fuction definition 
{
    int c;
    c = num1 + num2;
    return c;
}

void greeting ()
{
    cout << "Hi, I am Ashish Kothari" << endl;
}