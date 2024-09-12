// Operators in C++ ..............

// 1.Arithmetic Operators -->

// These operators are used to perform arithmetic or mathematical operations on the operands.eg.+, - , * , /

// Arithmetic Operators can be classified into 2 Types:

// A) Unary Operators: These operators operate or work with a single operand. For example: Increment(++) and Decrement(--) Operators.
// B) Binary Operators: These operators operate or work with two operands. For example: Addition(+), Subtraction(-), etc.

// 2.Relational Operators -->

// These operators are used for the comparison of the values of two operands.
// eg. < , > , <= , >= !=

// 3.Logical Operators -->

// These operators are used to combine two or more conditions or constraints or to complement the evaluation of the original condition in consideration. The result returns a Boolean value, i.e., true or false.eg. &&, || , !

// 4.Bitwise Operators -->

// These operators are used to perform bit-level operations on the operands.
// 1.Bitwise OR --> |
// 2.Bitwise AND --> &
// 3.Bitwise left shift --> <<
// 4.Bitwise right shift --> <<
// 5.Bitwise one's complement --> &
// 6.Bitwise XOR --> ^

// 5.Assignment Operators -->

// These operators are used to assign value to a variable. The left side operand of the assignment operator is a variable and the right side operand of the assignment operator is a value. The value on the right side must be of the same data type as the variable on the left side otherwise the compiler will raise an error.
// eg. = , += -= , *= , /=

// // 6.Ternary or Conditional Operators (?:)-->
// This operator returns the value based on the condition.
// Expression1? Expression2: Expression3

#include <iostream>
using namespace std;
int main()
{
    int a = 8, b = 3;
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a + b is " << a - b << endl;
    cout << "The value of a && b is " << (a && b) << endl;
    cout << "The value of a not is " << !a << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    (a > b) ? "a is greater than b" : "a is less than b";
    return 0;
}