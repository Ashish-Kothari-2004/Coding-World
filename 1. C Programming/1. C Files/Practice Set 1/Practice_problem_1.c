// Q.A farmer wants to fence with three rounds of wire in his rectangular plot of length 20
// meters and breadth 15 metres. Calculate the total wire to be purchased. If the cost per
// meter of wire is 400 rupees, also calculate the total cost of fencing.
// perimeter of a rectangle --> p = 2 x (length + beadth)

#include <stdio.h>
int main()
{
    int length = 20, breadth = 15;
    int p = 2 * (length + breadth);
    printf("The total length of wire is %d metre\n", 3 * p);
    printf("The total cost of fencing is %d rupees\n", (3 * p) * 400);

    return 0;
}