// call by value --> Sending the value of arguments
#include <stdio.h>
void sum(int, int);
int main()
{
    int a = 2, b = 3;
    sum(a, b);
    printf("%d\n", a + b);
    return 0;
}
void sum(int x, int y)
{
    x = 7 , y = 9;
    printf("%d\n", (x + y));
}

// call by reference --> Sending the address of arguments
#include <stdio.h>
void wrong_swap(int x, int y);
void swap(int *x, int *y);

int main()
{
    int a = 3, b = 5;
    printf("\nThe vlaue of a and b before wrong_swap is %d and %d", a, b);
    wrong_swap(a, b);// will not work due to call by value
    printf("\nThe vlaue of a and b after wrong_swap is %d and %d\n\n", a, b);

    printf("\nThe vlaue of a and b before swap is %d and %d", a, b);
    swap(&a, &b);// will work due to call by reference
    printf("\nThe vlaue of a and b after swap is %d and %d\n\n", a, b);

    return 0;
}
void wrong_swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}