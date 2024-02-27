#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;
void main()
{
    int ch;
    printf("Stack Implementation using linked list\n\n");
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
                push();
                break;
            case 2:
                pop();
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

void push()
{
    int n;
    printf("Enter the insert element\n");
    scanf("%d",&n);

    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = n;
    new_node->next = NULL;

    if(head == NULL)
        head = new_node;
    else
    {   struct node *p;
        p = head;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = new_node;
    }
    return;
}

void pop()
{
    struct node *ptr,*p2;
    if(head == NULL)
    {
        printf("List is empty\n");
        exit(0);
    }
    else
    {   if(head->next == NULL)
        {
            printf("Element %d deleted\n",head->data);
            free(head);
            head = NULL;
        }
        else
        {
            ptr = head;
            while(ptr->next != NULL)
            {
                p2 = ptr;
                ptr = ptr->next;
            }

            printf("Element %d deleted\n",ptr->data);
            p2->next = NULL;
            free(ptr);
        }
        return;
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

