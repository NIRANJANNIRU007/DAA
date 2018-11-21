#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
# define infinity 9999
#define MAX 20
int g[MAX][MAX],spanning[MAX][MAX],n;
int prims();
int main()
{
clrscr();
int i,j,total_cost;
printf("enter no of vertices : ");
scanf("%d",&n);
printf("\n enter the adjacency matrix : \n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&g[i][j]);
total_cost=prims();
printf("\n spanning tree matrix :\n");
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<n;j++)
printf("%d\t",spanning[i][j]);
}
printf("\n\ntotal cost of spanning tree = %d",total_cost);
getch();
return 0;
}
int prims()
{
int cost[MAX][MAX];
int u,v,min_dist,dist[MAX],from[MAX];
int visited[MAX],edge_no,i,min_cost,j;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
if(g[i][j]==0)
cost[i][j]=infinity;
else
cost[i][j]=g[i][j];
spanning[i][j]=0;
}
dist[0]=0;
visited[0]=1;
for(i=1;i<n;i++)
{
dist[i]=cost[0][i];
from[i]=0;
visited[i]=0;
}
min_cost=0;
edge_no=n-1;
while(edge_no>0)
{
min_dist=infinity;
for(i=1;i<n;i++)
if(visited[i]==0&&dist[i]<min_dist)
{
v=i;
min_dist=dist[i];
}
u=from[v];
spanning[u][v]=dist[v];
spanning[v][u]=dist[v];
edge_no--;
visited[v]=1;
for(i=1;i<n;i++)
if(visited[i]==0&&cost[i][v]<dist[i])
{
dist[i]=cost[i][v];
from[i]=v;
}
min_cost=min_cost+cost[u][v];
}
return(min_cost);
}
