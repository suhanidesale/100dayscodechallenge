#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int val)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
        //In circular queue , node should contain the address of itself
        rear->next = front;
    }
    else
    {
        rear->next = temp;
        rear = temp;
        rear->next = front;
    }
    
}

void dequeue()
{
    struct node *temp;
    temp = front;

    if (front == NULL && rear == NULL)
    {
        printf("Queue is Empty\n");
    }
    else if (front == rear)
    {
        printf("%d is dequeued\n ", front->data);
        front = rear =NULL;
        free(temp);
    }
    else
    {
        printf("%d is dequeued\n ", front->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp = front;

    if (front == NULL && rear == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        while(temp->next != front)
        {
            printf("%d ",temp->data);
            temp =temp->next;
        }
        printf("%d",temp->data);
    }
}


int main()
{
    int ch, n1;
    while (1)
    {

        printf("\n Queue Operation");
        printf("\n 1. Enqueue");
        printf("\n 2. Dequeue");
        printf("\n 3. Display");
        printf("\n 4. Exit");

        printf("\n Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            printf("\nEnter element to be pushed into the queue: ");
            scanf("%d", &n1);
            enqueue(n1);
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            exit(0);
            break;
        }
        default:
        {
            printf("Invalid Input ");
            break;
        }
        }
    }
}