// Q19. Write a C program that implements Binary Search on a set of n Numbers.
#include <stdio.h>
int binary_search(int *array, int n, int x)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (array[mid] == x)
        {
            return mid;
        }
        else if (array[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 20;

    int index = binary_search(array, n, x);
    if (index == -1)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Element found at index %d.\n", index);
    }

    return 0;
}
