// Q.Write a program in C to find the sum of all elements of the array.
#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, n5, sum = 0;
    int arr[5];
    printf("Enter any five numbers ---------------------------------------------------------\n");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    printf("The sum of five number is %d\n", sum);

    return 0;
}
 
// Q.Create an array of 10 numbers.Verify using pointer arithmetic that (ptr + 2) points to the third element where ptr is a pointer pointing to the first element of the array.

// #include <stdio.h>
// int main()
// {
//     int ar[] = {26, 27, 28, 29, 30, 31, 32, 33, 34, 35};
//     int *p = ar; // --> int *p = &ar[0];

//     printf("The value of ar[0] is %u\n", *p);
//     printf("The address of ar[0] is %u\n", p);

//     *p = *p + 1;
//     printf("The value of ar[1] is %u\n", *p);
//     printf("The address of ar[1] is %u\n", p);
    
//     p = p + 1;
//     printf("The value of ar[2] is %u\n", *p);
//     printf("The address of ar[2] is %u\n", p);
    
//     p = p + 1;
//     printf("The value of ar[3] is %u\n", *p);
//     printf("The address of ar[4] is %u\n", p);
    
//     return 0;
// }

#include <stdio.h>
int main()
{
    int ar[] = {26, 27, 28, 29, 30, 31, 32, 33, 34, 35};
    int *ptr = ar;
    ptr = ptr + 2;
    if (ptr == &ar[2])
    {
        printf("\nThe pointer points to the 3rd element of Array\n\n");
    }
    else
    {
        printf("The pointer not points to the 3rd element of Array\n");
    }
    return 0;
}
