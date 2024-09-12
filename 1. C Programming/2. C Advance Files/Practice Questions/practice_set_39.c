// Q.39 WAP for reading a text file “data.txt” and store all even numbers in “even.txt” and all odd number in “odd.txt”.
#include <stdio.h>
int main() {
    FILE *dataFile = fopen("data.txt", "r");
    FILE *evenFile = fopen("even.txt", "w");
    FILE *oddFile = fopen("odd.txt", "w");

    if (dataFile == NULL) {
        printf("Unable to open data.txt for reading.\n");
        return 1;
    }

    if (evenFile == NULL) {
        printf("Unable to open even.txt for writing.\n");
        return 1;
    }

    if (oddFile == NULL) {
        printf("Unable to open odd.txt for writing.\n");
        return 1;
    }

    int number;
    while (fscanf(dataFile, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            fprintf(evenFile, "%d\n", number);
        } else {
            fprintf(oddFile, "%d\n", number);
        }
    }

    fclose(dataFile);
    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers separated and saved into even.txt and odd.txt.\n");

    return 0;
}
