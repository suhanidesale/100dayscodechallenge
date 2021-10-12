#include<stdio.h>
#include<stdlib.h>


int front=-1;
int rear=-1;

void enqueue(int x)
{
	int n;
	int * queue;
	if((rear+1)%n == front)
	{
		printf("\nQueue is Filled");
	}
	else
	{
        rear = (rear+1)%n;
		queue[rear]=x;
		
	}
	
}

void dequeue()
{
	int * queue;
	if((front == -1) && (rear == -1))
	{
		printf("\nQueue is Empty\n");
	}
	else
	{
		printf("\n %d is dequeued",queue[front]);
        front = -1;
        rear = -1;
	}
}
void display()
{
	int * queue ,n ,i;
	if((front == -1) && (rear == -1))
	{
		printf("Queue is Empty");
	}
	else
	{
		
		while(i<=rear-1)
		{
		printf("%d",queue[i]);
        i= (i+1)%n;
		}
	}
}



int main()
{
	int *queue = NULL;
	int ch;
	int n1 ,n;
	printf("Enter no of elements in an array ");
 	scanf("%d",&n);
 	queue = (int*)malloc(n * sizeof(int));
	while(1)
	{
		
		printf("\n Queue Operation");
		printf("\n 1. Enqueue");
		printf("\n 2. Dequeue");
		printf("\n 3. Display");
		printf("\n 4. Exit");
		
		printf("\n Enter choice");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter element to be pushed into the queue: ");
				scanf("%d",&n1);
				enqueue(n1);
				break;
			}
			case 2:
			{
				dequeue();
				break;
			}
			case 3:
			{	display();
				break;
			}
			case 4:
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