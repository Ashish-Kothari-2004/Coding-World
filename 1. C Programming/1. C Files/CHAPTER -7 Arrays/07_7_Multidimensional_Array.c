// An array can be 2 dimension / 3 dimension / n dimensions.
// An 2d array can defined as --
// int arr[3][2] = {{1, 4}, {7, 9}, {11, 22}};
// We can access the elements of this array as arr[0][0], arr[0][1], & so on....

// #include <stdio.h>
// int main()
// {
//     // int arr[3][2] = {1, 4, 7, 9, 11, 12};
//     int arr[3][2] = {{1, 4}, {7, 9}, {11, 12}};
//     printf("The vlaue of arr[0][0] is %d\n", arr[0][0]);
//     printf("The vlaue of arr[0][1] is %d\n", arr[0][1]);
//     printf("The vlaue of arr[1][0] is %d\n", arr[1][0]);
//     printf("The vlaue of arr[1][1] is %d\n", arr[1][1]);
//     printf("The vlaue of arr[2][0] is %d\n", arr[2][0]);
//     printf("The vlaue of arr[2][1] is %d\n", arr[2][1]);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int student = 2;
    int subject = 5;

    int marks[2][5] = {57, 76, 76, 89, 78, 87, 65, 67, 98, 90};
    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < subject; j++)
        {
            printf("The marks of student %d in subject %d : %d\n", i + 1, j + 1, marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}