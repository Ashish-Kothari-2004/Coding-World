/*
Circular queue -

Circular increment - If we have arr[5] then circular increment would be

i = (i+1) % size
0 = (1+0) % 6 = 1
1 = (1+1) % 6 = 2
2 = (2+1) % 6 = 3
3 = (3+1) % 6 = 4
4 = (4+1) % 6 = 5
5 = (5+1) % 6 = 0 (0th index)

*/

#include <stdio.h>
struct circularQueue
{
    int size;
    int front;
    int rear;
    int *arr;
};

int isEmpty(struct circularQueue *q)
{
    if (q->front == q->rear)
    {
        printf("Queue is empty\n");
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        printf("Queue is full\n");
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *q)
{
    if (isFull(q))
    {
        printf("Queue is Overflow\n");
        return;
    }
    int n;
    printf("Enter element for enqueue\n");
    scanf("%d", &n);
    q->arr[q->rear] = n;
    q->rear = (q->rear + 1) % q->size;// circular increment
}

int dequeue(struct circularQueue *q)
{
    if (isEmpty(q))
    {
        printf("Queue Underflow\n");
        return -1;
    }
    int a = q->arr[q->front];
    q->front = (q->front + 1) % q->size;// circular increment
    return a;
}

void display(struct circularQueue *q)
{
    if (isEmpty(q))
    {
        printf("Queue Overflow cannot display\n");
        return;
    }
    // int i = q->front;
    // while (i != q->rear)
    // {
    //     printf("%d ", q->arr[i]);
    //     i = (i+1)%q->size;
    // }
    for (int i = q->front; i != q->rear; i = (i+1)%q->size)
    {
        printf("%d ", q->arr[i]);
    }
    
    printf("\n");
}
int main()
{
    struct circularQueue q1;
    q1.front = q1.rear = 0; // In circular queue front and rear starts from 0 since if we starts front and rear from -1 and we enqueu until queue gets full, after that if we increment rear cicularly for enqueue operation and for checking that space is empty or not,  then first we check (front == rear)  but front set as -1 so rear value would be 0 which is not equal to -1. Queue is full but we get Queue is empty.
    q1.size = 6;

    isEmpty(&q1);
    isFull(&q1);

    enqueue(&q1);
    enqueue(&q1);
    enqueue(&q1);
    enqueue(&q1);
    enqueue(&q1);
    isFull(&q1);
    display(&q1);
    printf("The value of dequeue element is %d\n", dequeue(&q1));
    printf("The value of dequeue element is %d\n", dequeue(&q1));
    enqueue(&q1);
    enqueue(&q1);
    
    isFull(&q1);
    display(&q1);

    return 0;
}