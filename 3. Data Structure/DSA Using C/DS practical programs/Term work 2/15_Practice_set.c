// Q15. Write a menu driven C program to implement of circular linked list with following operations:
// • Create the list
// • Insert a node in the beginning, in the end, at given position
// • Delete a node in the beginning, in the end, at given position
// • Search a node
// • Display the list
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertAtBeginning(struct Node *head)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    int data;
    if (head == NULL)
    {
        printf("Enter data: ");
        scanf("%d", &data);
        newNode->data = data;
        head = newNode;
        newNode->next = head;
        return head;
    }
    else
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = head;
        struct Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        head = newNode;
        return head;
    }
    printf("Node with data %d inserted at the beginning.\n", data);
}

struct Node *insertAtEnd(struct Node *head)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    if (head == NULL)
    {
        newNode->data = data;
        head = newNode;
        newNode->next = head;
        return head;
    }
    else
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        struct Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        return head;
    }
    printf("Node with data %d inserted at the end.\n", data);
}

struct Node *insertAtPosition(struct Node *head)
{
    int position, data;
    if (head == NULL)
    {
        printf("The list is empty. Inserting at the beginning instead.\n");
        head = insertAtBeginning(head);
        return head;
    }
    printf("Enter data: ");
    scanf("%d", &data);
    printf("Enter position: ");
    scanf("%d", &position);
    struct Node *current = head;
    int currentPosition = 1;
    while (current->next != head && currentPosition < position - 1)
    {
        current = current->next;
        currentPosition++;
    }
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = current->next;
    current->next = newNode;
    printf("Node with data %d inserted at position %d.\n", data, position);
    return head;
}

struct Node *deleteAtBeginning(struct Node *head)
{
    if (head == NULL)
    {
        printf("The list is already empty.\n");
        return head;
    }
    if ((head)->next == head)
    {
        free(head);
        head = NULL;
        return head;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = head->next;
        struct Node *deleteNode = head;
        head = head->next;
        free(deleteNode);
        return head;
    }
    printf("Node at the beginning deleted successfully.\n");
}

struct Node *deleteAtEnd(struct Node *head)
{
    if (head == NULL)
    {
        printf("The list is already empty.\n");
        return head;
    }
    if (head->next == head)
    {
        free(head);
        head = NULL;
        return head;
    }
    else
    {
        struct Node *current = head;
        struct Node *previous;
        while (current->next != head)
        {
            previous = current;
            current = current->next;
        }
        previous->next = head;
        free(current);
    }
    printf("Node at the end deleted successfully.\n");
    return head;
}

struct Node *deleteAtPosition(struct Node *head)
{
    int position;
    printf("Enter position: ");
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
    struct Node *current = head;
    struct Node *previous;
    int currentPosition = 1;
    while (current->next != head && currentPosition < position)
    {
        previous = current;
        current = current->next;
        currentPosition++;
    }
    if (currentPosition != position)
    {
        printf("Invalid position.\n");
        return head;
    }
    previous->next = current->next;
    free(current);
    printf("Node at position %d deleted successfully.\n", position);
    return head;
}

void searchNode(struct Node *head)
{
    int key;
    printf("Enter key value: ");
    scanf("%d", &key);
    if (head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }
    struct Node *current = head;
    int position = 1;
    do
    {
        if (current->data == key)
        {
            printf("Node with data %d found at position %d.\n", key, position);
            return;
        }
        current = current->next;
        position++;
    } while (current != head);
    printf("Node with data %d not found in the list.\n", key);
}

void displayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }
    struct Node *current = head;
    printf("Circular linked list: ");
    do
    {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);
    printf("\n");
}

int main()
{
    struct Node *head = NULL;
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data for creating node: ");
    scanf("%d", &new_node->data);
    new_node->next = head;
    struct Node *temp = new_node;
    head = new_node;

    new_node = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data for creating node: ");
    scanf("%d", &new_node->data);
    new_node->next = head;
    temp->next = new_node;
    temp = new_node;

    new_node = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data for creating node: ");
    scanf("%d", &new_node->data);
    new_node->next = head;
    temp->next = new_node;
    temp = new_node;

    new_node = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data for creating node: ");
    scanf("%d", &new_node->data);
    new_node->next = head;
    temp->next = new_node;
    temp = new_node;

    int choice;
    while (choice != 9)
    {
        printf("\nCircular Linked List Operations:\n");
        printf("1. Insert a node at the beginning\n");
        printf("2. Insert a node at the end\n");
        printf("3. Insert a node at a given position\n");
        printf("4. Delete a node from the beginning\n");
        printf("5. Delete a node from the end\n");
        printf("6. Delete a node from a given position\n");
        printf("7. Search a node\n");
        printf("8. Display the list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = insertAtBeginning(head);
            break;
        case 2:
            head = insertAtEnd(head);
            break;
        case 3:
            head = insertAtPosition(head);
            break;
        case 4:
            head = deleteAtBeginning(head);
            break;
        case 5:
            head = deleteAtEnd(head);
            break;
        case 6:
            head = deleteAtPosition(head);
            break;
        case 7:
            searchNode(head);
        case 8:
            displayList(head);
        }
    }
}