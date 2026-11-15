#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int item)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow! Cannot insert %d\n", item);
        return;
    }
    if (front == -1)
        front = 0;
    queue[++rear] = item;
    printf("Enqueued: %d\n", item);
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow! Queue is empty\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front++]);
    if (front > rear)
    {
        front = rear = -1; // Reset queue when empty
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    dequeue();
    return 0;
}
