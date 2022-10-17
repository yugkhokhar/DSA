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



int heightoftree(node*root){
if(root==NULL) return 0;
int lheight=heightoftree(root->left);
int rheight=heightoftree(root->right);
return max(lheight,rheight)+1;
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