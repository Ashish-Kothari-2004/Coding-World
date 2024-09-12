// Q20. Write a C program that implements Bubble Sort on a set of n Numbers.
#include <stdio.h>

void bubble_sort(int *array, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);

    bubble_sort(array, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
