// 4. Write a program to find common elements in array.
#include <stdio.h>
int main()
{
    int size1, size2;
    int arr1[] = {1, 23, 3, 45, 65, 34, 2, 7};
    int arr2[] = {1, 2, 3, 4, 5, 34};
    size1 = sizeof(arr1)/ sizeof(arr1[0]);
    size2 = sizeof(arr2)/ sizeof(arr2[0]);
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                printf("%d is common\n", arr1[i]);
            }
        }   
    }
    
    return 0;
}