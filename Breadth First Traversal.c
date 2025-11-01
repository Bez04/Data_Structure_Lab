#include <stdio.h>
#include <stdlib.h>

int a[20][20], q[20], visited[20];
int n, i, j;
int f = 0, r = -1; // front & rear for queue

void bfs(int start) {
    // Enqueue start node
    q[++r] = start;
    visited[start] = 1;

    while (f <= r) {
        int current = q[f++]; // Dequeue front element
        printf("%d ", current);

        for (i = 1; i <= n; i++) {
            if (a[current][i] && !visited[i]) { // If edge exists and not visited
                q[++r] = i;     // Enqueue
                visited[i] = 1; // Mark visited
            }
        }
    }
}

int main() {
    int v;
    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter the adjacency matrix (use 0 or 1):\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 1; i <= n; i++) {
        visited[i] = 0;
        q[i] = 0;
    }

    printf("\nEnter the starting vertex: ");
    scanf("%d", &v);

    printf("\nThe nodes reachable from vertex %d are:\n", v);
    bfs(v);

    return 0;
}=start;
visited[start]=1;
for(i=1;i<=n;i++)
 {
   if(a[start][i]&&!visited[i])
  {
   q[++r]=i; 
   visited[i]=1;
   printf("%d ",q[r]);
   bfs(q[f++]);
  }
 }
}
void main()
{
  int v;
clrscr();
printf("\n Enter the number of vertices:");
scanf("% d",&n);
for(i=1;i<n;i++)
 {
 q[i]=0; 
 visited[i]=0;
 }
printf("\n Enter values in adjacency matrix:\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
 {
 scanf("% d",&a[i][j]);
 }
}
printf("\n Enter the starting vertex:");
scanf("% d", &v);
printf("\n The node which are reachable are:\n");
printf("% d ",v);
bfs(v);
getch();
}
