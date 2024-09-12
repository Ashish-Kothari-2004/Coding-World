// Points to 0th element of the arr.
//     p = arr;
     
//     Points to the whole array arr.
//     ptr = &arr;

#include <stdio.h>
int main()
{
    int arr[5];
    int *p = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element ");
        scanf("%d", arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Element is %d\n", *p);
        p++;
    }
    
    return 0;
}