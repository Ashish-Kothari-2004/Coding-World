#include <stdio.h>
int main()
{
    /* Operator precedence */

    /* priority         operator */
    //   1                 !

    //   2             / , % , *

    //   3               + , -

    //   4          > , >= , < , <=

    //   5              == , !=

    //   6                 &&

    //   7                 ||

    //   8                 =

    // Arithmatic Operator precedence in the absence of parenthesis ()
    // 1st priority --> % , / , *
    // 2st priority --> + , -
    // 3st priority --> =

    // Operators Associativity
    // 1st step check parenthesis (),
    // 2nd step check preority,
    // 3rd step check who is on the left side ,
    // Operetion of same precedence, follow left to right associavity
    return 0;
}