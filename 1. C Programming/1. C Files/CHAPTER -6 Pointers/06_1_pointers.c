// pointers --> pointer is a variable which stores the address of another variable.
// & --> address of operator 
// * --> value at address operator

// #include <stdio.h>
// int main()
// {
//     int a = 3;
//     int *b = &a;// Here b is a pointer.

//     printf("%u\n", &a);// address of a 
//     printf("%u\n", &b);// address of b 
//     printf("%u\n", *(&b));
//     printf("%u\n", b);// value of b
//     printf("%u\n", *b);// value at address b 
//     printf("%u\n", *(&a));
//     return 0;
// }

// pointre to pointer ---
#include <stdio.h>
int main()
{
    int i = 5;
    int *j = &i;
    int **k = &j;
    printf("%u\n", i);// value of i
    printf("%u\n", *(&i));
    printf("%u\n", &i);// address of i
    printf("%u\n", *(&j));
    printf("%u\n", &j);
    printf("%u\n", *j);// value at address j
    printf("%u\n", &k);// address of k
    printf("%u\n", *(&k));
    printf("%u\n", *k);
    printf("%u\n", **k);
    return 0;
}