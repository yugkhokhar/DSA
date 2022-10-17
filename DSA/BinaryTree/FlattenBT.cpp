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

void FlattenBt(node*root){

if(root==NULL || (root->left!=NULL && root->right!=NULL)) return;


if(root->left!=NULL){
    FlattenBt(root->left);
    node*temp=root->right;
    root->right=root->left;
    root->left=NULL;
    node*t=root->right;
    while(t->right!=NULL) t=t->right;
     t->right=temp;

}
FlattenBt(root->right);

}
void Preorder(node*root)
{
    if(root==NULL)
    return;
cout<<root->data<<" ";
Preorder(root->left);
Preorder(root->right);
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
FlattenBt(root);
Preorder(root);
 
return 0;
}