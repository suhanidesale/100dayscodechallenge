#include <stdio.h>
#include <stdlib.h>

struct  node{
    int data;
    struct node * next;
}node;

struct node * head = NULL;
struct node * tail = NULL;

int size = 0;

void addlast(int data)
{
    struct node * next;
    struct node * temp;
    temp = (struct node *)malloc(sizeof(struct node)); //to return address of head
    
    if (head == NULL)
    {
        head = tail = temp;   
        head->next = NULL;
        tail->next = NULL;
        
    }

    else
    {
        temp->data = data; // Link data field of newNode
        temp->next = NULL; // Make sure new node points to NULL
        tail = temp;

    }
    size--;

}

void display()
{
    
    int data;
    struct node *next;
    struct node *head, *tail; // newnode contains the address of newly created noded
    struct node *temp;

    if (head == NULL)
        printf("\nList is empty\n");

    else
    {
        tail = head;
        while (tail != NULL)
        {

            printf("%d", temp->data);
            temp = temp->next;
        }
    }

}

int main()
{
    struct node *next;
    struct node *head, *tail; // newnode contains the address of newly created noded
    struct node *temp;

    addlast(10);
    addlast(20);
    display();
    display();

    return 0;

    

}