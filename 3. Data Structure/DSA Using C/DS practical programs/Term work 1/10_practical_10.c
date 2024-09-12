// 10. Write an algorithm and C code to implement stack using array.
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int element)
{
    if (top >= MAX_SIZE - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack[top] = element;
}

int pop()
{
    if (top < 0)
    {
        printf("Stack underflow\n");
        return -1;
    }
    int element = stack[top];
    top--;
    return element;
}

int peek()
{
    if (top < 0)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

int main()
{
    push(10);
    push(20);
    push(30);
    printf("Top element: %d\n", peek());
    printf("Popped element: %d\n", pop());
    printf("Top element: %d\n", peek());
    return 0;
}
