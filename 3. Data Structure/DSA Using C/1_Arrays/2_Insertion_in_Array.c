// Insertion -> Insert operation is to insert one or more data elements into an array. Based on the requirement, a new element can be added at the beginning, end, or any given index of array.

#include <stdio.h>
// Code for Traversal
void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Insertion(int arr[], int size, int capacity, int index, int element)
{
    if(size > capacity)
    {
        return;
    }
    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
}

// Code for Insertion 
int main()
{
    int arr[100] = {12, 3, 40, 5, 16};
    int size = 5, element = 89, index = 2;
    display(arr, size);
    Insertion(arr, size, 100, index, element);
    size++;
    display(arr, size);

    return 0;
}



