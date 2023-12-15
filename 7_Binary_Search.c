#include<stdio.h>

void search(int n, int a[], int se)
{
    int mid,pos = -1, low = 0, high = n-1;
    while(low <= high)
    {
        mid = (low+high)/2;
        if(a[mid] == se)
        {
            pos = mid + 1;
            printf("Element found succesfully at position %d",pos);
            break;
        }
        else if(se > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    if(pos == -1)
        printf("Search Unsuccessful");
}



void main()
{
    int n;

    printf("Enter the size of the array\n");
    scanf("%d",&n);

    int se, Array[n];

    printf("Enter the elements of the array in the sorted manner: \n");
    for(int i=0;i < n; i++)
    {
        scanf("%d",&Array[i]);
    }

    printf("Enter the search element\n");
    scanf("%d", &se);
    search(n, Array, se);
}
