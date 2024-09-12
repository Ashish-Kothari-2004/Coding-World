#include <stdio.h>
#include <stdlib.h>

// Doubly linked list node structure
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("The list is already empty.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    if (*head != NULL) {
        (*head)->prev = NULL;
    }
    free(temp);
    printf("Node at the beginning deleted successfully.\n");
}
// Function to delete a node at a given position in the doubly linked list
void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("The list is already empty.\n");
        return;
    }
    if (position <= 0) {
        printf("Invalid position.\n");
        return;
    }
    if (position == 1) {
        deleteAtBeginning(head);
        return;
    }
    struct Node* current = *head;
    int currentPosition = 1;
    while (current != NULL && currentPosition < position) {
        current = current->next;
        currentPosition++;
    }
    if (current == NULL) {
        printf("Invalid position.\n");
        return;
    }
    current->prev->next = current->next;
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    free(current);
    printf("Node at position %d deleted successfully.\n", position);
}

// Function to delete the node at the end of the doubly linked list
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("The list is already empty.\n");
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        printf("Node at the end deleted successfully.\n");
        return;
    }
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->prev->next = NULL;
    free(current);
    printf("Node at the end deleted successfully.\n");
}

// Function to print the doubly linked list
void printList(struct Node* head) {
    struct Node* current = head;
    printf("Doubly linked list: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    head = createNode(4);
    head = createNode(34);
    head = createNode(24);
    head = createNode(23);
    head = createNode(2);
    printList(head);

    deleteAtPosition(&head, 2);
    printList(head);

    deleteAtEnd(&head);
    printList(head);

    deleteAtBeginning(&head);
    printList(head);

    return 0;
}