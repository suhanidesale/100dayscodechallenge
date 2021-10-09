#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;             // Data
    struct node *next;    // Address
    struct node *newnode; // newnode contains the address of newly created noded
    struct node *temp;
};

struct node *head = NULL;

// int *createnode(int val)
// {
//     struct node *newnode;
//     newnode = (struct node *)malloc(sizeof(struct node)); //to return address of head
//     newnode->data = val;
//     newnode->next = NULL; //for single valued Linkedlist
//     return newnode;
// }

void create(int n)
{
    int val, data;
    struct node *head, *newnode; // newnode contains the address of newly created noded
    struct node *temp;           //temp to manage from 3rd case and to traverse the list
    newnode = (struct node *)malloc(sizeof(struct node)); //to return address of head
    
       int choice;
    
        printf("Enter Data: ");
        scanf("%d", &data);
        newnode->data = val;
        newnode->next = NULL; 
        newnode = temp;

       

        // if (head == NULL)
        // {
        //     head = temp = newnode; //to store adress of data in head pointer
        //     head->next = NULL;
        //     temp->next = NULL;
        // }

        
        
            // printf("Enter Data: ");
            // scanf("%d", &val);   
            // newnode->data = data; // Link data field of newNode
            // newnode->next = NULL; // Make sure new node points to NULL
            // //temp = newnode;
            
        
        //for (int i = 2; i < n; i++)
        // {
        //     newnode = (struct node *)malloc(sizeof(struct node)); //to return address of head
        //     if(newnode == NULL)
        //     {
        //         printf("Memory can't be allocated");
        //     }
        //     else
        //     {
        //         printf("Enter Data: ");
        //         scanf("%d", &val);   

        //         newnode->data = val;
        //         newnode->next = NULL;

        //         temp->next = newnode;
        //         temp = temp->next;
        //     }
            

        // }

        temp = head;
        while(temp != NULL)
        {
            
            temp = temp->next;

        }
    temp->next = newnode;
}

void traverse()
{
    int data;
    struct node *next;
    struct node *head, *newnode; // newnode contains the address of newly created noded
    struct node *temp;

    if (head == NULL)
        printf("\nList is empty\n");

    else
    {
        temp = head;
        while (temp != NULL)
        {

            printf("%d", temp->data);
            temp = temp->next;
        }
    }
}

// void insert_atbeg()
// {
//     printf("Enter data you want to insert: ");
//     scanf("%d",&newnode->data)
//     newnode->next = head;
//     head = newnode 

// }

// void insert_atend()
// {
//     printf("Enter data you want to insert: ");
//     scanf("%d",&newnode->data)
//     newnode->next = NULL;

// }

int main()
{
    int n;
    int choice ;
    struct node *newNode, *temp;

    while (1)
    {

        printf("Press 1 To create Linked list\n");
        printf("Press 2 To Display Linkedlist \n");
        printf("Press 3 For insertion at the end \n");
        printf("Press 4 For insertion at any position \n");
        printf("Press 5 For deletion of first node\n");
        printf("Press 6 For deletion of last element\n");
        printf("Press 7 For deletion of element at any position\n");
        printf("Press 8 To exit\n");
        printf("Enter Choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // printf("Enter no of elements: ");
            // scanf("%d", &n);
            create(n);
            traverse();
            break;
        // case 2:
        //     break;
        // case 3:
        //     insertAtFront();
        //     break;
        // case 4:
        //     insertAtEnd();
        //     break;
        // case 5:
        //     insertAtPosition();
        //     break;
        // case 6:
        //     deleteFirst();
        //     break;
        // case 7:
        //     deleteEnd();
        //     break;
        // }
        case 3:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}