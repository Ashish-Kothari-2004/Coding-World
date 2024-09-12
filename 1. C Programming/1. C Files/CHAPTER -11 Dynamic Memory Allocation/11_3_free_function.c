// free () function --> We can use free function to deallocate the memory.The memory allocated using malloc/calloc is not deallocated automatically.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;
    printf("How many number do you want to enter ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("Enter %d number ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("You have entered %d\n", ptr[i]);
    }

    free(ptr);
    ptr = (int *)calloc(2, sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", ptr[i]);
    }
    
    return 0;
}