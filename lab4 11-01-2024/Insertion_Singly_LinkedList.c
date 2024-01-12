#include<stdio.h>
void push(int);
void append(int);
void insert_at_pos(int);
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
int choice,pos,n;

void main()
{
    while(1){
    printf("1. Insert from beginning\n");
    printf("2. Insert at end\n");
    printf("3. Insert at specific position\n");
    printf("4. Display\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter the insert element\n");
        scanf("%d",&n);
        push(n);
        break;
    case 2:
        printf("Enter the insert element\n");
        scanf("%d",&n);
        append(n);
        break;
    case 3:
        printf("Enter the insert element\n");
        scanf("%d",&n);
        insert_at_pos(n);
        break;
    case 4:
        display();
        break;
    case 5:
        exit(0);
    default:
        printf("Enter correct choice");
        break;
        }
        continue;
    }
}
void push(int n)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = n;
    new_node->next = head;
    head = new_node;
}

void append(int n)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last  = head;  // if head is linked to one or more nodes already, then point last pointer to head. 

    new_node->data = n;
    new_node->next = NULL;
    // if the list is empty.
    if(head == NULL)
    {
        head = new_node;
        return;
    }
    //traverse till the end
    else{
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new_node;
    }
}

void insert_at_pos(int n)
{
    int pos;
    printf("Enter the position\n");
    scanf("%d",&pos);
    struct Node* ptr =(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = head;
    ptr->data = n;

    if(pos==1){
        ptr->next = temp;
        head = ptr;
    }

    else{
        for(int i=1;i<pos-1 && temp!=NULL ;i++){
            temp = temp->next;
        }
        ptr->next = temp->next ;
        temp->next = ptr;
    }
}

void display()
{
    struct Node* node = head;
    while(node != NULL)
        {
            printf("%d\n",node->data);
            node = node->next;
        }
}
