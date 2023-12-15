#include<stdio.h>
void find_last_occurence(int n, int Array[], int se)
{
    int index = -1;
    for(int i = n-1; i>=0; i--)
    {
        if(Array[i] == se)
        {
            index = i;
            printf("Last Occurence of the element is %d",index);
            break;
        }

    }
    if(index == -1)
        printf("Element not found in the given array");
}


void main()
{
    int n;

    printf("Enter the size of the array\n");
    scanf("%d",&n);

    int se, Array[n];

    printf("Enter the elements of the array: \n");
    for(int i=0;i < n; i++)
    {
        scanf("%d",&Array[i]);
    }

    printf("Enter the element whose last occurence to be found\n");
    scanf("%d", &se);
    find_last_occurence(n, Array, se);

}
