// Accessing elements --

// #include <stdio.h>
// int main()
// {
//     int marks[5];
//     printf("Enter the marks of student 1 : ");
//     scanf("%d", &marks[0]);
//     printf("Enter the marks of student 2 : ");
//     scanf("%d", &marks[1]);
//     printf("Enter the marks of student 3 : ");
//     scanf("%d", &marks[2]);
//     printf("Enter the marks of student 4 : ");
//     scanf("%d", &marks[3]);
//     printf("Enter the marks of student 5 : ");
//     scanf("%d", &marks[4]);

//     printf("The marks of all 5 students is \t %d \t %d \t %d \t %d \t %d \t", marks[0], marks[1],marks[2], marks[3], marks[4]);
//     printf("\n");

//     return 0;
// }

// With the help of loops.

#include <stdio.h>
int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of students %d ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of student %d is : %d\n", i + 1, marks[i]);
     }
    return 0;
}
