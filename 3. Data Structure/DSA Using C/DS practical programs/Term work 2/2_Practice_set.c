// Q2. Wap to merge two array into one array.
#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[])
{
    int i, j, k;

    // Merge elements from arr1 and arr2 into the result array
    for (i = 0; i < size1; i++)
    {
        result[i] = arr1[i];
    }
    for (j = 0; j < size2; j++)
    {
        result[size1 + j] = arr2[j];
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedSize = size1 + size2;
    int merged[mergedSize];

    mergeArrays(arr1, size1, arr2, size2, merged);

    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
