// 1.Linear Search -> Linear search is a very simple search algorithm. In this type of search, a sequential search is made over all items one by one. Every item is checked and if a match is found then that particular item is returned, otherwise the search continues till the end of the data collection. When data is unsorted, a linear search algorithm is preferred.

// 2.Binary Search -> Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n). For binary search array must be sorted.

// To find the length of an array using given elements --
// datatype Array_Length = sizeof(array_name) / sizeof(array_name[index]);
// Array_Length = No. of element in an array.

#include <stdio.h>
int LinearSearch(int arr[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return i;
    }

    return -1;
}

int BinarySearch(int arr[], int element, int size)
{
    int low = 0;
    int high = size - 1;
    int mid;
    while (high > low)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (element < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }

        return -1;
    }
}
                                                                                                                      
int main()
{
    // Unsorted array for linear search

    // int arr[] = {23, 435, 34, 45, 67, 33, 8, 234, 54, 5454, 4666, 565, 576};
    // int size = sizeof(arr)/sizeof(arr[1]), element = 8;
    // printf("The element %d was found in index %d\n", element, LinearSearch(arr, element, size));

    // Sorted array for Binary Search

    int arr[] = {1, 2, 5, 6, 8, 12};
    int size = sizeof(arr) / sizeof(arr[1]), element = 6;
    printf("The element %d was found in index %d\n", element, LinearSearch(arr, element, size));

    return 0;
}
