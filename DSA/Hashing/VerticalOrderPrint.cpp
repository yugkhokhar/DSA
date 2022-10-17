#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

class node{
    public:
    int key;
    node*left,*right;

    node(int num){
    key=num;
    left=NULL;
    right=NULL;    
    }
};

void VerticalOrderPrint(node*root,int hdist,map<int,vector<int>>&mp){

if(root==NULL) return;

mp[hdist].push_back(root->key);
VerticalOrderPrint(root->left,--hdist,mp);
VerticalOrderPrint(root->right,++hdist,mp);

}


int main(){
node*root=new node(10);
root->left=new node(20);
root->right=new node(30);
root->left->left=new node(40);
root->left->right=new node(50);
root->right->left=new node(60);
root->right->right=new node(70);
map<int,vector<int>>mp;
int hdist=0;
VerticalOrderPrint(root,hdist,mp);



map<int,vector<int>>::iterator it;
for(it=mp.begin();it!=mp.end();it++){
    
for(int i=0;i<(it->second).size();i++){
    cout<<(it->second)[i]<<" ";
}
cout<<endl;


}





    return 0;
}