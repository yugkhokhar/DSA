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


void zigzagTraversal(node*root){

if(root==NULL) return ;
stack<node*>currentlevel; 
stack<node*>nextlevel;
bool isLefttoRight=true;

currentlevel.push(root);

while(!currentlevel.empty()){

node*topele=currentlevel.top();
currentlevel.pop();


if(topele){
cout<<topele->data<<" ";
if(isLefttoRight){
if(topele->left!=NULL) nextlevel.push(topele->left);
if(topele->right!=NULL) nextlevel.push(topele->right);
}

else{
if(topele->right!=NULL) nextlevel.push(topele->right);
if(topele->left!=NULL) nextlevel.push(topele->left);
}
}

if(currentlevel.empty()){
    isLefttoRight=!isLefttoRight;
    swap(currentlevel,nextlevel);
}


}

}







int main(){
 node*root=NULL;
 root=InsertNode(root,10);
 InsertNode(root,20);
 InsertNode(root,8);
 InsertNode(root,25);
 InsertNode(root,50);
 InsertNode(root,7);
 zigzagTraversal(root);
    return 0;
}