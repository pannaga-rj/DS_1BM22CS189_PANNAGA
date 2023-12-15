
#include<stdio.h>
void find_search_ele(int n, int Array[], int se)
{
    int index = -1;
    for(int i = 0; i<n; i++)
    {
        if(Array[i] == se)
        {
            index = i;
            printf("Element found successfully in the given array");
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

    printf("Enter the search element\n");
    scanf("%d", &se);
    find_search_ele(n, Array, se);

}
