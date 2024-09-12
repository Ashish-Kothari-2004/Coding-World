// Q21. Write a C program that implements Insertion Sort on a set of n Numbers.
#include <stdio.h>

void insertion_sort(int *array, int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > current)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = current;
    }
}

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);

    insertion_sort(array, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
