// Q2. Wriete a progaram to enter 2 points and calculate the distance between them.
#include <stdio.h>
#include <math.h>
struct points
{
    int a;
    int b;
};

int main()
{
    struct points p1, p2;
    float distance;
    printf("Enter the coordinates of point 1 (x1, y1): ");
    scanf("%d%d", &p1.a, &p1.b);
    printf("Enter the coordinates of point 2 (x2, y2): ");
    scanf("%d%d", &p2.a, &p2.b);
    distance = sqrt(pow(p2.a - p1.a, 2) + pow(p2.b - p1.b, 2));
    printf("Distance between points is: %f\n", distance);
    return 0;
}