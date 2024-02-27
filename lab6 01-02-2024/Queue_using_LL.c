#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;
void main()
{
    int ch;
    printf("Queue Implementation using linked list\n\n");
    while(1){
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Program ends successfully!");
                exit(0);
            default:
                printf("Enter a valid number...\n");
        }
        continue;
    }
}

void enqueue()
{
    int n;
    printf("Enter the insert element\n");
    scanf("%d",&n);

    struct node *new_node =(struct node*)malloc(sizeof(struct node));
    new_node->data = n;
    new_node->next = head;
    head = new_node;
}

void dequeue()
{
    if(head == NULL)
    {
        printf("List is empty");
        exit(0);
    }
    else
    {
        if(head->next == NULL)
        {
            printf("Element %d deleted\n",head->data);
            free(head);
            head = NULL;
        }
        else
        {
            struct node *p,*p1;
            p = head;
            while(p->next != NULL)
            {
                p1 = p;
                p = p->next;
            }
            p1->next = NULL;
            printf("Element %d deleted\n",p->data);
            free(p);
        }
    }
}

void display()
{
    struct node *n;

    if(head == NULL)
    {
        printf("List is empty");
        exit(0);
    }

    else{
    n = head;
    while(n != NULL)
        {
            printf("%d\n",n->data);
            n = n->next;
        }
    }
}
