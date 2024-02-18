#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *l;
    struct node *r;
};

struct node *root = NULL;

struct node *create(int d)
{
    struct node *t = (struct node*)malloc(sizeof(struct node));
    t->data = d;
    t->l = t->r = NULL;
    return t;
}

struct node *insert(struct node* t, int val)
{
    if(t == NULL)
    {
        return create(val);
    }
    if(val < t->data)
    {
        t->l = insert(t->l, val);
    }
    else if(val > t->data)
    {
        t->r = insert(t->r, val);
    }
    return t;
}

struct node* inorder(struct node* root)
{
    if(root != NULL)
    {
        inorder(root->l);
        printf("%d\t",(root->data));
        inorder(root->r);
    }
}

struct node* postorder(struct node* root)
{
    if(root != NULL)
    {
        postorder(root->l);
        postorder(root->r);
        printf("%d\t",root->data);
    }
}

struct node* preorder(struct node* root)
{
    if(root != NULL)
    {
        printf("%d\t",root->data);
        postorder(root->l);
        postorder(root->r);

    }
}

void main()
{
    int ch, d, d1;
    printf("1. Insert into BST\n");
    printf("2. Display\n");
    printf("3. Exit\n");
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the element:");
            scanf("%d",&d);
            root = insert(root, d);
            break;
        case 2:
            printf("1. Preorder\n");
            printf("2. Inorder\n");
            printf("3. Postorder\n");
            printf("Choice: ");
            scanf("%d",&d1);
            switch(d1)
            {
            case 1:
                printf("Preorder Display\n");
                preorder(root);
                break;
            case 2:
                printf("Inorder Display\n");
                inorder(root);
                break;
            case 3:
                printf("Postorder Display\n");
                postorder(root);
                break;
            default:
                printf("Enter correct choice.");
                break;
            }
            break;

        case 3:
            printf("Programs ends successfully");
            exit(0);
        default:
            printf("Enter correct choice");
            break;
        }
    }
}
