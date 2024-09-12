/*
Bubble Sort - Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

Advantages of Bubble Sort:
1. Bubble sort is easy to understand and implement.
2. It does not require any additional memory space.
3. It is a stable sorting algorithm, meaning that elements with the same key value maintain their relative order in the sorted output.

Disadvantages of Bubble Sort:
1. Bubble sort has a time complexity of O(N2) which makes it very slow for large data sets.
2. Bubble sort is a comparison-based sorting algorithm, which means that it requires a comparison operator to determine the relative order of elements in the input data set. It can limit the efficiency of the algorithm in certain cases.

Time and space complexity of Bubble sort.
Time complexity: O(n^2)
Space complexity: O(1)

*/

#include <stdio.h>
void BubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j]> arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
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
    int arr[] = {2, 546, 12, 12, 456, 112, 76, 87, 354, 324, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
    printf("After bubble sort\n");
    BubbleSort(arr, size);
    printArray(arr, size);
    return 0;
}