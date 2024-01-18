#include<stdio.h>
void append(int);
void fpop();
void lpop();
void mpop();
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
    printf("1. Insert at end\n");
    printf("2. Delete from beginning\n");
    printf("3. Delete from last\n");
    printf("4. Delete at particular position\n");
    printf("5. Display\n");
    printf("6. Exit\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {

    case 1:
        printf("Enter the insert element\n");
        scanf("%d",&n);
        append(n);
        break;
    case 2:
        fpop();

        break;
    case 3:
        lpop();

        break;
    case 4:
        mpop();

        break;
    case 5:
        display();
        break;
    case 6:
        exit(0);
    default:
        printf("Enter correct choice\n");
        break;
        }
        continue;
    }
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

void fpop()
{
struct Node *ptr;
   if(head == NULL)
        printf("List is empty\n");
   else
   {
    ptr = head;
    head = head->next;
    free(ptr);
    printf("1st element deleted!\n");
   }
}

void lpop()
{

    struct Node *ptr,*p1;

    if(head == NULL)
        printf("List is empty\n");

    else
    {
        if(head->next == NULL)
        {
        free(head);
        head = NULL;
        }

        else
        {   ptr = head;
            while(ptr->next != NULL)
            {
                p1 = ptr;
                ptr = ptr->next;
            }
            p1->next = NULL;
            free(ptr);
        }
        printf("Last element deleted!\n");
    }

}

void mpop()
{
    int pos;
    printf("Enter the position to be deleted\n");
    scanf("%d",&pos);
    struct Node *ptr,*ptr1;
    if(pos == 1)
    {
        ptr = head;
        free(ptr);
        head = NULL;
    }
    else
    {
        ptr = head;
        while(pos-1 != 0)
        {
            ptr1 = ptr;
            ptr = ptr->next;
            pos--;
        }
        ptr1->next = ptr->next;
        free(ptr);
    }
    printf("element deleted!\n");
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
