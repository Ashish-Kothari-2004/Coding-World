// Q.45 WAP to display the total size occupied by the union.
#include <stdio.h>

union MyUnion {
    int integer;
    float floatingPoint;
    char character;
};

int main() {
    union MyUnion myUnion;

    size_t unionSize = sizeof(myUnion);

    printf("The size of the union is: %d bytes\n", unionSize);

    return 0;
}
