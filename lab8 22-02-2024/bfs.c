#include <stdio.h>

#define r 4

int fr = 0;
int rear = 0;
int v[r];
int a[r][r] = {{1,0,1,0}, {0,0,1,1}, {0,1,0,1}, {1,1,1,1}};
int q[r];

void bfs(int n)
{
    int roo;
    while (fr < rear) {
        roo = q[fr++];
        printf("%d\t", roo);
        for (int j = 0; j < r; j++) {
            if (a[roo][j] && !v[j]) {
                v[j] = 1;
                q[rear++] = j;
            }
        }
    }
}

int main()
{
    int root;
    for (int i = 0; i < r; i++)
    {
        v[i] = 0;
    }

    printf("Enter the root: ");
    scanf("%d", &root);
    q[rear++] = root;
    v[root] = 1;
    bfs(root);
    return 0;
}
