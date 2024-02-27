#include<stdio.h>

struct node{
    int data;
    struct node *next;
};

struct node *head, *head1, *head3;


void create()
{
    head = (struct node*)malloc(sizeof(struct node));
    head1 = (struct node*)malloc(sizeof(struct node));
   struct node *last, *last1;
   int a[] = {1,2,3};
   int b[] = {2,5,6,4,7,8};

   head->data = a[0];
   head->next = NULL;

   head1->data = b[0];
   head1->next = NULL;

   last = head;
   last1 = head1;

   for(int i=1;i<sizeof(a)/sizeof(a[0]);i++)
   {
       struct node *t;
       t = (struct node*)malloc(sizeof(struct node));
       t->data = a[i];
       t->next = NULL;
       last->next = t;
       last = t;
   }

   for(int i=1;i<sizeof(b)/sizeof(b[0]);i++)
   {
        struct node *t1;
        t1 = (struct node*)malloc(sizeof(struct node));
        t1->data = b[i];
        t1->next = NULL;
        last1->next = t1;
        last1 = t1;
    }

}


void display_a()
{
    struct node *n = head;

    printf("A:\n");
    while(n!=NULL)
    {
        printf("%d\n",n->data);
        n = n->next;
    }
    return;
}

void display_b()
{
    struct node *n1 = head1;

    printf("B:\n");
    while(n1!=NULL)
    {
        printf("%d\n",n1->data);
        n1 = n1->next;
    }
}


void reverse()
{
    struct node *t, *pre, *cur, *aft;

    printf("Elements in B before reversing\n");

    display_b();

    t = head1;
    pre = NULL;
    cur = aft = t;

    while(cur != NULL)
    {
        aft = aft->next;
        cur->next = pre;
        pre = cur;
        cur = aft;
    }
    head1 = pre;

    printf("\n");
    printf("Elements in B after reversing\n");
    display_b();
}


void concat()
{
    struct node *n, *n1;
    if(head == NULL || head1 == NULL)
    {
        if(head == NULL)
            display_b();
        else
            display_a();
    }
    else
    {
        n=head;
        while(n!=NULL)
        {
            n1 = n;
            n = n->next;
        }
        n1->next = head1;
        display_a();
    }

}

void sort()
{
    struct node *p, *p1;
    for(p = head; p!= NULL; p=p->next)
    {
        for(p1 = p->next;p1!=NULL; p1=p1->next)
        {
            if(p->data < p1->data)
            {
                int temp = p->data;
                p->data = p1->data;
                p1->data = temp;
            }
        }
    }
    printf("A after sorting\n");
    display_a();
}

void main()
{
    create();
    display_a();
    printf("\n");
    display_b();
    printf("After Concatenation A and B\n");
    concat();
    reverse();
    sort();
}
