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



int height(node*root){

if(root==NULL) return 0;

int left=height(root->left);
int right=height(root->right);

return max(left,right)+1;

}



bool HeightBalanceTree(node*root){

if(root==NULL) return true;


if(HeightBalanceTree(root->left)==false) return false;
if(HeightBalanceTree(root->right)==false) return false;

int lheight=height(root->left);
int rheight=height(root->right);

if(abs(lheight-rheight)<=1) return true;
else return false;
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
if(HeightBalanceTree(root)){
cout<<"Height Balance Tree";
}
else{
    cout<<"Not Balance";
}
   return 0;
}