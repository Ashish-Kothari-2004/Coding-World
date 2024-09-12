/* Data types in java........
A. Primitive data types.
1. int
2. char
3. float
4. double
5. short
6. long
7. boolean
8. byte

B. Non-primitive data types.(Derived)
Non-primitive data types are called reference types because they refer to objects.
1. Class
2. Object
3. String
4. Array
5. Interface

Literals - A constant value which can be assigned to a variable is called as a literal.
eg. 214 - integer literal
    23.2F - floating point literal
    34.2 - double literal(default type of decimal)
    'A' - character literal

   In Java, local variables (variables declared inside a method) must be initialized before they are used.
   In Java, instance variables (member variables of a class) are automatically assigned default values.
   For instance variables, the default value for int is indeed 0. However, local variables,
   which are variables declared inside a method or a block, do not receive default values automatically.
   They must be explicitly initialized by the programmer before they are used.
    
*/

public class _01_2_Data_types_and_variables
{
    public static void main(String[] args)
    {
        int a = 32;
        System.out.println("Value of Literal: " + a);
    }
}