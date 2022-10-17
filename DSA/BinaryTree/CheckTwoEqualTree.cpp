#include<bits/stdc++.h>

using namespace std;

struct node{
    node*left;
    node*right;
    int data;
node(int val)
{
    data=val;
    left=NULL;
    right=NULL;
}

};



bool isSame(node*root1,node*root2)
{
    if(root1==NULL && root2==NULL)
    return true;
    if(root1==NULL||root2==NULL)
     return false;

     if(root1->data==root2->data && isSame(root1->left,root2->left) && isSame(root1->right,root2->right))
     return true;

}

int main()
{

    node*root1=new node(10);
    root1->left=new node(20);
    root1->right=new node(30);
   root1->left->left=new node(40);
     root1->right->right=new node(50);

      node*root2=new node(10);
    root1->left=new node(20);
    root1->right=new node(30);
   root1->left->left=new node(40);
     root1->right->right=new node(50);

     if(isSame(root1,root2))
     {
         cout<<"IS SAME";
     }
     else{
         cout<<"NOT SAME";
     }
     
    return 0;
}