// Q5. wap to find three largest element in an array of size N.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array ");
    scanf("%d", &n);
    int arr[n], l;
    for (int i = 0; i < n; i++)
    {
        printf("Enter element ");
        scanf("%d", &arr[i]);
    }
    l = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > l)
        {
            l = arr[i];
        }
    }
    printf("%d is a largest number\n", l);

    return 0;
}