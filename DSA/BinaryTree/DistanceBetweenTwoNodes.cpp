#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;
node(int val)
{
    data=val;
    left=right=NULL;
}
};



node*LCA(node*root,int n1,int n2){

if(root==NULL )return NULL;
if(root->data==n1 ||root->data==n2) return root;

node*left=LCA(root->left,n1,n2);
node*right=LCA(root->right,n1,n2);


if(left!=NULL && right!=NULL){
    return root;
}
if(left==NULL && right==NULL){
    return NULL;
}
if(left!=NULL){
    return LCA(root->left,n1,n2);
}
return LCA(root->right,n1,n2);

}


int findDistance(node*root,int numbertofind,int dist){

if(root==NULL) return -1;
if(root->data==numbertofind) return dist;

int left=findDistance(root->left,numbertofind,dist+1);

if(left!=-1)
{
    return left;
}
return findDistance(root->right,numbertofind,dist+1);


}

int distanceBetweenNodes(node*root,int n1,int n2){


node*lca=LCA(root,n1,n2);

int d1=findDistance(lca,n1,0);
int d2=findDistance(lca,n2,0);

return d1+d2;




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
cout<<distanceBetweenNodes(root,8,7);
 return 0;
}