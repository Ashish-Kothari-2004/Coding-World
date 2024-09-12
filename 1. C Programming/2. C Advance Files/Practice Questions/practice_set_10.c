// 10. Write a program to find mean of n numbers using arrays.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array ");
    scanf("%d", &n);
    int arr[n], sum = 0, mean = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter number ");
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    mean = sum / n;
    printf("Value of mean is %d\n", mean);

    return 0;
}