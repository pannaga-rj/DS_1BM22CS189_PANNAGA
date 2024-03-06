#include<stdio.h>
# define ts 3

int hash_array[ts];

void hashing(int key)
{
    int hkey, index;
    int i = 0;
    hkey = key % ts;
    while(i<ts)
    {
        index = (hkey+i) % ts;
        if(hash_array[index] == -1)
        {
            hash_array[index] = key;
            break;
        }
        i = i+1;
    }
}

void print()
{
    for(int i=0;i<ts;i++)
    {
        printf("%d\n",hash_array[i]);
    }
}

void search(int s)
{
    int hkey = s % ts;
    int i = 0, flag = 0;
    int index;
    while(i < ts)
    {
        index = (hkey+i) % ts;
        if(hash_array[index] == s)
        {
            flag = 1;
            printf("Element found at pos %d",index);
            break;
        }
        i+=1;
    }

    if(flag == 0)
        printf("Not found");

}

void main()
{
    int key, s;
    for(int j=0;j<ts;j++)
    {
        hash_array[j] = -1;
    }

    for(int c = 0;c<ts;c++)
    {
        printf("Enter the value: ");
        scanf("%d",&key);
        hashing(key);
    }
    print();

    printf("Enter the key to be searched: ");
    scanf("%d", &s);
    search(s);
}
