#include<stdio.h>
int maximum(int n, int a[])
{
   int max = a[0];
   for(int i=0; i<n ; i++)
   {
       if (a[i] > max)
        max = a[i];
   }
   return max;
}

int minimum(int n, int a[])
{
   int min = a[0];
   for(int i=0; i<n ; i++)
   {
       if (a[i] < min)
        min = a[i];
   }
   return min;
}


void main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);

    int max, min, Array[n];

    printf("Enter the elements of the array in the sorted manner: \n");
    for(int i=0;i < n; i++)
    {
        scanf("%d",&Array[i]);
    }


    max = maximum(n, Array);
    min = minimum(n, Array);

    printf("%d is the maximum element in the array\n%d is the minimum element in the array",max,min);
}
