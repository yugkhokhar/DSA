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


class Info{
    public:
    int min;
    int max;
    int size;
    int ans;
    bool isBST;
};

Info MaxsizeBSTinBT(node*root){


if(root==NULL) return {INT_MAX,INT_MIN,0,0,true};
if(root->left==NULL && root->right==NULL) return {root->data,root->data,1,1,true};

Info leftInfo=MaxsizeBSTinBT(root->left);
Info rightInfo=MaxsizeBSTinBT(root->right);

Info curr;
curr.size=1+leftInfo.size+rightInfo.size;

//is bst root node
if(leftInfo.isBST && rightInfo.isBST && root->data>leftInfo.max && root->data<rightInfo.min){

curr.ans=curr.size;
curr.isBST=true;
curr.min=min(leftInfo.min,min(root->data,rightInfo.min));
curr.max=max(rightInfo.max,max(root->data,leftInfo.max));
return curr;
}

//Not BST root node
    curr.isBST=false;
    curr.ans=max(leftInfo.ans,rightInfo.ans);
    return curr;

}
node*InsertNode(node*root,int val){

if(root==NULL) return new node(val);

if(root->data<val){
    root->right=InsertNode(root->right,val);
}
if(root->data>val){
    root->left=InsertNode(root->left,val);
}

return root;

}

int main()
{
 node*root=NULL;
 root=InsertNode(root,10);
 InsertNode(root,20);
 InsertNode(root,8);
 InsertNode(root,25);
 InsertNode(root,50);
 InsertNode(root,7);

cout<<MaxsizeBSTinBT(root).ans<<endl;
    return 0;
}