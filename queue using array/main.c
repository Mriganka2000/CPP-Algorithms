#include <stdio.h>
#define MAX 100

int arr[MAX];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if(front == -1 && rear == -1)
    {
        front++;
        rear++;
        arr[front] = data;
    }
    else if(rear == MAX - 1)
    {
        printf("Overflow \n");
    }
    else
    {
        arr[++rear] = data;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
}

void print()
{
    int i;
    for (i = front; i <= rear; i++)
    {
        printf("%d", arr[i]);
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    print();
}
