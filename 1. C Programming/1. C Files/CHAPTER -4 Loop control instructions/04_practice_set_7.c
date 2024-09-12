// Q.Print all the odd numbers from 5 to 50.
//  Using for loop

// #include <stdio.h>
// int main()
// {
//     for (int i = 0; i <= 50; i++)
//     {
//         if (i % 2 == 0)
//         {
//             continue;
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }

// Using While Loop
#include <stdio.h>
int main()
{
    int i = 4;
    while (i < 50)
    {
        i++;
        if (i % 2 == 0) // After printf function, i++ creates an infinite loop in some question.
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
