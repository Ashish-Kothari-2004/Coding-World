// Deletion after a given position in singly linked list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void deleteAfter(struct node *AfterPosition)
{
    struct node *q;
    q = AfterPosition->next;
    AfterPosition->next = q->next;
    free(q);
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

    struct node *fourth_node = (struct node *)malloc(sizeof(struct node));
    fourth_node->data = 40;
    fourth_node->next = NULL;
    temp->next = fourth_node;
    temp = fourth_node;

    printf("The data in first node is %d\n", head->data);
    printf("The data in second node is %d\n", head->next->data);
    printf("The data in third node is %d\n", head->next->next->data);
    printf("The data in third node is %d\n\n", head->next->next->next->data);

    deleteAfter(second_node);
    printf("After deletion the elements in node are:\n");
    printf("The data in first node is %d\n", head->data);
    printf("The data in second node is %d\n", head->next->data);
    printf("The data in third node is %d\n", head->next->next->data);

    return 0;
}

