// Q.Write a program to check whether a number is divisible by 97 or not.
#include <stdio.h>
int main ()
{

    int x;
    printf("Enter a number");
    scanf("%d",&x);

    printf("%d\n",x % 97 == 0);
    return 0;
}