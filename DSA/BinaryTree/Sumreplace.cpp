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

//TC O(N)

void sumreplace(node*root){

if(root==NULL) return ;

sumreplace(root->left);
sumreplace(root->right);

if(root->left!=NULL) root->data+=root->left->data;
if(root->right!=NULL) root->data+=root->right->data;



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
 cout<<heightoftree(root);
   return 0;
}