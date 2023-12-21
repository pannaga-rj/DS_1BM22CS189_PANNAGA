#include<stdio.h>
void swap(int *a, int *b);
void main()
{
int a,b;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
printf("Value of a and b before swapping a=%d and b=%d\n",a,b);
swap(&a,&b);
printf("Value of a and b after swapping a=%d and b=%d",a,b);
}

void swap(int *a, int*b)
{
int temp = *a;
*a = *b;
*b = temp;
}
