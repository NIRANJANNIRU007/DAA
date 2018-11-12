#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left,*right;
};
class bst{
struct node* root;
public:
bst(){
root=NULL;
}
void insert(int d){
insert(root,d);
}
void find(int d){
find(root,d);
}
void inorder(){
inorder(root);
}
void preorder(){
preorder(root);
}
void postorder(){
postorder(root);
}
struct node* insert(struct node* temp,int d)
{
if(temp->data==NULL)
{
temp->data=d;
return temp;
}
else if(temp->data<d)
insert(temp->right,d);
else if(temp->data>d)
insert(temp->left,d);
return temp;
}
struct node* find(struct node* temp,int d)
{
int level=1;
if(temp->data==NULL)
{
cout<<"found nothing";
return temp;
}
else if(temp->data == d)
cout<<"level: "<<level<<temp->data;
else if(temp->data > d)
{
level++;
find(temp->left,d);
}
else if(temp->data < d)
{level++;
find(temp->right,d);
}
}
int inorder(struct node *temp)
{
if(temp->data == NULL)
return 0;
inorder(temp->left);
cout<<temp->data<<" ";
inorder(temp->right);
return 1;
}
int preorder(struct node *temp)
{
if(temp->data ==NULL)
return 0;
cout<<temp->data<<" ";
preorder(temp->left);
preorder(temp->right);
return 1;
}
int postorder(struct node *temp)
{
if(temp->data ==NULL)
return 0;
postorder(temp->left);
postorder(temp->right);
cout<<temp->data<<" ";
}
};
void main()
{
bst b;
clrscr();
b.insert(10);
b.inorder();
}