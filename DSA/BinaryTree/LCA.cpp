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


node*lowestCommonAncestor(node*root,node*node1,node*node2)
{
if(root==NULL)
return root;


else if(node1->data==root->data && node2->data==root->data)
return root;

else if((node1->data<root->data && node2->data>root->data) || (node2->data<root->data && node1->data>root->data))
{
    return root;
}

else if(node1->data<root->data && node2->data<root->data)
{
    return lowestCommonAncestor(root->left,node1,node2);
}
else{
    return lowestCommonAncestor(root->right,node1,node2);
}





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