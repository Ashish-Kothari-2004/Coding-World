// Q.Write a program containing a function which reverses the array passed to it.
// Important Question ---
#include <stdio.h>
int reverse(int *arr, int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        printf("The element of index %d is %d\n", i, arr[i]);
    }
    
    return 0;
}
