#include<bits/stdc++.h>

using namespace std;

//structure of node in bst

struct Node{
    int data;
    Node*left,*right;
 
 Node(int val)
 {
     data=val;
     left=NULL;
     right=NULL;
 }
};


//Insert  in an bst

Node* insert(Node*root,int val)
{
    if(root==NULL)
    {
        return  new Node(val) ;
    }
 if(root->data>val)
 {
 root->left=insert(root->left,val);
 }
 else{
     root->right=insert(root->right,val);
 }

return root;

}


//print the bst in an inorder way
void inorder(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<"\n";
    inorder(root->right);
}


//search for an element in a bst

Node*search(Node*root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }

    //search in left subtree
if(root->data>key)
{
  return  search(root->left,key);
}

//search in right subtree
return search(root->right,key);


}



//DELETE AN NODE FROM BST

Node*inordersuccessor(Node*root)
{
    Node*curr=root;
    while (curr && curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}




Node*deleteNode(Node*root,int key)
{

if(root->data>key)
{
    root->left=deleteNode(root->left,key);
}

else if(root->data<key)
{
    root->right=deleteNode(root->right,key);
}

else{

    //case 1 and case 2
    if(root->left==NULL)
    {
        Node*temp=root->right;
        free(root);
        return temp;
    }
     else if(root->right==NULL)
    {
        Node*temp=root->left;
        free(root);
        return temp;
    }



//case 3 a root with 2 child and find the inorder successor
Node*temp=inordersuccessor(root->right);
root->data=temp->data;
root->right=deleteNode(root->right,temp->data);

}
return root;

}



//CONSTRUCT BST FROM PREORDER

Node*constructbst(int preorder[],int min,int max,int n,int*preorderindex,int key)
{
    if(*preorderindex>=n)
    {
        return NULL;
    }
 Node*root=NULL;
if(key>min,key<max)
{
root=new Node(key);
*preorderindex+=1;
}
if(*preorderindex<n)
{
    root->left=constructbst(preorder,min,key,n,preorderindex,preorder[*preorderindex]);
}
if(*preorderindex<n)
{
    root->right=constructbst(preorder,key,max,n,preorderindex,preorder[*preorderindex]);
}
return root;
}


//checking the bst of a tree
//tc O(N)
bool isBst(Node*root,Node*min,Node*max)
{
    if(root==NULL)
    {
        return true;
    }
    if(min!=NULL && root->data<=min->data)
    {
        return false;
    }
    if(max!=NULL && root->data>=max->data)
    {
        return false;
    }

bool leftvalid=isBst(root->left,min,root);
bool rightvalid=isBst(root->right,root,max);

return leftvalid and rightvalid;

}



// CONSTRUCT AN BALANCED BINARY TREE FROM AN SORTED ARRAY

Node*balancedbst(int arr[],int start,int end)
{
    if(start>end)
    {
        return NULL;
    }

    int mid=(start+end)/2;
    Node*root=new Node(arr[mid]);
root->left=balancedbst(arr,start,mid-1);
root->right=balancedbst(arr,mid+1,end);
return root;
}


//catalan numbers

int catalannumb(int n)
{
    if(n<=1){
        return 1;
    }

    int res=0;
    for(int i=0;i<=n-1;i++)
    {
     res+=catalannumb(i)*catalannumb(n-1-i);
    }
    return res;
}


//zig zag traversal

void zigzag(Node*root)
{
    stack<Node*>currentlevel;
    stack<Node*>nextlevel;

bool lefttoright=true;

currentlevel.push(root);

while(!currentlevel.empty())
{
   Node*temp=currentlevel.top();
   currentlevel.pop();
if(temp)
{
    cout<<temp->data;

if(lefttoright)
{
    if(temp->left)
    nextlevel.push(temp->left);

    if(temp->right)
    {
        nextlevel.push(temp->right);
    }
}
else{

//moving in right to left

if(temp->right)
{
    nextlevel.push(temp->right);
}
if(temp->left)
{
    nextlevel.push(temp->left);
}
}


}

if(currentlevel.empty())
{
    lefttoright=!lefttoright;
    swap(currentlevel,nextlevel);
}

}

}



//FIND THE BST ARE IDENTICAL

bool isidentical(Node*root1,Node*root2)
{
if(root1==NULL && root2==NULL)
{
    return true;
}
if(root1==NULL || root2==NULL)
{
    return false;
}


else{
    bool cond1=root1->data==root2->data;
    bool cond2=isidentical(root1->left,root2->left);
    bool cond3=isidentical(root1->right,root2->right);
if(cond1 && cond2 && cond3)
{
    return true;
}
else{
    return false;
}
}
}


//maximum size of an bst in a bt
struct info{
    int min;
 int max;
 int size;
 int ans;
 bool isbst;
};


info maxsizebstinbt(Node*root)
{
    if(root==NULL)
    {
        return {INT_MAX,INT_MIN,0,0,true};
    }
    if(root->left==NULL && root->right==NULL)
    {
        return {root->data,root->data,1,1,true};
    }

    info leftinfo=maxsizebstinbt(root->left);
    info rightinfo=maxsizebstinbt(root->right);


info currdata;


//DETERMINE THE CURRENT SIZE OF THE NODE WITH THE CHILDREN
currdata.size=leftinfo.size+rightinfo.size+1;

if(leftinfo.isbst && rightinfo.isbst && leftinfo.max<root->data && rightinfo.min>root->data)
{
    //SETTING THE MINIMUM VALUE AMONG CHILD AND ROOT
currdata.min=min(leftinfo.min,rightinfo.min,root->data); 

//SETTING THE MAX VALUE AMONG CHILD AND ROOT
currdata.max=max(leftinfo.max,rightinfo.max,root->data);

//SETTING THE SIZE OF BST
currdata.ans=currdata.size;


currdata.isbst=true;

return currdata;
}

currdata.ans=max(leftinfo.max,rightinfo.max);

currdata.isbst=false;

return currdata;


}





//RECOVERY OF AN BST

void calculatepointer(Node*root,Node**first,Node**mid,Node**last,Node**prev){

if(root==NULL)
{
    return;
}

calculatepointer(root->left,first,mid,last,prev);
if(*prev && root->data<(*prev)->data)
{
   if(!*first)
   {
       *first=*prev;
       *mid=root;
   }
   else{
       *last=root;
   }
}
*prev=root;
calculatepointer(root->right,first,mid,last,prev);




}

void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


void recoverbst(Node*root)
{
   if(root==NULL)
   {
       return;
   }

Node*first,*mid,*last,*prev;
first=NULL;
mid=NULL;
last=NULL;
prev=NULL;


calculatepointer(root,&first,&mid,&last,&prev);

if(first && last)
{
    swap(&(first->data),&(last->data));
}

else if(first && mid){
    swap(&(first->data),&(mid->data));
}




}















int main()
{

struct Node*root=new Node(10);
root->left=new Node(20);
root->right=new Node(30);
root->left->left=new Node(40);
root->left->right=new Node(50);
root->right->left=new Node(60);
root->right->right=new Node(70);
    return 0;
}