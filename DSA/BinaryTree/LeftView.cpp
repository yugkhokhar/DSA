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




void LeftView(node*root){
if(root==NULL) return ;
queue<node*>q;

q.push(root);

while(!q.empty()){

int size=q.size();
for(int i=0;i<size;i++){

node*front=q.front();
q.pop();

if(i==0){
    cout<<front->data<<" ";
}
if(front->left!=NULL) q.push(front->left);
if(front->right!=NULL) q.push(front->right);

}
}

}







int main()
{
 node*root=new node(10);
root->left=new node(20);
root->right=new node(30);
root->left->left=new node(40);
root->left->right=new node(50);
root->right->left=new node(60);
root->right->right=new node(70);

LeftView(root);
    return 0;
}