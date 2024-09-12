// Q.Write a program to print first 50 natural numbers using recursion.
#include <stdio.h>
void printNnum(int);
int main()
{
    int n = 50;
    printNnum(n);
    return 0;
}
void printNnum(int num)
{
    if (num == 1)
    {
        printf("%d\n", num);
        return;
    }
    printNnum(num - 1);
    printf("%d\n", num);
}

