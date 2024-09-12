#include <stdio.h>
int main()
{
    /* Types of operators */

    // 1.Arithematic operators -->  + , - , / , * , %
    // 2.Relational operators --> == , < , <= , > , >= , !=
    // 3.Logical operators --> && (AND) , || (OR) , ! (NOT)
    // 4.Bitwise operators --> In the next chapters 
    // 5.Assignment operators -->  = , += , -= , *= , /= , %=
    // 6.Ternary operators --> In the next chapters

    // 1.Arithmatic operators --------
    // Arithmatic Operator precedence in the absence of parenthesis ()
    // 1st priority --> % , / , *
    // 2st priority --> + , -
    // 3st priority --> =
    // int a = 2, b = 3, c = 1, d = 6;
    // printf("The value of a * b / d is %d\n", a * b / d);
    // printf("The value of a + b / c is %d\n", a + b / c);// left to right associavity
    // printf("The value of a * b - c / d is %d\n", a * b - c / d);// c / d --> 1/6 = 0 (integer)
    // printf("The value of a - b * c / d is %d\n", a - b * c / d);// b * c / d --> 0.5 = 0 (integer) 

    // 2.Relational operator ----------

    // printf("%d\n", 5 == 5); // In terminal 0 means false statement and 1 means true statement
    // printf("%d\n", 3 < 5);  // == --> equal to
    // printf("%d\n", 3 > 5);
    // printf("%d\n", 3 <= 5);
    // printf("%d\n", 3 >= 5);
    // printf("%d\n", 3 >= 3);
    // printf("%d\n", 3 != 5); // !=  --> not  equal to
    // printf("%d\n", 3 != 3);

    // 3.Logical operators ----------

    // printf("%d\n", 3 > 2 && 5 > 4); // check true and false statement
    // printf("%d\n", 3 > 2 && 5 < 4);
    // printf("%d\n", 3 < 2 && 5 > 4);
    // printf("%d\n", 3 < 2 && 5 < 4);
    // printf("%d\n", 3 > 2 || 5 > 4);
    // printf("%d\n", 3 > 2 || 5 < 4);
    // printf("%d\n", 3 < 2 || 5 > 4);
    // printf("%d\n", 3 < 2 || 5 < 4);
    // printf("%d\n", !(3 > 2));
    // printf("%d\n", !(3 < 2));
    // printf("%d\n", !(3 < 2 && 5 > 4));
    // printf("%d\n", !(3 < 2 && 5 < 4));
    // printf("%d\n", !(3 < 2 || 5 > 4));
    // printf("%d\n", !(3 < 2 || 5 < 4));

    // 5.Assignment operators (shorthand operators) ---------------
    int a = 2, b = 3;
    // a += b;        // a = a + b;
    // a -= b;        // a = a - b;
    // a /= b;        // a = a / b;
    // a *= b;        // a = a * b;
    // a %= b;           // a = a % b;
    // printf("%d\n", a);

    return 0;
}