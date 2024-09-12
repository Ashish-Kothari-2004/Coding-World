// #include <stdio.h>

// // void printArray(int arr[], int n)
// // {
// //     for (int i = 0; i < 6; i++)
// //     {
// //         printf("The value of element of %d is %d\n", i + 1, arr[i]);
// //     }
// // }

// void printArray(int *p, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         // printf("The value of element %d is %d\n", i + 1, arr[i]);
//         printf("The value of element of %d is %d\n", i + 1, *(p + i));
//     }
// }

// int main()
// {
//     int arr[] = {1, 3, 34, 23, 45, 54};
//     printArray(arr , 6);
//     // printArray(arr , 7);

//     return 0;
// }


// passing 2d array in function -----------
#include <stdio.h>

void printArray(int arr[][3], int n)
{
    for (int i = 0; i < 6; i++)
    {
        printf("The value of element of %d is %d\n", i + 1, arr[i]);
    }
}

// void printArray(int *p, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         // printf("The value of element %d is %d\n", i + 1, arr[i]);
//         printf("The value of element of %d is %d\n", i + 1, *(p + i));
//     }
// }

int main()
{
    int arr[] = {1, 3, 34, 23, 45, 54};
    printArray(arr, 6);
    // printArray(arr , 7);

    return 0;
}

