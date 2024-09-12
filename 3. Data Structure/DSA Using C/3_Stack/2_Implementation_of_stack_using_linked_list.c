#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int isEmpty(struct node *top)
{
    if (top == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct node *top)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(struct node *top, int d)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = d;
        new_node->next = top;
        top = new_node;
        return top;
    }
}
int pop(struct node *top)
{
    if (isEmpty(top))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct node *temp = top;
        top = top->next;
        free(temp);
        return top;
    }
}

int peek(struct node *top, int p)
{
    struct node *ptr = top;
    for (int i = 1; i < p; i++)
    {
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);
    
}
void display(struct node *top)
{
    while (top != NULL)
    {
        printf("%d\n", top->data);
        top = top->next;
    }
}
int main()
{
    struct node *top = NULL;
    top = push(top, 23);
    top = push(top, 278);
    top = push(top, 23);
    top = push(top, 8);
    top = push(top, 2);
    top = push(top, 27);

    display(top);
    printf("\n");

    top = pop(top);
    top = pop(top);
    display(top);
    printf("\n");

    peek(top, 3);
    peek(top, 1);
    peek(top, 4);
    return 0;
}