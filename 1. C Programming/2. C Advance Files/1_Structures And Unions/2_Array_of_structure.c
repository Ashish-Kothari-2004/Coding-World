// Array of Structure -> Like other primitive data types, we can create an array of structures.
#include <stdio.h>
struct Point
{
    int x, y;
};

int main()
{
    // Array of structures
    struct Point arr[10];
 
    // Access array members
    arr[0].x = 10;
    arr[0].y = 20;
 
    arr[1].x = 67;
    arr[1].y = 28;
 
    printf("%d %d %d %d\n", arr[0].x, arr[0].y, arr[1].x, arr[1].y);

    return 0;
}