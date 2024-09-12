// Q.44 WAP to swap to number using call by reference in structure.
#include <stdio.h>

struct Numbers {
    int n1;
    int n2;
};

void swapNumbers(struct Numbers *numbers) {
    int temp = numbers->n1;
    numbers->n1 = numbers->n2;
    numbers->n2 = temp;
}

int main() {
    struct Numbers num;

    printf("Enter the first number: ");
    scanf("%d", &num.n1);

    printf("Enter the second number: ");
    scanf("%d", &num.n2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num.n1, num.n2);
    swapNumbers(&num);
    printf("After swapping: num1 = %d, num2 = %d\n", num.n1, num.n2);

    return 0;
}
