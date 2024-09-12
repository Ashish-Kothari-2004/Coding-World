// Q.Create an array dynamically capable of storing 5 integers.Now use realloc so that it can now store 100 integer.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d number ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d entered number is %d\n", i + 1, ptr[i]);
    }

    // After reallocation --
    printf("After reallocation -----------------\n");
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d number ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d entered number is %d\n", i + 1, ptr[i]);
    }

    return 0;
}