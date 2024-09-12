// 3. Write a program to find second largest number in an array.
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], largest, second_largest;

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second_largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    printf("The second largest element in the array is: %d\n", second_largest);

    return 0;
}