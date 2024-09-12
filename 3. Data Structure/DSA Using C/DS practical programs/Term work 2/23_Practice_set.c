// Q23. Write a C program that implements Merge Sort on a set of n Numbers.
#include <stdio.h>

void merge(int *array, int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int temp[high - low + 1];

    while (i <= mid && j <= high)
    {
        if (array[i] <= array[j])
        {
            temp[k++] = array[i++];
        }
        else
        {
            temp[k++] = array[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = array[i++];
    }

    while (j <= high)
    {
        temp[k++] = array[j++];
    }

    for (i = low; i <= high; i++)
    {
        array[i] = temp[i];
    }
}

void merge_sort(int *array, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(array, low, mid);
        merge_sort(array, mid + 1, high);
        merge(array, low, mid, high);
    }
}

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);

    merge_sort(array, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
