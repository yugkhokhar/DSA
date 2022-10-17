#include<bits/stdc++.h>

using namespace std;


class node{
    public:
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};


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

void Inorder(node*root){
    if(root==NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);

}

int main(){
 node*root=NULL;
 root=InsertNode(root,10);
 InsertNode(root,20);
 InsertNode(root,8);
 InsertNode(root,7);
Inorder(root);
    return 0;
}