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

int search(int inorder[],int start,int end,int curr){
    for (int i = start; i <=end; i++)
    {
        if(inorder[i]==curr) return i;
    }
    return -1;
}


node*buildtree(int preorder[],int inorder[],int start,int end){

static int idx=0;
if(start>end) return NULL;
int curr=preorder[idx];
idx++;
node*newnode=new node(curr);
if(start==end) return newnode;

int position=search(inorder,start,end,curr);


newnode->left=buildtree(preorder,inorder,start,position-1);
newnode->right=buildtree(preorder,inorder,position+1,end);

return newnode;

}







void Inorder(node*root)
{
    if(root==NULL)
    return;

Inorder(root->left);
cout<<root->data<<" ";
Inorder(root->right);
}



int main()
{
int preorder[]={1,2,4,3,5};
int inorder[]={4,2,1,5,3};
node*root=buildtree(preorder,inorder,0,4);
Inorder(root);


    return 0;
}