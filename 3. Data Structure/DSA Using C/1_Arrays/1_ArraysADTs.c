/*
Array - An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).

Operations on array
1.Traversal
2.Insertion
3.Deletion
4.Searching
5.Sorting
Array ADTs -> Abstract Data Type(ADT) is a data type, where only behavior is defined but not implementation.

*/

#include <stdio.h>
#include <stdlib.h>
struct MyArray
{
    int total_size;
    int used_size;
    int *p;
};

void CreateArray(struct MyArray *a, int tSize, int uSize)
{
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).p = (int *) malloc(sizeof(int) * tSize);

    // Using arrow operator
    a->total_size = tSize;
    a->used_size = uSize;
    a->p = (int *)malloc(sizeof(int) * tSize);
}

void setVal(struct MyArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter the value of %dst element ", i + 1);
        scanf("%d", &(a->p)[i]);
    }
}

void show(struct MyArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->p)[i]);
    }
}

int main()
{
    struct MyArray marks;
    CreateArray(&marks, 10, 5);
    setVal(&marks);
    show(&marks);

    return 0;
}