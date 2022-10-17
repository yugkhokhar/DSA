#include<bits/stdc++.h>

using namespace std;


struct node
{
    int data;
    node*left;
    node*right;

node(int val)
{
    data=val;
    left=right=NULL;
}
};



bool checkBst(node*root,int min,int max)
{
    if(root==NULL)
    return true;
   
   //if we set the min  and max values  for a tree then we need to check that everytime the 
   //root value is between min and max

   if(root->data<min || root->data>max)
   return false;

return (checkBst(root->left,min,root->data-1) && checkBst(root->right,root->data+1,max));

}



int main()
{
    
    node*root1=new node(30);
    root1->left=new node(10);
    root1->right=new node(40);
    root1->left->left=new node(5);
    root1->right->right=new node(50);

checkBst(root1,5,50);

    return 0;
}