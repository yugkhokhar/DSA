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

//TC:O(N^2)


int heightoftree(node*root){
if(root==NULL) return 0;
int lheight=heightoftree(root->left);
int rheight=heightoftree(root->right);
return max(lheight,rheight)+1;
}

int diameter(node*root){
    if(root==NULL) return 0;
    int lheight=heightoftree(root->left);
    int rheight=heightoftree(root->right);
    int currheight=lheight+rheight+1;

int ldiameter=diameter(root->left);
int rdiameter=diameter(root->right);


return max(currheight,max(ldiameter,rdiameter));

}


//TC O(N)
int caldiameter(node*root,int*height){

if(root==NULL) {
*height=0;
return 0;
}
int lh=0,rh=0;
int ldiamter=caldiameter(root->left,&lh);
int rdiamter=caldiameter(root->right,&rh);


int currdiamter=lh+rh+1;
*height=max(lh,rh)+1;
return max(currdiamter,max(ldiameter,rdiameter));
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
cout<<diameter(root);
 
return 0;
}