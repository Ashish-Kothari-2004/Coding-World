/*
Stack Data Structure: Stack is a linear data structure that follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out). LIFO implies that the element that is inserted last, comes out first and FILO implies that the element that is inserted first, comes out last.
A stack is a linear data structure in which the insertion of a new element and removal of an existing element takes place at the same end represented as the top of the stack.
To implement the stack, it is required to maintain the pointer to the top of the stack, which is the last element to be inserted because we can access the elements only on the top of the stack.
Basic Operations on Stack
1. push(): To insert an element into the stack.
2. pop(): To remove an element from the stack.
3. peek(): Value at the given position is returned.
4. isEmpty(): returns true if stack is empty else false.
5. isFull(): returns true if stack is empty else false.
6. top(): Returns the top element of the stack.

NOTE: Stack can be implemented using array and linked list.

*/

// Stack implementation using array
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int data)
{
    if (isFull(ptr))
    {
        printf("Stakc is full you cannot push elements\n");
        return;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty you cannot pop\n");
        return 0;
    }
    else
    {
        printf("popped element is %d\n", ptr->arr[ptr->top]);
        ptr->top--;
    }
}

int top(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The top element is %d\n", ptr->arr[ptr->top]);
    }
}

int peek(struct stack *ptr, int p)
{
    int i = ptr->top - p + 1;
    if (isEmpty(ptr))
    {
        printf("Stack is empty\n");
    }
    else if (i < 0)
    {
        printf("Invalid position\n");
        return -1;
    }
    else
    {
        printf("Peek element is %d\n", ptr->arr[ptr->top - p + 1]);
    }
}

void Display(struct stack *ptr)
{
    for (int i = 0; i <= ptr->top; i++)
    {
        printf("Element in the stack: %d\n", ptr->arr[i]);
    }
}

int main()
{
    struct stack *s1; // Here we use s1 as a structure pointer since we can do call by reference.
    s1->size = 100;
    s1->top = -1;
    s1->arr = (int *)malloc(s1->size * sizeof(int));

    push(s1, 23);
    push(s1, 94);
    push(s1, 43);
    push(s1, 34);
    push(s1, 23);
    push(s1, 45);
    push(s1, 4567);
    push(s1, 475);
    push(s1, 565);
    push(s1, 405);
    push(s1, 443);
    Display(s1);
    printf("\n");
    pop(s1);
    pop(s1);
    pop(s1);
    printf("\n");
    Display(s1);
    printf("\n");
    top(s1);
    printf("\n");
    peek(s1, 4);
    peek(s1, 489);

    return 0;
}