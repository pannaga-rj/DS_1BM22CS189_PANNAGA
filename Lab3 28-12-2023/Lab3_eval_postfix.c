#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define max 20

void push(char b);
char pop();
int eval_postfix(char a[]);
int compute(char c, int m, int n);

int top = -1;
char stack[max];


void main(){
    char postfix[max];
    printf("Enter numerical postfix expression: ");
    scanf("%s",postfix);
    int r = eval_postfix(postfix);
    printf("Solution for the above postfix expression is %d",r);
}

int eval_postfix(char a[]){
    int a1,b1,res;
    for(int i=0;i<strlen(a);i++){
        if(isalnum(a[i]))
            push(a[i]);
        else if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' || a[i]=='%'){
            a1 = pop() - '0';
            b1 =  pop() - '0';

            if (a[i] == '/' && b1 == 0) {
                printf("Error: Division by zero\n");
                exit(1);
            }

            res = compute(a[i], b1, a1);
            push(res + '0');
        }
    }
    return stack[top] - '0';
}

void push(char b){
    if(top == max-1){
        printf("Stack Overflow");
        exit(0);
    }
    else
        stack[++top] = b;
}

char pop(){
    if(top == -1){
        printf("Stack Underflow");
        exit(0);
    }
    else
        return stack[top--];
}

int compute(char c, int m, int n){

    switch(c){
        case '+':
            return m + n;
        case '-':
            return m - n;
        case '*':
            return m * n;
        case '/':
            return m / n;
        case '%':
            return m % n;
        default:
            return 0;
    }

}
