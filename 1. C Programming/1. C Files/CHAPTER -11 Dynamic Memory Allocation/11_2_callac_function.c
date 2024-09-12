// calloc () function --> calloc stand for continuous allocation.It initializes each memory block with a default of 0.
// If the space is not sufficient, memory allocation fails and a NULL pointer returned.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));// All values will be initialize with 0
    for(int i = 0; i < 5; i++)
    {
        printf("The value of first element is %d\n", ptr[i]);
    }
    return 0;
}