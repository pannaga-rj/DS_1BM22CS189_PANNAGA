#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *pre;
    struct node *next;
    int data;
};
struct node *head = NULL;  

void insert_left();
void delete_val();
void display();

int main()
{
    int ch;
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Exit\n");

    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_left();
            break;
        case 2:
            delete_val();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Enter correct choice:\n");
            break;
        }
    }
}

void insert_left()
{
    int val, pos;
    printf("Enter the value: ");
    scanf("%d", &val);
    printf("Enter the position: ");
    scanf("%d", &pos);
    struct node *new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = val;

    if (pos == 1)
    {
        new_node->pre = NULL;
        new_node->next = head;
        if (head != NULL)
        {
            head->pre = new_node;  // Set the "pre" pointer of the current head to the new node, if it has one node already.
        }
        head = new_node;
    }
    else
    {
        struct node *t;
        if(pos>1)
        {
            t = head;
            while(pos-1 != 0)
            {
                t = t->next;
                pos--;
            }
            new_node->pre = t->pre;
            new_node->next = t;
            t->pre->next = new_node;
            t->pre = new_node;
        }
    }
}

void delete_val()
{
    int d, c = 1;
    printf("Enter the value to be deleted: ");
    scanf("%d", &d);

    struct node *t = head;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        while(t != NULL)
        {
            if(t->data == d)
            {
                break;
            }
            t = t->next;
            c++;
        }
        if(t != NULL)
        {
            if(c==1)
            {
                head = t->next;

                if(head != NULL)
                    t->next->pre = NULL;

                free(t);
            }

            else
            {
            t->pre->next = t->next;

            if( t->next != NULL)
                t->next->pre = t->pre;

            free(t);
            }
        }
        else
        {
            printf("Element not found\n");
        }
    }
}

void display()
{
    struct node *t = head;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        while (t != NULL)
        {
            printf("%d\n", t->data);
            t = t->next;
        }
    }
}

