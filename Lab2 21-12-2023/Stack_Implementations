#include<stdio.h>
#include<stdlib.h>

#define size 10

void push(int i, int a[]);
void pop();
void display(int a[]);

int top = -1;
int a[size],i;



void main(){
int choice;

while(1){
        printf("Enter 1 for push operations\n");
        printf("Enter 2 for pop operations\n");
        printf("Enter 3 for display\n");
        printf("Enter 4 to exit\n");

        scanf("%d",&choice);
        switch (choice){
        case 1:
            printf("Enter the element to be pushed\n");
            scanf("%d",&i);
            push(i,a);
            break;

        case 2:
            pop();
            break;
        case 3:
            display(a);
            break;
        case 4:
            printf("Programs ends successfully\n");
            exit(0);
        }
    }
}

void push(int i,int a[]){
    if(top == size-1){
        printf("Stack overflow, cannot insert a element into a stack\n");
        exit(0);
    }
    else{
    top = top+1;
    a[top] = i;
    printf("Element pushed successfully\n");
    return;
    }
}

void pop(){
    if(top == -1){
    printf("Stack underflow, cannot pop a element from a stack\n");
    exit(0);
    }
    else{
    top = top-1;
    printf("Element popped successfully\n");
    return;
    }
}

void display(int a[]){

    if(top == -1){
    printf("Stack Underflow");
    exit(0);
    }
    else{
        printf("Elements in the stack\n");
        for(int j=0;j<=top;j++)
        {
            printf("%d\n",a[j]);
        }
        return;
    }
}
