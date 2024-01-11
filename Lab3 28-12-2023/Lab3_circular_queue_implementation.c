
#include<stdio.h>
#include<stdlib.h>
#define max 3

void enqueue(int e);
int dequeue();
void display();

int q[max], front = -1, rear = -1, j = 0;

void main(){
    int choice, ele;
    while(1){
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
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

            default:
                printf("Enter a valid choice.");
                continue;
        }

    }
}


void enqueue(int e){
    if((rear-front) == max-1 || (front==(rear+1))){
        printf("Queue is full.");
        exit(0);
    }
    else{
        if(front == -1)
            rear = front = 0;
        else
            rear = (rear+1) % (max);
    }
    q[rear] = e;
    printf("Element inserted!");
}


int dequeue() {
    int item;

    if (front == -1) {
        printf("Queue is empty\n");
        exit(0);
    }

    item = q[front];

    if (front == rear) {
        // Only one element in the queue
        front = rear = -1;
    } else {
        front = (front + 1) % max;
    }

    return item;
}



void display() {

    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    if(rear>=front)
    {
        printf("Elements of the queue:\n");

        for(int i=front; i<=rear; i++)
            printf("%d\n", q[i]);
    }
    else{
        printf("Elements of the queue:\n");
       for(int i=front;i<=max-1;i++)
            printf("%d\n", q[i]);


        for(int i=0;i<=rear;i++)
            printf("%d\n", q[i]);

    }
}


