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


node*InorderSuccessror(node*root){
    node*temp=root;
    while(temp->left!=NULL) temp=temp->left;
    return temp;
}

node*Delete(node*root,int target){

if(root==NULL)return NULL;

if(root->data<target){
    root->right=Delete(root->right,target);
}

else if(root->data>target){
    root->left=Delete(root->left,target);
}
else{
//Case 1 : Node is a leaf node
if(root->left==NULL && root->right==NULL){
delete(root);
return NULL;
} 

//Case2: Element With One Child Node;
if(root->right==NULL ){
node*temp=root->left;
delete(root);
return temp;
}

if (root->left==NULL ){
node*temp=root->right;
delete(root);
return temp;
}

//Case 3 : Element With Two Child
node*ans=InorderSuccessror(root->right);
root->data=ans->data;
root->right=Delete(root,ans->data);
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
 cout<<endl;
root=Delete(root,8);
Inorder(root);
    return 0;
}