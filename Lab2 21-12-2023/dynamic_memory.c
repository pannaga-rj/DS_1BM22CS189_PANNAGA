#include<stdlib.h>
#include<stdio.h>
void main()
{
    int  n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Using Malloc\n");
    int *ptr = (int*) malloc(n*sizeof(int));

    printf("Enter the elements of ptr\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);

    }
    printf("Entered elements are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);
    }

    printf("\nUsing Calloc\n");
    int *ptr1 = (int*) calloc(n, sizeof(int));
    printf("Enter the elements of ptr1\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr1[i]);

    }
    printf("Entered elements of ptr1 using calloc are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ptr1[i]);
    }


    free(ptr);
    printf("Malloc Memory successfully freed.\n");


    printf("\nNow we are reallocating memory to double of the initial memory\n");
    ptr1 = (int*)realloc(ptr1, 2*n*sizeof(int));
    printf("Memory reallocated\nEnter %d elements now\n", (2*n - n));

    for(int i=n;i< 2*n;i++)
    {
        scanf("%d",&ptr1[i]);

    }
    printf("Entered elements of ptr1 after reallocating are\n");
    for(int i=0;i< 2*n;i++)
    {
        printf("%d\n",ptr1[i]);
    }
}
