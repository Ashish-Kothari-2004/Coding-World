// Q9. Write a menu driven C program to implement of stack using array with following operations :
// • Check if the stack is empty
// • Check if the stack is full
// • Display the contents of stack
// • Push data
// • Pop data

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void isEmpty()
{
    if (top == -1)
    {
        printf("Stack is Empty\n\n");
    }
    else
    {
        printf("Stack is not Empty\n\n");
    }
}

void isFull()
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack is Full\n\n");
    }
    else
    {
        printf("Stack is not Full\n\n");
    }
}
void push(int element)
{
    if (top >= MAX_SIZE - 1)
    {
        printf("Stack overflow\n\n");
        return;
    }
    top++;
    stack[top] = element;
}

int pop()
{
    if (top < 0)
    {
        printf("Stack underflow\n\n");
        return -1;
    }
    int element = stack[top];
    printf("pop element is %d\n\n", element);
    top--;
}

int peek()
{
    if (top < 0)
    {
        printf("Stack is empty\n\n");
        return -1;
    }
    printf("peek element is %d\n\n", stack[top]);
}

void Display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("Elements in stack: %d\n\n", stack[i]);
    }
}
int main()
{
    int ch;
    int element;
    while (ch != 7)
    {
        printf("Enter choice : \n1.For push()\n2.For pop()\n3.For peek()\n4.For isEmpty()\n5.For isFull()\n6.For Display()\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter element for push operation: ");
            scanf("%d", &element);
            push(element);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            isFull();
            break;
        case 6:
            Display();
            break;
        }
    }

    return 0;
}
