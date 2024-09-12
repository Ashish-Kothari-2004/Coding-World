// Q24. Write a C program that implements Quick Sort on a set of n Numbers.
#include <stdio.h>

int partition(int *array, int low, int high)
{
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    int temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;

    return i + 1;
}

void quick_sort(int *array, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(array, low, high);
        quick_sort(array, low, pivot - 1);
        quick_sort(array, pivot + 1, high);
    }
}

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);

    quick_sort(array, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
