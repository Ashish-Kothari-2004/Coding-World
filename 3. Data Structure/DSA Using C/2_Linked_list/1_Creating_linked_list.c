// Linked list: A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.
// Types of linked list:
// 1. Singly linked list - last pointer is NULL and can traverse from only one side.
// 2. Doubly linked list - first and last pointer is NULL and can traverse from both side.
// 3. Circular linked list - first pointer points to last node and last points to first node.
// 4. Doubly Circular linked list - last pointer points to first node and first pointer points to last node and traverse the linked list from both side.

// Basic operations on linked list
// Traversal - access each element of the linked list
// Insertion - adds a new element to the linked list
// Deletion - removes the existing elements
// Search - find a node in the linked list
// Sort - sort the nodes of the linked list

/*
// Creating Singly Linked List
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 10;
    new_node->next = NULL;
    head = new_node;
    struct node *temp;
    temp = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 20;
    new_node->next = NULL;
    temp->next = new_node;
    temp = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 30;
    new_node->next = NULL;
    temp->next = new_node;
    temp = new_node;

    printf("The data in first node is %d\n", head->data);
    printf("The data in second node is %d\n", head->next->data);
    printf("The data in third node is %d\n", head->next->next->data);

    return 0;
}
*/

/*
// Creating doubly Linked List
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 10;
    new_node->prev = NULL;
    new_node->next = NULL;
    head = new_node;
    struct node *temp;
    temp = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 20;
    new_node->prev = temp;
    new_node->next = NULL;
    temp->next = new_node;
    temp = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 30;
    new_node->next = NULL;
    new_node->prev = temp;
    temp->next = new_node;
    temp = new_node;

    struct node *ptr1 = head;
    struct node *t;
    while (ptr1 != NULL)
    {
        printf("%d\n", ptr1->data);
        t = ptr1;
        ptr1 = ptr1->next;
    }
    struct node *ptr2 = t;
    printf("IN REVERSE ORDER\n");
    while (ptr2 != NULL)
    {
        printf("%d\n", ptr2->data);
        ptr2 = ptr2->prev;
    }

    return 0;
}
*/

// Creating Circular linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 10;
    new_node->next = NULL;
    head = new_node;
    struct node *temp;
    temp = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 20;
    new_node->next = NULL;
    temp->next = new_node;
    temp = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 30;
    new_node->next = NULL;
    temp->next = new_node;
    temp = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 40;
    new_node->next = head;
    temp->next = new_node;
    temp = new_node;

    struct node *ptr = head;
    // do
    // {
    //     printf("%d\n", ptr->data);
    //     ptr = ptr->next;
    // } while (ptr != head);

    // or we can also do like this ---
    printf("%d\n", ptr->data);
    ptr  = ptr ->next;
    while(ptr != head) 
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    
    return 0;
}