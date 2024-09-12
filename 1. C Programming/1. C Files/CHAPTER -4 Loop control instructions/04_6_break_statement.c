#include <stdio.h>
int main()
{
    for (int i = 1;i <= 10;i++)
    {
        if(i == 5)
        {
           break;
        }
        printf("%d\n",i);//break statement also takes you out of nested loop.
    }
    printf("End\n");
    return 0;
}
