// Insertion in singly linked list
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

    // head = insert_beg(head);
    head = insert_pos(head);
    // head = insert_end(head);

    display(head);

    return 0;
}