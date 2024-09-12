// Q.16 6. Write a menu driven C program to implement of stack using linked list with following operations :
// • Check if the stack is empty
// • Check if the stack is full
// • Display the contents of stack
// • Push data
// • Pop data
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

int isEmpty()
{
    return (top == NULL);
}

int isFull()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    int isFullFlag = (temp == NULL);
    free(temp);
    return isFullFlag;
}

void push(int data)
{
    if (isFull())
    {
        printf("Stack is full. Cannot push element.\n");
    }
    else
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = top;
        top = newNode;
        printf("%d pushed to stack.\n", data);
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack is empty. Cannot pop element.\n");
    }
    else
    {
        struct Node *temp = top;
        int poppedValue = top->data;
        top = top->next;
        free(temp);
        printf("%d popped from stack.\n", poppedValue);
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is empty.\n");
    }
    else
    {
        struct Node *temp = top;
        printf("Stack elements: ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int choice, data;
    do
    {
        printf("Stack Operations\n");
        printf("1. Check if the stack is empty\n");
        printf("2. Check if the stack is full\n");
        printf("3. Display the contents of stack\n");
        printf("4. Push data\n");
        printf("5. Pop data\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            printf("Exiting...\n");
            break;
        case 1:
            if (isEmpty())
            {
                printf("Stack is empty.\n");
            }
            else
            {
                printf("Stack is not empty.\n");
            }
            break;
        case 2:
            if (isFull())
            {
                printf("Stack is full.\n");
            }
            else
            {
                printf("Stack is not full.\n");
            }
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Enter data to push: ");
            scanf("%d", &data);
            push(data);
            break;
        case 5:
            pop();
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

        printf("\n");
    } while (choice != 0);

    return 0;
}
