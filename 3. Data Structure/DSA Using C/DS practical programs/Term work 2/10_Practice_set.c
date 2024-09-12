// Q10. 10. Write a menu driven C program to implement of queue using array with following
// operations :
// • Check if the queue is empty
// • Check if the queue is full
// • Display the contents of queue
// • Enqueue data
// • Dequeue data

#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

int isEmpty(struct queue *ptr)
{
    if (ptr->front == ptr->rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is not empty\n");
    }
}

int isFull(struct queue *ptr)
{
    if (ptr->rear == ptr->size - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Queue is not full\n");
    }
}
int enqueue(struct queue *ptr)
{
    if (isFull(ptr))
    {
        printf("Queue Overflow you cannot enqueue\n");
        return 1;
    }
    else
    {
        int n;
        printf("Enter element for enqueue ");
        scanf("%d", &n);
        ptr->rear++;
        ptr->arr[ptr->rear] = n;
    }
}

int dequeue(struct queue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Queue is Underflow you cannot dequeue\n");
        return 1;
    }
    else
    {
        int n;
        ptr->front++;
        n = ptr->arr[ptr->front];
        return n;
    }
}
void display(struct queue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Queue is Underflow\n");
        return;
    }
    printf("Enqueue elements are \n");
    for (int i = ptr->front + 1; i <= ptr->rear; i++)
    {
        printf("%d ", ptr->arr[i]);
    }
    printf("\n");
}
int main()
{
    struct queue q1;
    q1.size = 5;
    q1.front = -1;
    q1.rear = -1;
    q1.arr = (int *)malloc(q1.size * sizeof(int));
    int choice;
    while (choice != 6)
    {
        printf("Enter choice:\n1. for isEmpty()\n2. for isFull()\n3. for enqueue\n4. for dequeue()\n5. for display()\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            isEmpty(&q1);
            break;
        case 2:
            isFull(&q1);
            break;
        case 3:
            enqueue(&q1);
            break;
        case 4:
            dequeue(&q1);
            break;
        case 5:
            display(&q1);
        default:
            break;
        }
    }
    return 0;
}
