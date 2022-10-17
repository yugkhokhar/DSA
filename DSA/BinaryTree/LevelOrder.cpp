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




void LevelOrder(node*root)
{

if(root==NULL)
{return ;}

queue<node*>q;

q.push(root);
q.push(NULL);
while (!q.empty())
{
  node*front=q.front();
  q.pop();
  if(front!=NULL){
    cout<<front->data<<" ";
    if(front->left!=NULL) q.push(front->left);
    if(front->right!=NULL) q.push(front->right);
  }
  else if(!q.empty()){
    q.push(NULL);
  }
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
LevelOrder(root);
    return 0;
}