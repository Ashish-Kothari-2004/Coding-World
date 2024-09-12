// Q13. Write a menu driven C program to implement of singly linked list with following
// operations:
// • Create the list
// • Insert a node in the beginning, in the end, at given position
// • Delete a node in the beginning, in the end, at given position
// • Search a node
// • Display the list

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *insert_beg(struct node *head)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for new node: ");
    scanf("%d", &(new_node->data));
    new_node->next = head;
    head = new_node;
    return head;
}

struct node *insert_pos(struct node *head)
{
    int position;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for new node: ");
    scanf("%d", &(new_node->data));
    printf("Enter position for new node: ");
    scanf("%d", &position);
    if (position == 1)
    { // Insert at the beginning
        new_node->next = head;
        return new_node;
    }
    struct node *temp = head;
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Invalid position\n");
        return head;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    return head;
}

struct node *insert_end(struct node *head)
{
    struct node *temp = head;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for new node: ");
    scanf("%d", &(new_node->data));
    if (head == NULL)
    {
        head = new_node;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}

struct node *delete_beg(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty deletion is not possible\n");
        return head;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

struct node *delete_pos(struct node *head)
{
    int position;
    printf("Enter position for deleting node: ");
    scanf("%d", &position);
    if (position == 1)
    {
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct node *temp = head;
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }
    struct node *ptr = temp->next;
    temp->next = ptr->next;
    free(ptr);
    return head;
}

struct node *delete_end(struct node *head)
{
    if (head == NULL)
    {
        printf("Liked list is empty. Deletion not possible\n");
        return head;
    }
    struct node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    struct node *ptr = temp->next;
    temp->next = NULL;
    free(ptr);
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
    int choice;
    struct node *head = NULL;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for creating node: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    struct node *temp = new_node;
    head = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for creating node: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    temp->next = new_node;
    temp = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for creating node: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    temp->next = new_node;
    temp = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for creating node: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    temp->next = new_node;
    temp = new_node;

    display(head);
    while (choice != 9)
    {
        printf("Enter your choice: \n1.Insert at beginning\n2.Insert at position\n3. Insert at the end\n4. Delete at beginning \n5. Delete at position\n6.Delete at the end\n7.Search  a node\n8. display list\n9. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = insert_beg(head);
            break;
        case 2:
            head = insert_pos(head);
            break;
        case 3:
            head = insert_end(head);
            break;
        case 4:
            head = delete_beg(head);
            break;
        case 5:
            head = delete_pos(head);
            break;
        case 6:
            head = delete_end(head);
            break;
        case 7:
            searchNode(head);
            break;
        case 8:
            display(head);
            break;
        default:
            break;
        }
    }

    return 0;
}