// Q3. Wap to insert and delete item in an array. After deletion, shift the elements in the array.

#include <stdio.h>

void insertElement(int arr[], int size, int position, int element)
{
    if (position < 0 || position > size)
    {
        printf("Invalid position for insertion.\n");
        return;
    }

    // Shift elements to the right from the given position
    for (int i = size - 1; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    printf("Element %d inserted successfully at position %d.\n", element, position);
}

void deleteElement(int arr[], int size, int position)
{
    if (position < 0 || position >= size)
    {
        printf("Invalid position for deletion.\n");
        return;
    }

    // Shift elements to the left from the given position
    for (int i = position; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("Element at position %d deleted successfully.\n", position);
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertElement(arr, size, 2, 10); // Insert 10 at position 2

    printf("Array after insertion: ");
    for (int i = 0; i < size + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteElement(arr, size + 1, 3); // Delete element at position 3

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
