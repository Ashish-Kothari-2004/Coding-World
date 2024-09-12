// Q14. Write a menu driven C program to implement of doubly linked list with following operations:
// • Create the list
// • Insert a node in the beginning, in the end, at given position.
// • Delete a node in the beginning, in the end, at given position.
// • Search a node
// • Display the list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *deleteAtBeginning(struct node *head)
{
    if (head == NULL)
    {
        printf("The list is already empty.\n");
        return head;
    }
    struct node *temp = head;
    head = (head)->next;
    if (head != NULL)
    {
        (head)->prev = NULL;
    }
    free(temp);
    printf("Node at the beginning deleted successfully.\n");
    return head;
}
// Function to delete a node at a given position in the doubly linked list
struct node *deleteAtPosition(struct node *head)
{
    int position;
    printf("Enter position\n");
    scanf("%d", &position);
    if (head == NULL)
    {
        printf("The list is already empty.\n");
        return head;
    }
    if (position <= 0)
    {
        printf("Invalid position.\n");
        return head;
    }
    if (position == 1)
    {
        head = deleteAtBeginning(head);
        return head;
    }
    struct node *current = head;
    int currentPosition = 1;
    while (current != NULL && currentPosition < position)
    {
        current = current->next;
        currentPosition++;
    }
    if (current == NULL)
    {
        printf("Invalid position.\n");
        return head;
    }
    current->prev->next = current->next;
    if (current->next != NULL)
    {
        current->next->prev = current->prev;
    }
    free(current);
    printf("Node at position %d deleted successfully.\n", position);
    return head;
}

// Function to delete the node at the end of the doubly linked list
struct node *deleteAtEnd(struct node *head)
{
    if (head == NULL)
    {
        printf("The list is already empty.\n");
        return head;
    }
    if ((head)->next == NULL)
    {
        free(head);
        head = NULL;
        printf("Node at the end deleted successfully.\n");
        return head;
    }
    struct node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->prev->next = NULL;
    free(current);
    printf("Node at the end deleted successfully.\n");
    return head;
}

void searchNode(struct node *head)
{
    int key;
    printf("Enter the value of key: ");
    scanf("%d", &key);
    if (head == NULL)
    {
        return;
    }

    struct node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            printf("Node found\n"); // Node found
            return;
        }
        temp = temp->next;
    }
    printf("Node not found\n"); // Node not found
}

void display(struct node *head)
{
    struct node *current = head;
    printf("Doubly linked list: ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    int choice;
    struct node *head = NULL;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for creating node: ");
    scanf("%d", &new_node->data);
    new_node->prev = head;
    new_node->next = NULL;
    struct node *temp = new_node;
    head = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for creating node: ");
    scanf("%d", &new_node->data);
    new_node->prev = temp;
    new_node->next = NULL;
    temp->next = new_node;
    temp = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for creating node: ");
    scanf("%d", &new_node->data);
    new_node->prev = temp;
    new_node->next = NULL;
    temp->next = new_node;
    temp = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for creating node: ");
    scanf("%d", &new_node->data);
    new_node->prev = temp;
    new_node->next = NULL;
    temp->next = new_node;
    temp = new_node;

    while (choice != 6)
    {
        printf("\nEnter you choice:\n1.Deletion at starting\n2.Deletion at any valid position\n3. Deletion at the end\n4.Search a node\n5.Display liked-list\n6. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = deleteAtBeginning(head);
            break;
        case 2:
            head = deleteAtPosition(head);
            break;
        case 3:
            head = deleteAtEnd(head);
            break;

        case 4:
            searchNode(head);
            break;
        case 5:
            display(head);
        case 6:
            break;
        }
    }

    return 0;
}