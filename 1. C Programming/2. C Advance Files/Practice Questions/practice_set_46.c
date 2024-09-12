// Q.46 WAP progarm to find the largest of three no using array of poiter.
#include <stdio.h>
int findLargest(int *numbers[]) {
    int largest = *numbers[0];

    for (int i = 1; i < 3; i++) {
        if (*numbers[i] > largest) {
            largest = *numbers[i];
        }
    }

    return largest;
}

int main() {
    int num1, num2, num3;
    int *numbers[3];

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    numbers[0] = &num1;
    numbers[1] = &num2;
    numbers[2] = &num3;

    int largest = findLargest(numbers);

    printf("The largest number is: %d\n", largest);

    return 0;
}
