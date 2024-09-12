// Deletion -> Deletion refers to removing an existing element from the array and re-organizing all elements of an array.

#include <stdio.h>

void Display(int ar[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

void Deletion(int ar[], int size, int index, int capacity)
{
    if(index > capacity - 1)
    {
        return;
    }
    for (int i = index; i < size - 1; i++)
    {
        ar[i] = ar[i + 1];
    }
}

int main()
{
    int ar[100] = {23, 34, 32, 67, 2};
    int capacity = 100, size = 5, index = 3;
    Display(ar, size);
    Deletion(ar, size, index, capacity);
    size--;
    Display(ar, size);

    return 0;
}