

//CASE 1: NO CHILD OF DELETEDD NODE
//CASE 2: ONE CHILD OF DELETEDD NODE
//CASE 3:TWO CHILD OF DELETED NODE


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

node*Delete(node*root,int val)
{
    //search
    if(root==NULL)
    {
        return root;
    }
else if(val<root->data)
{
    root->left=Delete(root->left,val);
}
else if(val>root->data)
{
    root->right=Delete(root->right,val);
}

else
{
//when the key is found
  if(root->left==NULL && root->right==NULL)
    {
        free(root);
        root=NULL;
    }

else if(root->left==NULL)
{
    node*temp=root->right;
    root=root->right;
    free(temp);
}
else if(root->right==NULL)
{
    node*temp=root->left;
    root=root->left;
    free(temp);
}
    
    else{

node*temp=root->right;
while (temp->left!=NULL)
{
    temp=temp->left;
}
root->data=temp->data;

root->right=Delete(root->right,temp->data);
    }
 
return root;

}
}



int main()
{

    node*root1=new node(10);
    root1->left=new node(20);
    root1->right=new node(30);
    root1->left->left=new node(40);
    root1->right->right=new node(50);


    return 0;
}