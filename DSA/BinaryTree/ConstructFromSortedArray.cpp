#include<bits/stdc++.h>

using namespace std;


class node{
    public:
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};

node*Construct(int array[],int start,int end){


if(start>end) return NULL;

int mid=(start+end)/2;
node*root=new node(array[mid]);

root->left=Construct(array,start,mid-1);
root->right=Construct(array,mid+1,end);

return root;
}

void Inorder(node*root) {
    if(root==NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);

}


int main(){
 int a[]={10,20,30,40,50,60};
 int size=sizeof(a)/sizeof(a[0]);
 node*root=Construct(a,0,size-1);
 Inorder(root);
    return 0;
}