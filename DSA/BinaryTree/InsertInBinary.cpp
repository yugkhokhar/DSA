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


node* insertatEnd(int val,node*root)
{
    if(root==NULL)
    {
        return new node(val);
    }
    if(val>root->data){
        insertatEnd(val,root->right);
    }
    else{
        insertatEnd(val,root->left);
    }

    return root;
}


//left root right

void printinorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
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

node*newroot=insertatEnd(20,root);
printinorder(newroot);


    return 0;
}