#include<stdio.h>
#include<stdlib.h>
#define max 6

void enqueue(int e);
int dequeue();
void display();

int q[max], front = -1, rear = -1, j = 0;

void main(){
    int choice, ele;
    while(1){
        printf("\nEnter 1 for inserting element into the queue\n");
        printf("Enter 2 for deleting element from the queue\n");
        printf("Enter 3 for displaying of the queue\n");
        printf("Enter 4 to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter the element to be inserted into the queue\n");
                scanf("%d",&ele);
                enqueue(ele);
                break;
            case 2:
                printf("Element %d is deleted from the queue\n",dequeue());
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Program ends successfully!!");
                exit(0);
                break;
            default:
                printf("Enter a valid choice.");
                continue;
        }
        continue;
    }
}


void enqueue(int e)
{
    if(rear == max-1){
        printf("Queue is full\n");
        exit(0);
    }
    else
    {   if(rear == -1)
        {
        front=rear=0;
        q[rear] = e;
        }
        else
        {
            rear+=1;
            q[rear] = e;
        }
        printf("Element inserted!\n");
    return;
}
}

int dequeue()
{
    if(front > rear || front == -1){
        printf("Queue is empty\n");
        exit(0);
    }
    else{
        return q[front++];
    }
}

void display()
{
    if(front == -1 || front > rear){
        printf("Queue is empty\n");
        exit(0);
    }
    else{
        printf("Elements of the queue:\n");
        for(int i=front; i<=rear; i++)
            printf("%d\n",q[i]);
    }
}

