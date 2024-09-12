// Question for break statement 
//Q. Keep taking number as input form the user until user enters a number which is multiple of 7.

#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a number ");
        scanf("%d", &n);
        printf("%d\n", n);
        if(n % 7 == 0)
        {
        break;
        }
    } while (1);//1 --> always true
    printf("Entered number is multiple of seven\n");
    return 0;
}