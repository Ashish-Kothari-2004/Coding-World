// Bit - A bit (binary digit) is the smallest unit of data that a computer can process and store.
/* 
   Operator	    Meaning of operator
    &	        Bitwise AND operator
    |	        Bitwise OR operator
    ^   	    Bitwise exclusive OR operator
    ~       	One's complement operator (unary operator)
    <<	        Left shift operator
    >>	        Right shift operator 
*/

/* 
// Bitwise AND operator
#include <stdio.h>
int main()
{
    int a = 8, b = 10;// 8 in binary --> 1000, 10 in binary --> 1010
    printf("%d\n", a & b);// 1000 & 1010 = 1000
    return 0;
}
*/


/* 
// Bitwise OR operator
#include <stdio.h>
int main()
{
    int a = 8, b = 10;// 8 in binary --> 1000, 10 in binary --> 1010
    printf("%d\n", a | b);// 1000 | 1010 = 1010
    return 0;
}
*/


/* 
// Bitwise XOR operator
#include <stdio.h>
int main()
{
    int a = 8, b = 10;// 8 in binary --> 1000, 10 in binary --> 1010
    printf("%d\n", a ^ b);// 1000 ^ 1010 = 0010 = 2

    return 0;
}
 */


/* 
// Bitwise One's complement operator
#include <stdio.h>
int main()
{
    int a = 8;// 8 in binary --> 00001000, after 1's complement = 11110111 = -128+64+32+16+0+4+2+1= -9
    printf("%d\n", ~a);

    return 0;
}
*/

/* 
// Bitwise Left shift 
#include <stdio.h>
int main()
{
    int a = 8;
    printf("%d\n", a<<2);// 8 in binary = 1000, after shifting the bit left side by 2 = 100000 =32

    return 0;
}
*/


// Bitwise right shift 
#include <stdio.h>
int main()
{
    int a = 8;
    printf("%d\n", a>>3);// 8 in binary = 1000, after shifting the bit right side by 3 = 0001 = 1


    return 0;
}










