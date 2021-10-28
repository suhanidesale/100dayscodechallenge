#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;

};

struct node *front = NULL;
struct node *rear = NULL;

void enqueuerear(int val)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
    }
    else
    {
        temp->prev = rear;
        rear->next = temp;
        rear = temp;
    }

}

void enqueuefront(int val)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
    }
    else
    {
        front->prev = temp;
        temp->next =front;
        front = temp;
    }

}

void dequeuefront()
{
    struct node *tail = front;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is Empty\n ");
    }
    else
    {
        printf("%d is dequeued ",front->data);
        front = front->next;
        front->prev = NULL; 
        free(tail);
    }
    
}

void dequeuerear()
{
    struct node *tail = rear;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is Empty\n ");
    }
    else
    {
        printf("%d is dequeued ",rear->data);
        rear->prev->next = NULL;
        rear = rear->next;
        free(tail);
    }
}

void display()
{
    struct node *tail;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is Empty\n ");
    }
    else
    {
        tail = front;
        while (tail!= NULL)
        {
            printf("%d ",tail->data);
            tail = tail->next;
        }
        
    }
}

int main()
{
    int ch,n1;
    while(1)
	{
		
		printf("\n Queue Operation");
		printf("\n 1. Enqueue from Rear");
		printf("\n 2. Enqueue from Front");
		printf("\n 3. Dequeue from Front");
		printf("\n 4. Dequeue from Rear");
		printf("\n 5. Display");
		printf("\n 6. Exit");
		printf("\n Enter choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter element to be pushed into the queue from rear: ");
				scanf("%d",&n1);
				enqueuerear(n1);
				break;
			}

            case 2:
			{
				printf("\nEnter element to be pushed into the queue from front: ");
				scanf("%d",&n1);
				enqueuefront(n1);
				break;
			}

			case 3:
			{
				dequeuefront();
				break;
			}

            
			case 4:
			{
				dequeuerear();
				break;
			}

			case 5:
			{	display();
				break;
			}

			case 6:
			{	exit(0);
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