// Q1. Write a program to create structure book, read the value and display the result.
#include <stdio.h>
struct book 
{
    char author_name[10];
    int page;
    float price;
};

int main()
{
    struct book b1;
    printf("Enter author name: ");
    scanf("%s", b1.author_name);
    printf("Enter the number of pages: ");
    scanf("%d", &b1.page);
    printf("Enter the price of the book: ");
    scanf("%f", &b1.price);

    printf("Author name: %s\n", b1.author_name);
    printf("No. of pages: %d\n", b1.page);
    printf("Price: %fRs.\n", b1.price);

    return 0;
}