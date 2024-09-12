#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void Linked_list_Travesal(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

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
    new_node->next = NULL;
    temp->next = new_node;
    temp = new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = 50;
    new_node->next = NULL;
    temp->next = new_node;
    temp = new_node;

    struct node *ptr;
    ptr = head;
    Linked_list_Travesal(ptr);
    
    return 0;
}
