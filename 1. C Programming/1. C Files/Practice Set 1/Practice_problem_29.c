//Write a program in C to make such a pattern like a pyramid with numbers increased by 1.
//    1 
//   2 3 
//  4 5 6 
// 7 8 9 10 
#include <stdio.h>
int main()
{
    int n = 1;
    for(int l = 1; l <= 4; l++)
    {
        for(int s = l; s < 4; s++)
        {
            printf(" ");
        }
        for(int i = 1; i <= l; i++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}