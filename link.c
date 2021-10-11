#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;
int size = 0;

void implementation(int val) //add last
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
    size++;
}

void addfirst(int val)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = tail = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    size++;
}

void addanyposition(int val)
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

        temp->next = tail->next;
        tail->next = temp;
    }
}

void delfirst()
{
    if (head == NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        struct node *tail = head;
        head = tail->next;
        free(tail);
    }
}

void delend()
{
    struct node *temp;
    tail = head;

    while (tail->next != NULL)
    {
        temp = tail;
        tail = tail->next;
    }

    if (temp == head)
    {
        head = NULL;
    }
    else
    {
        temp->next = NULL;
    }

    free(tail);
}

void delatanyposition()
{
    struct node *temp;
    tail = head;
    int pos, i = 1;
    printf("Enter the position where you want to enter the value: ");
    scanf("%d", &pos);

    if (pos > size)
    {
        printf("Invalid Position\n");
    }
    else
    {
        while (i < pos-1)
        {
            tail = tail->next;
            i++;
        }

        temp = tail->next;
        tail->next = temp->next;
        free(temp);
    }
}

void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int n, val = 0, choice;
    while (1)
    {

        printf("\nPress 1 To create Linked list\n");
        printf("Press 2 To Display Linkedlist \n");
        printf("Press 3 For insertion at the first position \n");
        printf("Press 4 For insertion at last position \n");
        printf("Press 5 For insertion at any position \n");
        printf("Press 6 For deletion of first node\n");
        printf("Press 7 For deletion of last element\n");
        printf("Press 8 For deletion of element at any position\n");
        printf("Press 9 To exit\n");
        printf("Enter Choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter no of elements: ");
            scanf("%d", &n);

            while (n > 0)
            {
                printf("Enter value: ");
                scanf("%d", &val);
                implementation(val);
                n--;
            }
            display();

            break;
        case 2:
            display();
            break;

        case 3:
            printf("Enter value: ");
            scanf("%d", &val);
            addfirst(val);
            display();
            break;

        case 4:
            printf("Enter value: ");
            scanf("%d", &val);
            implementation(val);
            display();
            break;

        case 5:
            printf("Enter value: ");
            scanf("%d", &val);
            addanyposition(val);
            display();
            break;

        case 6:
            delfirst();
            display();
            break;

        case 7:
            delend();
            display();
            break;
        case 8:
            delatanyposition();
            display();
            break;

        case 9:
            exit(0);
			break;

        default:
            printf("Invalid input");
			break;
        }
    }
}
