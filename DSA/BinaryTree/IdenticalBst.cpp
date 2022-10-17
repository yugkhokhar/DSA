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

bool isIdentical(node*root1,node*root2){

if(root1==NULL && root2==NULL) return true;
else if (root1==NULL || root2==NULL) return false;

else {
    bool cond1=root1->data==root2->data;
    bool cond2=isIdentical(root1->left,root2->left);
    bool cond3=isIdentical(root1->right,root2->right);
    if(cond1 && cond2 && cond3) return true;
    else{
        return false;
    }
}

}

int main()
{
node*root1=new node(10);
root1->left=new node(20);
root1->right=new node(30);
root1->left->left=new node(40);

root1->right->left=new node(60);
root1->right->right=new node(70);


node*root2=new node(10);
root2->left=new node(20);
root2->right=new node(30);
root2->left->left=new node(40);
root2->left->right=new node(50);
root2->right->left=new node(60);
root2->right->right=new node(70);

if(isIdentical(root1,root2)) cout<<"Identical"<<endl;
else cout<<"Not Identical";
    return 0;
}