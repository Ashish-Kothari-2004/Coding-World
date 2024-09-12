/*
Queue - A Queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.
We define a queue to be a list in which all additions to the list are made at one end, and all deletions from the list are made at the other end.  The element which is first pushed into the order, the operation is first performed on that.

FIFO Principle of Queue:
1. A Queue is like a line waiting to purchase tickets, where the first person in line is the first person served. (i.e. First come first serve).
2. Position of the entry in a queue ready to be served, that is, the first entry that will be removed from the queue, is called the front of the queue(sometimes, head of the queue), similarly, the position of the last entry in the queue, that is, the one most recently added, is called the rear (or the tail) of the queue.

Characteristics of Queue:
1. Queue can handle multiple data.
2. We can access both ends.
3. They are fast and flexible.

Advantages of Queue:
1. A large amount of data can be managed efficiently with ease.
Operations such as insertion and deletion can be performed with ease as it follows the first in first out rule.
2. Queues are useful when a particular service is used by multiple consumers.
3. Queues are fast in speed for data inter-process communication.
4. Queues can be used in the implementation of other data structures.

Disadvantages of Queue:
1.The operations such as insertion and deletion of elements from the middle are time consuming.
Limited Space.
2. In a classical queue, a new element can only be inserted when the existing elements are deleted from the queue.
3. Searching an element takes O(N) time.
4. Maximum size of a queue must be defined prior.


Types of Queue...
1. Simple Queue- Simple queue also known as a linear queue is the most basic version of a queue. Here, insertion of an element i.e. the Enqueue operation takes place at the rear end and removal of an element i.e. the Dequeue operation takes place at the front end.
2. Circular queue – In a circular queue the last element is connected to the first element of the queue
3. Double-ended queue (or known as deque) – A double-ended queue is a special type of queue where one can perform the operations from both ends of the queue.
4. Priority queue – It is a special type of queue where the elements are arranged as per their priority. A low priority element is dequeued after a high priority element.


Basic Operations on Queue
1. enqueue(): To insert an element into the stack.
2. dequeue(): To remove an element from the stack.
3. peek(): Value at the given position is returned.
4. isEmpty(): returns true if stack is empty else false.
5. isFull(): returns true if stack is empty else false.
6. fistValue(): Returns the top element of the stack.
7. lastValue(): Returns the top element of the stack.

Circular insertion - If we have a  

NOTE: Queue can be implemented using Array, Stack and Linked list.

*/

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
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct queue *ptr)
{
    if (ptr->rear == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
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
    if (isEmpty(&q1))
    {
        printf("Queue is Underflow\n");
    }

    enqueue(&q1);
    enqueue(&q1);
    enqueue(&q1);
    enqueue(&q1);
    // enqueue(&q1);
    if (isEmpty(&q1))
    {
        printf("Queue is Underflow\n");
    }
    if (isFull(&q1))
    {
        printf("Queue is Overflow\n");
    }

    display(&q1);

    printf("Dequeue element is %d\n", dequeue(&q1)); // Elements are removed form front so after
    printf("Dequeue element is %d\n", dequeue(&q1)); // dequeue elements are removed but we can't
    printf("Dequeue element is %d\n", dequeue(&q1)); // use that space

    if (isFull(&q1)) // If queue is full, it will be full after dequeue since elements are removed from front
    {
        printf("Queue is Overflow\n");
    }
    display(&q1);

    return 0;
}
