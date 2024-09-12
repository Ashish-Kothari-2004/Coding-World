#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insertAtPosition(struct node *head, int position, int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if (position == 1)
    { // Insert at the beginning
        newNode->next = head;
        return newNode;
    }

    struct node *temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    { // Invalid position
        printf("Invalid position\n");
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

struct node *insertAtEnd(struct node *head, int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    { // Empty list, insert as first node
        return newNode;
    }

    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct node *head = NULL;

    head = insertAtPosition(head, 1, 10); // Insert at position 1
    display(head);

    head = insertAtPosition(head, 2, 20); // Insert at position 2
    display(head);

    head = insertAtEnd(head, 30); // Insert at the end
    display(head);

    return 0;
}
