#include <stdio.h>

int main()
{
    // 1.increment operator
    // ++i (pre increment ) ---> increase, then use
    // i++ (post increment ) ---> use, then increase

    int i = 5;
    // printf("%d\n", ++i);
    // printf("%d\n", ++i);
    // printf("%d\n", ++i);

    // printf("%d\n", i++);
    // printf("%d\n", i++);
    // printf("%d\n", i++);

    // 2.decrement operator
    // --i (pre decrement) ---> decrease, then use
    // i-- (post decrement) --->  use, then decrease

    // printf("%d\n",--i);
    // printf("%d\n",--i);
    // printf("%d\n",--i);

    printf("%d\n", i--);
    printf("%d\n", i--);
    printf("%d\n", i--);
    return 0;
}