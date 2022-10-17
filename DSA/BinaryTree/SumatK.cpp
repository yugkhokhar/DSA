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




int SumAtk(node*root,int k){
    if(root==NULL)return -1;
    int level=0,sum=0;
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
         node*front=q.front();
         q.pop();
    if(front!=NULL){ 
        if(level==k){
            sum+=front->data;
        }
        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
    }
  else if(!q.empty()){
        q.push(NULL);
        level++;
    }
    }
return sum;
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

cout<<SumAtk(root,2);
    return 0;
}