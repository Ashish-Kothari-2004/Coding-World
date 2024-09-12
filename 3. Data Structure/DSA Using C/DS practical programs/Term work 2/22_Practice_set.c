// Q22. Write a C program that implements Selection Sort on a set of n Numbers.
#include <stdio.h>

void selection_sort(int *array, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }

        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);

    selection_sort(array, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
