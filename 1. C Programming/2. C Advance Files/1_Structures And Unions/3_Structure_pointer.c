// What is a structure pointer?
// Like primitive types, we can have a pointer to a structure. If we have a pointer to structure, members are accessed using arrow ( -> ) operator.

#include <stdio.h>
struct str
{
    int x, y;
};
int main()
{
    struct str s1 = {1, 2};

    // p2 is a pointer to structure p1
    struct str *p = &s1;

    // Accessing structure members using structure pointer
    printf("%d %d\n", (*p).x, (*p).y);
    printf("%d %d\n", p->x, p->y); // Using Arrow Operator(->)
    return 0;
}