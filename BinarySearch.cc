#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int arr[50],i,n,x,flag=0,frst,last,mid;
printf("enter size of array : ");
scanf("%d",&n);
printf("\nenter array element (ascending order)\n");
for(i=0;i<n;++i)
scanf("%d",&arr[i]);
printf("\nenter the element to search : ");
scanf("%d",&x);
frst=0;last=n-1;
while(frst<=last)
{
mid=(frst+last)/2;
if(x==arr[mid])
{
flag=1;break;
}
else
if(x>arr[mid])
frst=mid+1;
else
last=mid-1;
}
if(flag==1)
printf("\nelement found at position %d",mid+1);
else
printf("\nelement not found");
getch();
return 0;
}
