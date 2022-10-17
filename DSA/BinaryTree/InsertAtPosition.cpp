#include<bits/stdc++.h>


using namespace std;

struct node
{
    int data;
    node*left;
    node*right;

node(int val)
{
    data=val;
    left=right=NULL;
}
};


void insert(node*root,int value)
{
node*prev=NULL;

while (root!=NULL)
{
    prev=root;
    if(root->data==value)
    {
        return;
    }
    else if(root->data<value)
    {
        root=root->left;
    }
    
    else if(root->data>value)
    {
      root=root->right;
    }

}

node*newnode=new node(value);

if(value>prev->data)
prev->right=newnode;
else
prev->left=newnode;



 





}


int main()
{

node*root=new node(10);
root->left=new node(8);
root->right=new node(20);
root->left->left=new node(7);
root->left->right=new node(9);
root->right->left=new node(15);
root->right->right=new node(25);



    return 0;
}