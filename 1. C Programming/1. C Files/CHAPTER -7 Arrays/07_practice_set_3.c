// Q.Write a program to create an array of 10 integers and store multiplication table of 5 in it.

// #include <stdio.h>
// int main()
// {
//     int mul[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n", mul[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int mul[10];
//     for (int i = 0; i < 10; i++)
//     {
//         mul[i] = 5*(i + 1);
//     }
//     for (int i = 0; i < 10;i++)
//     {
//         printf("5x%d = %d\n", i + 1, mul[i]);
//     }

//     return 0;
// }

// Q.Write a program to create an array of 10 integers and store multiplication table of a numbre in it.With general input provided by the user using scanf.

// #include <stdio.h>
// int main()
// {
//     int mul[10];
//     int n;
//     printf("Enter any number ");
//     scanf("%d", &n);
//     for (int i = 0; i < 10; i++)
//     {
//         mul[i] = n*(i+1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%dx%d = %d\n", n, i+1, mul[i]);
//     }

//     return 0;
// }

// With the help of while loop. 
#include <stdio.h>
int main()
{
    int mul[10];
    int n;
    printf("Enter any number ");
    scanf("%d", &n);
    int i = 0;
    while (i < 10)
    {
        mul[i] = n * (i + 1);
        i++;
    }
    int j = 0;
    while (j < 10)
    {
        printf("%dx%d = %d\n", n, j + 1, mul[j]);
        j++;
    }

    return 0;
}

