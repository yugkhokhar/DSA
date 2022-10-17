#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node*left;
    node*right;
node(int val)
{
    data=val;
    left=right=NULL;
}
};

int maxpathUtil(node*root,int &ans){

if (root==NULL)
{
    return 0;
}
int left=maxpathUtil(root->left,ans);
int right=maxpathUtil(root->right,ans);


int nodemax=max(max(root->data+left,root->data+right),
                max(root->data+left+right,root->data));
ans=max(ans,nodemax);
int singlepath=max(root->data,max(root->data+right,root->data+left));
return singlepath;

}


int MaxsumPath(node*root){
int ans=INT_MIN;
    if(root==NULL) return -1;
   maxpathUtil(root,ans);
   return ans;
}



int main()
{
node*root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(40);
root->left->right=new node(50);
root->right->left=new node(6);
root->right->right=new node(7);
cout<<MaxsumPath(root);
 
return 0;
}