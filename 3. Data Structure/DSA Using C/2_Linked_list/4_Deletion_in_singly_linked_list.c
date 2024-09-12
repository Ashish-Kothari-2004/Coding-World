// Insertion in singly linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *delete_beg(struct node *head)
{
    if(head == NULL)
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
    if(head == NULL)
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

    // head = delete_beg(head);
    head = delete_beg(head);

    // head = delete_pos(head);
    // head = delete_pos(head);

    head = delete_end(head);
    head = delete_end(head);

    display(head);

    return 0;
}





































