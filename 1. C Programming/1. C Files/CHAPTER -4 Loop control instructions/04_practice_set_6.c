// Q.Print all the Odd number from 5 to 15.
// Using for loop

// #include <stdio.h>
// int main()
// {
//     for (int i = 5; i <= 15; i++)
//     {
//         if (i % 2 == 0)
//         {
//             continue; // skip
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }


// Q.Print all numbers from 1 to 10 except for 6.
// Using for Loop

// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         if (i == 6)
//         {
//             continue;
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }


// Using while Loop
// Important question 

#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 10)
    {
        i++;// After printf, i++ creates an infinite loop in some question.
        if (i == 6)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
