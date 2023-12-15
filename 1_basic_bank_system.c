#include<stdio.h>
void account_creation();
int withdrawal();
int deposit();
void balance_inquiry(int,int);

void account_creation()
{
int age,bal = 0;
char s[16];
printf("Enter your name\n");
scanf("%s",&s);
printf("Enter you age\n");
scanf("%d",&age);
printf("Account created successfuly\n");
printf("Please enter the deposit amount by clicking option 2\n");
}

int withdrawal()
{
int w;
printf("Enter the amount to be withdraw\n");
scanf("%d",&w);
printf("Rs %d is withdrawn successfuly\n",w);
return w;
}

int deposit()
{
int d;
printf("Enter the amount to deposit\n");
scanf("%d",&d);
return d;
}

void balance_inquiry(int w, int d)
{
int balance = d-w;
printf("Your balance is Rs%d\n",balance);
}




void main()
{
int choice,d=0,w=0;
while(1)
{


    printf("\nEnter 1 for Account Creation \nEnter 2 for deposit \nEnter 3 for withdrawal \nEnter 4 for balance \nEnter 5 to exit\n");
    scanf("%d",&choice);

    if(choice == 1)
    account_creation();

    if(choice == 2)
    d = deposit();

    if(choice == 3)
    w = withdrawal();

    if(choice == 4)
    balance_inquiry(w, d);

    if(choice == 5)
        {
            printf("Good Bye!!!");
            break;
        }
        //continue;
}
}


