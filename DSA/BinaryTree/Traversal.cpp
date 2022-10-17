#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node*left;
    node*right;
node(int val)
{
    data=val;
    left=right=NULL;
}
};


void Preorder(node*root)
{
    if(root==NULL)
    return;
cout<<root->data<<" ";
Preorder(root->left);
Preorder(root->right);
}

void Inorder(node*root)
{
    if(root==NULL)
    return;

Inorder(root->left);
cout<<root->data<<" ";
Inorder(root->right);
}

void Postorder(node*root)
{
    if(root==NULL)
    return;

Postorder(root->left);
Postorder(root->right);
cout<<root->data<<" ";

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

Preorder(root);
cout<<"\n";
Inorder(root);
cout<<"\n";
Postorder(root);
cout<<"\n";

    return 0;
}