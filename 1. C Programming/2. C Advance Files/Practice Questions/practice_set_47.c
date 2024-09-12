// Q.47 WAP program to check whether the number is odd or even using bitwise operator.
#include <stdio.h>
void checkOddEven(int num) {
    if (num & 1) {
        printf("%d is an odd number.\n", num);
    } else {
        printf("%d is an even number.\n", num);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkOddEven(number);

    return 0;
}
