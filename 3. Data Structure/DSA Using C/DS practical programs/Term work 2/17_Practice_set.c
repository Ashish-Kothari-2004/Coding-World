// Q17. Write a menu driven C program to implement of queue using linked list with following operations :
// • Check if the stack is empty
// • Check if the stack is full
// • Display the contents of queue
// • Enqueue data
// • Dequeue data

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue()
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = new_node;
    }
    else
    {
        rear->next = new_node;
        rear = new_node;
    }
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    struct node *temp = front;
    front = front->next;
    if (front == NULL)
    {
        rear = NULL;
    }
    free(temp);
}

void display_queue()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    struct node *temp = front;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int is_empty()
{
    return (front == NULL);
}

int is_full()
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Check if empty\n5. Check if full\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display_queue();
            break;
        case 4:
            if (is_empty())
            {
                printf("Queue is empty.\n");
            }
            else
            {
                printf("Queue is not empty.\n");
            }
            break;
        case 5:
            if (is_full())
            {
                printf("Queue is full.\n");
            }
            else
            {
                printf("Queue is not full.\n");
            }
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
