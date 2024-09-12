// 8. Write a program to interchange largest and smallest element in an array.
#include <stdio.h>
int main()
{
    int arr[100], n, i, maxIndex = 0, minIndex = 0, temp;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }

        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }

    temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    printf("The array after interchanging the largest and smallest elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
