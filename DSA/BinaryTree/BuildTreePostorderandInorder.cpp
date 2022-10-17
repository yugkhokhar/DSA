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


node*buildtree(int Postorder[],int inorder[],int start,int end){

static int idx=4;
if(start>end) return NULL;
int curr=Postorder[idx];
idx--;
node*newnode=new node(curr);
if(start==end) return newnode;

int position=search(inorder,start,end,curr);


newnode->right=buildtree(Postorder,inorder,position+1,end);
newnode->left=buildtree(Postorder,inorder,start,position-1);

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
int Postorder[]={4,2,5,3,1};
int inorder[]={4,2,1,5,3};
node*root=buildtree(Postorder,inorder,0,4);
Inorder(root);

    return 0;
}