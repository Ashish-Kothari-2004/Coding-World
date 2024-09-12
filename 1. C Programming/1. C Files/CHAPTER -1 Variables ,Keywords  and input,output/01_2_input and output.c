// When you use scanf() to read a character using the %c format specifier, it reads the next character from the input stream, including any whitespace characters (such as spaces, tabs, or newlines). If there is a newline character (\n) left in the input buffer (which can happen if you have previously used scanf() to read a value and pressed the Enter key), then the %c format specifier will read the newline character as well. To avoid this issue, you can add a space before %c in the format string.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a\n"); // printf--> output and  scanf--> input
    scanf("%d", &a);                   // & For address
                                       
    printf("Enter the value of b\n");
    scanf("%d", &b); //  Important --> Don't use \n in scanf function

    printf("Sum of a and b is %d \n", a + b);

    return 0;
}
 