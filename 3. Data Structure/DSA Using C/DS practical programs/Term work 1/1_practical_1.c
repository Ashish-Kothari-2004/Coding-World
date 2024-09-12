// 1. Write a program to read n numbers in an array and display them in reverse order.
#include <stdio.h>
int reverseArray(int arr[], int size, int start, int end)
{
    while(start < end)
    {
        int t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;
        start++;
        end--;
        
    }
}
void display(int ar[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of the array ");
    scanf("%d", &n);
    int arr[n], start = 0, end = n - 1;
    for (int i = 0; i < n; i++)
    {
        printf("Enter element ");
        scanf("%d", &arr[i]);
    }

    printf("Before Reverse\n");
    display(arr, n);

    reverseArray(arr, n, start, end);
    printf("After Reverse\n");

    display(arr , n);
    printf("\n");
    return 0;
}