#include <stdio.h>
#define MAX 5

int deque[MAX];
int front = -1, rear = -1;

// 7a. Front insertion
void insertFront(int key)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Overflow\n");
        return;
    }
    if (front == -1)
    {
        front = rear = 0;
    }
    else if (front == 0)
    {
        front = MAX - 1;
    }
    else
    {
        front--;
    }
    deque[front] = key;
}

// 7b. Rear insertion
void insertRear(int key)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Overflow\n");
        return;
    }
    if (front == -1)
    {
        front = rear = 0;
    }
    else if (rear == MAX - 1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    deque[rear] = key;
}

// 7c. Front deletion
void deleteFront()
{
    if (front == -1)
    {
        printf("Underflow\n");
        return;
    }
    printf("Deleted from front: %d\n", deque[front]);
    if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == MAX - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

// 7d. Rear deletion
void deleteRear()
{
    if (front == -1)
    {
        printf("Underflow\n");
        return;
    }
    printf("Deleted from rear: %d\n", deque[rear]);
    if (front == rear)
    {
        front = rear = -1;
    }
    else if (rear == 0)
    {
        rear = MAX - 1;
    }
    else
    {
        rear--;
    }
}

int main()
{
    insertRear(10);
    insertFront(20);
    insertRear(30);
    deleteFront();
    deleteRear();
    return 0;
}
