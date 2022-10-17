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



node*constructbst(int preorder[],int*preoderIdx,int max,int min,int key,int n){

node*root=NULL;

if(*preoderIdx>=n) return NULL;

if(key>min && key<max){
    root=new node(key);
    *preoderIdx+=1;
}


if(*preoderIdx<n){
    root->left=constructbst(preoder,preoderIdx,key,min,key,n);
}
if(*preoderIdx<n){
    root->right=constructbst(preoder,preoderIdx,max,key,key,n);
}

return root;
}



int main(){

    return 0;
}