// What is Structures ?
// A structure is a keyword that creates user-defined data types in C/C++. A structure creates a data type that can be used to group items of possibly different types into a single type. In C++, the struct keyword is optional before in declaration of a structure variable. In C, it is mandatory. A structure variable can either be declared with structure declaration or as a separate declaration like basic types.

// Declared with structure declaration--
// sturct student
// { 
//      char name[];
//      int StudentID;
// }s1;

// Separate declaration like basic types--
// // sturct student
// { 
//      char name[];
//      int StudentID;
// };
// int main()
// {
//      struct student s1;
// }

// Structure members can be initialized using curly braces ‘{}’. For example, the following is a valid initialization. For example -
// struct Point
// {
//    int x, y;
// };
// int main()
// {
//    // A valid initialization. member x gets value 0 and y
//    // The order of declaration is followed.
//    struct Point p1 = {0, 1};
// }

// Structure members cannot be initialized with declaration. The reason for below error is simple, when a datatype is declared, no memory is allocated for it. Memory is allocated only when variables are created.
// struct Point
// {
//    int x = 0;  // COMPILER ERROR:  cannot initialize members here
//    int y = 0;  // COMPILER ERROR:  cannot initialize members here
// }

// Limitations of C Structures
// 1.The C structure does not allow the struct data type to be treated like built-in data types:
// 2.No Data Hiding: C Structures do not permit data hiding. Structure members can be accessed by any function, anywhere in the scope of the Structure.
// 3.Functions inside Structure: C structures do not permit functions inside Structure.
// 4.Static Members: C Structures cannot have static members inside their body.
// 5.Access Modifiers: C Programming language does not support access modifiers. So they cannot be used in C Structures. In c++ these modifiers are Public, Private and Protected.
// 6.Construction creation in Structure: Structures in C cannot have a constructor inside Structures.

// Structure members are accessed using dot (.) operator.
// Invalid Code ------
// #include <stdio.h>
// struct number
// {
//     float x;
// };
// int main()
// {
//     struct number n1, n2, n3;
//     n1.x = 6;
//     n2.x = 3;
//     n3 = n1 + n2;
//     printf("%d\n", n3.x);
//     return 0;
// }

// Valid Code ------
#include <stdio.h>
struct number
{
    float x;
};
int main()
{
    struct number n1, n2, n3;
    n1.x = 6;
    n2.x = 3;
    n3.x = n1.x + n2.x;
    printf("%f\n", n3.x);

    return 0;
}
