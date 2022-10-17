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

vector<node*>allPossibleBST(int start,int end){
vector<node*>trees;
if(start>end) {
trees.push_back(NULL);
return trees;
}

for (int i = start; i <=end; i++)
{
    vector<node*>leftsubtree=allPossibleBST(start,i-1);
    vector<node*>rightsubtree=allPossibleBST(i+1,end);

for (int j= 0; j < leftsubtree.size(); j++)
{
    node*leftnode=leftsubtree[j];
    for (int k =0; k < rightsubtree.size(); k++)
    {
        node*rightele=rightsubtree[k];
        node*rootnode=new node(i);
        rootnode->left=leftnode;
        rootnode->right=rightele;
        trees.push_back(rootnode);
    }
}
}

return trees;

}

void preoder(node*root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preoder(root->left);
    preoder(root->right);
}

int main(){

vector<node*>treenodes=allPossibleBST(1,3);
for (int i = 0; i < treenodes.size(); i++)
{
    cout<<i+1<<" : ";
    preoder(treenodes[i]);
    cout<<endl;
}



    return 0;
}