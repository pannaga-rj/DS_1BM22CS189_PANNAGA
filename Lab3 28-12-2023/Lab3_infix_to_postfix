#include<stdio.h>
#include<ctype.h>
#define max 15

void push(char a);
char pop();
int precedence(char b);

char stack[max];
int top = -1;

void main()
{
    char infix[max], p, postfix[max];
    printf("Enter the infix expression: ");
    scanf("%s",infix);
    int j = 0;
    push('(');
    for(int i=0;i<strlen(infix);i++)
    {
        if(isalnum(infix[i])){
            postfix[j] = infix[i];
            j+=1;
        }
        else if(infix[i]== '+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' || infix[i]=='^'){
            if(precedence(infix[i]) > precedence(stack[top]))
                push(infix[i]);

            else if(precedence(infix[i]) <= precedence(stack[top])){
                while(1){
                    p = pop();
                    if (p =='('){
                        push(p);
                        break;
                    }

                    postfix[j] = p;
                    j+=1;

                }
                push(infix[i]);
            }
        }
    }
while(top!=-1){
    char y = pop();
    if (y == '(')
        break;
    postfix[j] = y;
    j+=1;
}
    postfix[j] = '\0';
    printf("%s",postfix);
}



void push(char a){
    if(top == max-1){
        printf("Stack overflow");
        exit(0);
    }
    else{
        stack[++top] = a;
    }
}

char pop(){
    if(top == -1){
        printf("Stack Underflow");
        exit(0);
    }
    else
        return stack[top--];
}

int precedence(char b){
    if(b == '^')
        return 3;
    else if(b == '/' || b == '*')
        return 2;
    else if(b == '+' || b == '-')
        return 1;
    else
        return 0;
}
