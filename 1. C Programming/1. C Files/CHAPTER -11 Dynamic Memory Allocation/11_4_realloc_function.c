// realloc() function --> Sometimes the dynamically allocated memory is insufficient or more than required.realloc is used to allocate memory of new size using previous pointer and size.
// syntax --> ptr = realloc(ptr, newsize);
// ---------> ptr = realloc(ptr, 3 * sizeof(int));
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for(int i = 0; i < 5; i++)
    {
        printf("Enter %d element ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("You have entered %d\n", ptr[i]);
    }
    // reallocate ptr using realloc 
    ptr = (int *) realloc(ptr , 8 * sizeof(int));
    for(int i = 0; i < 8; i++)
    {
        printf("Enter %d element ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("After realloc function -------------------------------------------\n");
    for(int i = 0; i < 8; i++)
    {
        printf("You have entered %d\n", ptr[i]);
    }
    return 0;
}