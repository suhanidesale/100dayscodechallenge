#include <stdio.h>
#include <stdlib.h>

int queue[5];
int n = 5;
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (rear == n - 1)
    {
        printf("\nQueue is Filled");
    }

    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }

    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n"); 
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d is dequeued ", queue[front++]);
    }
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

int main()
{
    enqueue(5);
    enqueue(10);
    enqueue(-1);
    display();
    dequeue();
    dequeue();
    enqueue(12);
    display();
    return 0;
}
