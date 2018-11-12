#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k[5]={4,7,5,3,6},temp,n=5;
clrscr();
//printf("Enter the no. of numbers: ");
//scanf("%d",&n);
/*for(i=0;i<n;i++)
{
scanf("%d",&k[i]);
} */
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(k[i]>k[j])
{
temp=k[i];
k[i]=k[j];
k[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d ",k[i]);
}
}

