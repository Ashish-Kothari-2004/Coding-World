// Question for function.
// Q.Write 2 functions - One to print "Hello" & second to print "Good bye".
// #include <stdio.h>
// void printHello();
// void printGoodbye();

// int main()
// {
//     printHello();
//     printGoodbye();
//     printHello();
//     printGoodbye();
//     printHello();
//     printGoodbye();
//     return 0;
// }

// void printHello()
// {
//     printf("Hello\n");
// }
// void printGoodbye()
// {
//     printf("Good bye!\n\n");
// }

// Question for function.
// Q.Write a function that prints Namaste if user is Indian & Bonjour if the user is french.
// #include <stdio.h>
// void indian();
// void french();

// int main()
// {
//     char Nationality;
//     printf("press i for Indian and f for french ");
//     scanf("%c", &Nationality);
//     if (Nationality == 'i')
//     {
//         indian();
//     }
//     else if (Nationality == 'f')
//     {
//         french();
//     }
//     else
//     {
//         printf("Wrong character\n");
//     }

//     return 0;
// }

// void indian()
// {
//     printf("Namaste\n");
// }
// void french()
// {
//     printf("Bonjour\n");
// }

// Question for function.
// Q.Write a function that prints Namaste if user is Indian & Bonjour if the user is french.
// Using indirect call 
#include <stdio.h>
void indian();
void french();

int main()
{
    char Nationality;
    printf("press i for Indian and f for french ");
    scanf("%c", &Nationality);
    if (Nationality == 'i')
    {
        indian();
    }
    else if (Nationality == 'f')
    {
        french();
    }
    
    return 0;
}

void indian()
{
    printf("Namaste\n");
}
void french()
{
    printf("Bonjour\n");
    indian();// for indirectly call
}
