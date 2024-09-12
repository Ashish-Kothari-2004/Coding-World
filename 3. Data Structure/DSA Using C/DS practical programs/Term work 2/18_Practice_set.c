// Q18.Write a C program that implements Linear Search on a set of n Numbers.
#include <stdio.h>
int linear_search(int *array, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 20;

    int index = linear_search(array, n, x);
    if (index == -1)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Element found at index %d.\n", index);
    }

    return 0;
}
