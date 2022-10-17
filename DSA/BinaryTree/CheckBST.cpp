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


node*InsertNode(node*root,int val){

if(root==NULL) return new node(val);

if(root->data<val){
    root->right=InsertNode(root->right,val);
}
if(root->data>val){
    root->left=InsertNode(root->left,val);
}

return root;

}


bool isValid(node*root,node*min,node*max){

if(min!=NULL && root->data<=min->data|| max!=NULL && root->data>=max->data) return false;

bool isleftvalid=isValid(root->left,min,root);
bool isright=isValid(root->left,root,max);

return isleftvalid&&isright;

}



int main(){
 node*root=NULL;
 root=InsertNode(root,10);
 InsertNode(root,20);
 InsertNode(root,8);
 InsertNode(root,7);
if(isValid(root,NULL,NULL)) cout << "Is Valid" << endl;
else cout << "Is Not Valid" << endl;
    return 0;
}