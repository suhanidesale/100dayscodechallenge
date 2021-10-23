#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *tail = NULL;
int size = 0;

void create(int val)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = tail = temp;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    size++;
}

void insertatbeg(int val)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = tail = temp;
    }
    else
    {
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
    size++;
}

void insertatpos(int val)
{
    int pos, i = 1;
    printf("Enter the position where you want to enter the value: ");
    scanf("%d", &pos);
    struct node *tail = head;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (pos > size)
    {
        printf("Invalid Position\n");
    }
    else
    {
        while (i < pos - 1)
        {
            tail = tail->next;
            i++;
        }
        temp->prev = tail;
        temp->next = tail->next;
        tail->next = temp;
        temp->next->prev = temp;
    }
}

void delatbeg()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    if (head == NULL)
    {
        printf("List is empty");
    }

    if (head == temp)
    {
        head = tail = 0;
        free(temp);
    }
    else
    {
        tail = head;
        head = head->next;
        head->prev = NULL;
        free(tail);
    }
}

void delatend()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    if (head == NULL)
    {
       printf("List is empty\n"); 
    }
    else
    {
        tail = temp;  
        tail->prev->next = NULL;
        temp = temp->prev;
        free(tail);
    }
}

void display()
{
    struct node *temp;
    temp = head;
    if (head == NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{

    int ch, n1;
    while (1)
    {

        printf("\nQueue Operation");
        printf("\n1. Create a Doubly linked list");
        printf("\n2. Insert at the end");
        printf("\n3. Insert at the beginning");
        printf("\n4. Insert at any position");
        printf("\n5 Delete at beginning");
        printf("\n6. Delete at end");
        printf("\n7. Display");
        printf("\n8. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            printf("Enter data: ");
            scanf("%d", &n1);
            create(n1);
            break;
        }
        case 2:
        {
            printf("Enter data: ");
            scanf("%d", &n1);
            create(n1);
            break;
        }
        case 3:
        {
            printf("Enter data: ");
            scanf("%d", &n1);
            insertatbeg(n1);
            break;
        }

        case 4:
        {
            printf("Enter data: ");
            scanf("%d", &n1);
            insertatpos(n1);
            break;
        }

        case 5:
        {
            delatbeg();
            break;
        }

        case 6:
        {
            delatend();
            break;
        }

        case 7:
        {
            display();
            break;
        }
        case 8:
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