#include<iostream.h>
#include<conio.h>
int partition(int a[],int l,int u)
{
int v,i,j,temp;
v=a[l];
i=l;
j=u+1;
do{
do i++;
while(a[i]<v && i<=u);
do j--;
while(u<a[j]);
if(i<j)
{
temp =a[i];
a[i]=a[j];
a[j]=temp;
}}while(i<j);
a[l]=a[j];
a[j]=v;
return(j);
}
void quicksort(int a[],int l,int n)
{
int j;
if(l<n)
{
j=partition(a,l,n);
quicksort(a,l,j-1);
quicksort(a,j+1,n);
}
}
void main()
{
int a[5]={4,2,1,5,3},n=5,i;
clrscr();
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
quicksort(a,0,n-1);
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
