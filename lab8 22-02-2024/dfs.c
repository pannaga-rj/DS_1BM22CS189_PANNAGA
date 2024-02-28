// Depth wise Search
#include<stdio.h>

# define r 5

int a[r][r] = {{1,0,1,0}, {0,0,1,1}, {0,1,0,1}, {1,1,1,1}};
int v[r];

void dfs(int root)
{
    printf("%d\t",root);
    v[root] = 1;
    for(int i=0;i<r;i++)
    {
        if(a[root][i] && !v[i])
        {
            dfs(i);
        }
    }
}
void main()
{
    int  root;
    for(int i=0;i<r;i++)
    {
        v[i] = 0;
    }

    printf("Enter the root: ");
    scanf("%d",&root);
    printf("Path\n");
    dfs(root);
}
