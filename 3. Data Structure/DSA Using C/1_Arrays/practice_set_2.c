// Q.Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.
#include <stdio.h>
struct pair
{
    int min;
    int max;
};

struct pair getArray(int arr[], int size)
{
    struct pair p1;
    if (size == 1)
    {
        p1.min = arr[0];
        p1.max = arr[0];
        return p1;
    }
    if (arr[0] < arr[1])
    {
        p1.min = arr[0];
        p1.max = arr[1];
    }
    else
    {
        p1.min = arr[1];
        p1.max = arr[0];
    }
    for (int i = 2; i < size; i++)
    {
        if (arr[i] < p1.min)
        {
            p1.min = arr[i];
        }
        else
        {
            p1.max = arr[i];
        }
    }
    return p1;
}

int main()
{
    int arr[] = {23, 622, 4, 56, 76, 8794, 568762};
    int size = sizeof(arr)/ sizeof(arr[0]);
    struct pair p = getArray(arr, size);
    printf("The value of max element of this array is %d\n", p.max);
    printf("The vlaue of min element of this array is %d\n", p.min);

    return 0;
}