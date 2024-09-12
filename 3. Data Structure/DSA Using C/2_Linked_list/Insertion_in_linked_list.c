// Insertion after a given position in singly linked list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insertAfter(int d, struct node *AfterPosition)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = d;
    new_node->next = AfterPosition->next;
    AfterPosition->next = new_node;
}
int main()
{
    struct node *head;
    struct node *first_node = (struct node *)malloc(sizeof(struct node));
    first_node->data = 10;
    first_node->next = NULL;
    head = first_node;
    struct node *temp;
    temp = first_node;

    struct node *second_node = (struct node *)malloc(sizeof(struct node));
    second_node->data = 20;
    second_node->next = NULL;
    temp->next = second_node;
    temp = second_node;

    struct node *third_node = (struct node *)malloc(sizeof(struct node));
    third_node->data = 30;
    third_node->next = NULL;
    temp->next = third_node;
    temp = third_node;

    printf("The data in first node is %d\n", head->data);
    printf("The data in second node is %d\n", head->next->data);
    printf("The data in third node is %d\n\n", head->next->next->data);

    int d;
    printf("Enter element to be inserted in node: ");
    scanf("%d", &d);

    insertAfter(d, second_node);
    printf("After insertion the elements are:\n");
    printf("The data in first node is %d\n", head->data);
    printf("The data in second node is %d\n", head->next->data);
    printf("The data in third node is %d\n", head->next->next->data);
    printf("The data in fourth node is %d\n", head->next->next->next->data);

    return 0;
}

