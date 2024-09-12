// Selection sort - Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list.

#include <stdio.h>
void SelectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; i < n; i++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (i != min)
        {
            swap(&arr)
        }
        
        
    }
    
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}
int main()
{
    int arr[] = {23, 345, 57, 62412, 8768, 1234, 86, 80, 213, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    SelectionSort(arr, size);
    printArray(arr, size);
    return 0;
}