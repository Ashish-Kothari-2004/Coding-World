// Q.Write a C program to print the following parttern.Take input from the user using scnaf.
//              A
//            A B
//          A B C
//        A B C D
//      A B C D E
//    A B C D E F
//  A B C D E F G
#include <stdio.h>
int main()
{
    int n, sp, l;
    char ch = 'A';
    printf("Enter any number between 1 to 26 ");
    scanf("%d", &n);

    for (l = 1; l <= n; l++)
    {
        ch = 'A';
        for (sp = l; sp < n; sp++)
        {
            printf("  ");
        }
        for (int i = 1; i <= l; i++)
        {
            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }
    return 0;
}