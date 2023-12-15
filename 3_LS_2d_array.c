#include<stdio.h>
#include<string.h>

void search(int n, char Array[][10], char se[])
{
    int c=0;
    for(int i = 0; i < n; i++)
    {
        if(strcmp(Array[i] , se) == 0)
        {
            c = 1;
            printf("Element found successfully at position %d",i+1);
            break;
        }
           //printf("%s\n", Array[i]);
    }
    if (c==0)
        printf("Element not found");
}



void main()
{
    int n;

    printf("Enter the size of the array\n");
    scanf("%d",&n);

    char se[10], Array[n][10];

    printf("Enter the elements of string array: \n");
    for(int i=0;i < n; i++)
    {
        scanf("%s",&Array[i]);
    }

    printf("Enter the search element\n");
    scanf("%s", &se);
    search(n, Array, se);



}
