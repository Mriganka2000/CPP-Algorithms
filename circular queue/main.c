#include <stdio.h>
#define MAX 5

int arr[MAX];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if (front == 0 && rear == MAX - 1)
    {
        printf("Queue full");
    }
    else if (front == -1 && rear == -1 || front == rear + 1)
    {
        front = rear = 0;
        arr[front] = data;
    }
    else if (rear == MAX - 1)
    {
        rear = 0;
    }
    else
    {
        rear++;
        arr[rear] = data;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty \n");
    }
    else if (front == rear)
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

void print()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are: \n");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else
    {
        int size = sizeof (arr) / sizeof (arr[0]);
        for (int i = front; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        for (int i = 0; i <= rear; i++)
        {
            printf("%d ", arr[i]);
        }
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
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    enqueue(1);
    print();
}
