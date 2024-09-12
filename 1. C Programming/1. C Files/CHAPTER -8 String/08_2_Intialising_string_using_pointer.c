// Declaring a stiring using pointer -----
// char *ptr = "ASHISH";
// This tells the compiler to store the string in memory and assigned address is stored in a char pointer.

// NOTE ------
// 1.Once a string is difined using, char st[] = "ASHISH"; ,it cannot be reinitialized to something else.
// 2.A string defined using pointer can be reinitialized.
// char *ptr = "ASHISH";
// ptr = "KOTHARI";

#include <stdio.h>
int main()
{
    // char canNotChange[] = "ASHISH";
    // puts(canNotChange);
    // canNotChange = "KOTHARI";// cannot reinitialized
    // puts(canNotChange);

    char *canChange = "ASHISH";
    puts(canChange);
    canChange = "ASHISH KOTHARI";
    puts(canChange);

    return 0;
}