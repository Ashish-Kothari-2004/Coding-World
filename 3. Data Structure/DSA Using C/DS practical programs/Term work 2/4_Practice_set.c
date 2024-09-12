// Q4. wap to shift elements of an array in the right direction by one position.

#include <stdio.h>

void shiftRight(int arr[], int size)
{
    int lastElement = arr[size - 1];

    // Shift elements to the right by one position
    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = lastElement;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    shiftRight(arr, size);

    printf("Array after shifting right: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
