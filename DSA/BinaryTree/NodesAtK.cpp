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

//case 1: NODE STRUCTURE 


void printSubtree(node*root,int k){

    if(root==NULL) return;
    if(k==0) cout<<root->data<<" ";
    printSubtree(root->left,k-1);
    printSubtree(root->right,k-1);
}

//case2: ancestor

int AncestorPrint(node*root,int target,int k){

if(root==NULL) return -1;
if(root->data==target){
printSubtree(root,k);
return 0;
} 

//if the target node is found in left subtree then find the nodes in right subtree at distance k from all its ancestors

int dl=AncestorPrint(root->left,target,k);
if(dl!=-1){
if(dl+1==k) cout<<root->data<<" ";
else printSubtree(root->right,k-dl-2);
return 1+dl;
}
//if the target node is found in left subtree then find the nodes in right subtree at distance k from all its ancestors
int dr=AncestorPrint(root->right,target,k);
if(dr!=-1){
if(dr+1==k) cout<<root->data<<" ";
else printSubtree(root->left,k-dr-2);
return 1+dr;
}


return -1;


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