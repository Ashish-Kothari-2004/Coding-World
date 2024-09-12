// Q.Given an array (or string), the task is to reverse the array/string.
#include <stdio.h>
void ReverseArray(int arr[], int start, int end)
{
    while(start < end)
    {
        int tem = arr[end];
        arr[end] = arr[start];
        arr[start] = tem;
        start++;
        end--;
    }
}
void Display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {23, 54, 45, 5, 56, 87, 27, 34};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int start = 0, end = size - 1;
    ReverseArray(arr, start, end);
    Display(arr, size);
    return 0;
}