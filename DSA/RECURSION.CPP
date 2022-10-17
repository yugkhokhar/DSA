#include<bits/stdc++.h>

#define n1 20

using namespace std;

string reverse(string input)
{
    if(input==" ")
    {
        return "";
    }


    return reverse(input.substr(1))+ input[0];
}

bool palindrome(string s1)
{
//base case
if(s1.length()==0 || s1.length()==1)
{
    return true;
}

//for shrinking the case
if(s1[0]==s1.length()-1)
{
    return palindrome(s1.substr(1,s1.length()-1));
}

return false;

}

//convert deciaml to binary

string binary_deciaml(int deciaml,string result)
{
if(deciaml==0){return "1";}

result+= deciaml % 2;

return binary_deciaml(deciaml%2,result);

}


//sum of natural number

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+sum(n-1);
}


bool binary_search(int a[],int start,int end,int key)
{
    if(start>end)
    {
        return false;
    }
    int mid=(start+end)/2;
  if(a[mid]==key)
  {
      return true;
  }
else if(a[mid]<key)
{
    binary_search(a,mid+1,end,key);
}
else if(a[mid]>key)
{
    binary_search(a,start,mid-1,key);
}
return false;



}


//fibonacci seriees

int fibo(int n)
{
if(n==0|n==1){return n;}

return fibo(n-1)+fibo(n-2);
}

//MERGE SORT
//n*log n
int merge_sort(int a[],int start,int end)
{
    if(start<end)
    {
   int mid=(start+end)/2;
   merge_sort(a,start,mid);
   merge_sort(a,mid+1,end);
   merge(a,start,mid,end);
    }

}

int merge(int a[],int start,int mid,int end)
{
   int i=start;
   int j=mid+1;
   int k=0;
int temp[end-start];

while(i<=mid && j<=end)
{


if(a[i]<a[j])
{
temp[i]=a[i];
i++;
k++;
}
else 
{

    temp[k]=a[j];
    j++;
    k++;
}

}


while(i<=mid)
{
    temp[k]=a[i];
    i++;
    k++;
}

while (j<=end)
{
    temp[k]=a[j];
    j++;
    k++;
}
for(int i=start;i<=end;i++)
{
a[i]=temp[i-start];
}


}


//merge two sorted linked list

//count sort  o(max(arr))

void countSort(int arr[],int n){

int k=arr[0];

for(int i=1;i<n;i++)
{
    k=max(k,arr[i]);
}

int a[k]={0};
for(int i=0;i<n;i++)
{
 a[arr[i]]++;
}


for(int i=1;i<=k;i++)
{
  a[i]+=a[i-1];
}

int output[n];
for(int i=n-1;i>=0;i--)
{

output[--a[arr[i]]]=a[i];

}

for(int i=0;i<n;i++)
{
    arr[i]=output[i];
    cout<<arr[i];
}


}




//DNF SORT (0,1,2)


void dnfsort(int a[],int n)
{
    int low=0;
    int mid=0;
    int high=n-1;

while(mid<=high)
{
if(a[mid]==0)
{
    swap(a[mid],a[low]);
    mid++;
    low++;
}
else if(a[mid]==1)
{
    mid++;
    
}
else{
    swap(a[mid],a[high]);
    high--;
}
}



}




//queue

class queue{
 int *arr;
 int front;
 int back;

   public:
   queue(){
   arr=new int[n1];
  front=-1;
  back=-1;
   }

void push(int x)
{
  if(back==n1-1)
  {
      cout<<"OVERFLOW";
      return ;
  }
if(front==-1)
{
front++;
arr[front]=x;
return;    
}
back++;
arr[back]=x;

}

void pop()
{
if(front==-1|| front>back)
{
    cout<<"CANNOT POP OUT";
}
front++;



}


};

//queue using 2 stack


class ques{

stack<int>s1;
stack<int>s2;


void push( int x)
{
  s1.push(x);
}

int pop()
{
 if(s1.empty() && s2.empty())
{
    cout<<"QUEUES ARE EMPTY";
    return -1;
}
if(s2.empty())
{
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
}

    int topval=s2.top();
    s2.pop();
return topval;
}

bool empty()
{
    if(s1.empty() && s2.empty())
    {
        return true;
    }
    return false;
}

};

//queue using 1 stack


class queues{

stack<int>s1;


void push( int x)
{
  s1.push(x);
}

int pop()
{
 if(s1.empty())
{
    cout<<"QUEUE ARE EMPTY";
    return -1;
}

int x=s1.top();
s1.pop();
if(s1.empty())
{
    return x;
}

int item=pop();
s1.push(x);
return item;



  
}

bool empty()
{
    if(s1.empty())
    {
        return true;
    }
    return false;
}

};


// stack using queue


class Stack{

int N;
queue<int>q1;
queue<int>q2;

void push(int x)
{

q2.push(x);
while(!q1.empty())
{
    q2.push(q1.front);
    q1.pop();
}

queue<int>q3=q1;
q1=q2;
q2=q3;

}

void pop()
{
q1.pop();
}

int top()
{
    return q1.front();
}



};

//rainwater harvesting 


int rainwater(int a[]){
int n=a.length();
int ans=0;
int left[]=new int[n];
int right[]=new int[n];

left[0]=a[0];
for(int i=1;i<n;i++)
{
left[i]=max(left[i-1],a[i]);
}

right[n-1]=a[n-1];

for(int i=n-2;i>=0;i++)
{
right[i]=max(right[i+1],a[i]);

}

for(int i=0;i<n;i++)
{
ans+=min(left[i],right[i])-a[i];

}


    return ans;
}


//stock span problem

vector<int>stockspan(vector<int>prices)
{
vector<int>ans;
stack<pair<int,int>>st;
for(auto price:prices)
{
int days=1;
while(!st.empty() && st.top().first<=price)
{
days+=st.top().second;
st.pop();
}
st.push({prices,days})
ans.push(days);


}





return ans;



}

//binary tree
struct node{

int data;
struct node*left;
struct node*right;

node(int val)
{
    data=val;
    left=NULL;
    right=NULL;
}


};


void preorder(struct node*root){
if(root==NULL)
{return ;}
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node*root){
if(root==NULL)
{return ;}
    preorder(root->left);
    cout<<root->data<<endl;
    preorder(root->right);
}

void postorder(struct node*root){
if(root==NULL)
{return ;}
    preorder(root->left);
    preorder(root->right);
        cout<<root->data<<endl;
}


//build tree using preorder and inorder


int search(int inorder[],int start,int end,int curr)
{
    for(int i=start;i<end;i++)
    {
    if(inorder[i]==curr)
    {
        return i;
    }
    }
return -1;
}


node* buildtree(int inorder[],int preorder[],int start,int end)
{

if(start>end)
{
    return NULL;
}


static int idx=0;
int curr=preorder[idx];
idx++;
struct node*root=new node(curr);


if(start==end)
{
  return curr;
}


int pos=search(inorder,start,end,curr);
node->left=buildtree(inorder,preorder,start,pos-1);
node->left=buildtree(inorder,preorder,pos+1,end);










}



void inorderprint(node*root)
{
    if(root==NULL)
    {
        return ;
    }

    inorderprint(root->left);
    cout<<root->data<<endl;
    inorderprint(root->right);
}



//build tree using inorder and postorder

int search(int inorder[],int start,int end,int curr)
{
    for(int i=start;i<end;i++)
    {
    if(inorder[i]==curr)
    {
        return i;
    }
    }
return -1;
}


node* buildtree(int inorder[],int postorder[],int start,int end)
{

if(start>end)
{
    return NULL;
}


static int idx=4;
int curr=postorder[idx];
idx--;
struct node*root=new node(curr);


if(start==end)
{
  return curr;
}


int pos=search(inorder,start,end,curr);
node->right=buildtree(inorder,postorder,pos+1,end);
node->left=buildtree(inorder,postorder,start,pos-1);

}



//LEVEL ORDER TRAVERSAL

void levelorder(node*root){
if(root==NULL)
{
    return;
}
queue<node*>q;
q.push(root);
q.push(NULL);

while(!q.empty())
{
   node*Node=q.front();
    q.pop();
if(Node!=NULL)
{
    cout<<Node->data;
if(Node->left)
q.push(Node->left);

}
if(Node->right)
q.push(Node->right);

else if(!q.empty())
{
    q.push(NULL);
}

}


}

//FIND THE SUM AT K LEVEL

int sumatK(node*root,int k)
{
if(root==NULL)
{
  return -1;
}

queue<node*>q1;
q1.push(root);
q1.push(NULL);
int level=0;
int sum=0;


while(!q1.empty())
{
 node*front=q1.front();
 q1.pop();

 if(front!=NULL)
 {
   if(level==k)
   {
       sum+=front->data;
   }
 if(front->left)
 {
     q1.push(front->left);
 }
 if(front->right)
 {
     q1.push(front->right);
 }
  
 }
 else if(!q1.empty())
  {
      q1.push(NULL);
    level++;
  }





}


return sum;
}


//count total nodes in  a binary tree
int countnodes(node*root)
{
if(root==NULL)
{
    return 0;
}

return countnodes(node->left)+countnodes(node->right)+1;

}

//the sum of nodes

int sumnodes(node*root)
{
if(root==NULL)
{
    return 0;
}

return sumnodes(node->left)+sumnodes(node->right)+root->data;

}

//HEIGHT OF BINARY TREE
//o(n)

int heightBinary(node*root)
{

if(root==NULL)
{
    return 0;
}

int leftpart=heightBinary(root->left);
int rightpart=heightBinary(root->right);

return max(leftpart,rightpart)+1;


}

//finding the shortest distance between two nodes

node* LCA(node*root,int n3,int n4)
{

if(root==NULL)
{
    return NULL;
}
if(root->data==n3||root->data==n4)
{
    return root;
}

node*left=LCA(root->left,n3,n4);
node*right=LCA(root->right,n3,n4);

if(left!=NULL &&right!=NULL)
{
    return root;
}
if(left==NULL && right==NULL)
{
    return NULL;
}
if(left!=NULL)
{
    return LCA(root->left,n3,n4);
}
 return LCA(root->right,n3,n4);
}

int finddistance(node*root,int k,int dis)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root->data==k)
    {
        return dis;
    }
   int left=finddistance(root->left,k,dis+1);
   if(left!=-1)
   {
       return left;
   }
   return finddistance(root->right,k,dis+1);


}



int distancenodes(node*root,int n3,int n4)
{
   node*lca=LCA(root,n3,n4);
   int d1=finddistance(lca,n3,0);
   int d2=findheight(lca,n4,0);

return d1+d2;



}







//calculate the diameter of a binary tree

int Diameterofbinary(node*root,int*height)
{
if(root==NULL)
{
    *height=0;
    return 0;
}
/*int lheight=heightBinary(root->left);
int rheight=heightBinary(root->right);
int curr=lheight+rheight+1;

int ldiameter=Diameterofbinary(root->left);
int rdiameter=Diameterofbinary(root->right);
*/
int lh=0;
int rh=0;
int ldiameter=Diameterofbinary(root->left);
int rdiameter=Diameterofbinary(root->right);

int currDiameter=lh+rh+1;

*height=max(lh,rh)+1;

return max(currDiameter,)


}

//sum replacement in binary tree

void sumreplacement(node*root){
if(root==NULL)
{
    return;
}

sumreplacement(root->left);
sumreplacement(root->right);

if(root->left !=NULL)
{
    root->data+=root->left->data;
}
if(root->right !=NULL)
{
    root->data+=root->right->data;
}


}

//height balanced binary tree
//o(n2)
bool isBalanced(node*root)
{
    if(root==NULL)
    {
        return true;
    }
if(isBalanced(root->left)==false);
{
    return false;
}
if(isBalanced(root->right)==false)
{
    return false;
}

int lh=heightBinary(root->left); //it takes o(n)
int rh=heightBinary(root->right);

if(abs(lh-rh)<=1)
{
    return true;
}
else{
    return false;
}


}
//o(n)
bool isBalanced(node*root,int*height)
{
if(root==NULL)
{
    return true;
}

int lh=0;
int rh=0;
if(isBalanced(root->left,&lh)==false)
{
    return false;
}
if(isBalanced(root->right,&rh)==false)
{
    return false;
}

*height=max(lh,rh)+1;
if(abs(lh-rh)<=1)
{
    return true;
}
else{
    return false;
}



}

//RIGHTVIEW OF TREE

void rightview(node*root)
{
if(root==NULL)
{
    return;
}
queue<node*>q;

q.push(root);


while(!q.empty())
{
    int n=q.size();
for(int i=0;i<n;i++)
{
 node*curr=q.front();

if(i==0)
{
    cout<<curr->data;
}

if(curr->left)
{
    q.push(curr->left);
}
if(curr->right)
{
    q.push(curr->right);
}

}
}


//leftview

void rightview(node*root)
{
if(root==NULL)
{
    return;
}
queue<node*>q;

q.push(root);


while(!q.empty())
{
    int n=q.size();
for(int i=1;i<=n;i++)
{
 node*curr=q.front();

if(i==1)
{
    cout<<curr->data;
}

if(curr->left)
{
    q.push(curr->left);
}
if(curr->right)
{
    q.push(curr->right);
}

}
}


//FLATTEN THEE BINARY TREE

void flatten(node*root)
{
if(root==NULL ||(root->left==NULL && root->right==NULL))
{
    return;
}



    if(root->left!=NULL)
    {
        flatten(root->left);
        node*temp=root->right;
       root->right=root->left;
       root->left=NULL;
node*t=root->right;
  while (t->right!=NULL)
 {
    t=t->right;
 }
   t->right=temp;



 }
flatten(root->right);

}


//PRINT THEE NODES AT K DISTANCE

void printNodesatKdistance(node*root,int k)
{
if(root==NULL)
{
    return;
}
if(k==0)
{
  cout<<root->data<<"\n";
}
printNodesartKdistance(root->left,k-1);
printNodesartKdistance(root->right,k-1);
}

int findtargetandprint(node*root,node*target,int k)
{
if(root==NULL)
{
return -1;
}
if(root==target)
{
    printNodesatKdistance(root,k);
    return 0;
}
int dl=findtargetandprint(root->left,target,k-1);

if(dl!=-1)
{
  if(dl+1==k)
  {
      cout<<root->data<<" ";
  }
else{
  printNodesatKdistance(root->right,k-dl-2);
}
return 1+dl;
}

int dr=findtargetandprint(root->right,target,k-1);

if(dr!=-1)
{
  if(dr+1==k)
  {
      cout<<root->data<<" ";
  }
else{
  printNodesatKdistance(root->left,k-dr-2);
}
return 1+dr;
}



}

//FINDING THEE LCA IN A BINARY TREE
//o(n)
bool getpath(node*root,int key,vector<int>&path)
{
    if(root==NULL)
    {
        return false;
    }
path.push_back(root->data);
if(root->data==key)
{
    return true;
}
if(getpath(root->left,key,path)||getpath(root->right,key.path))
{
    return true;
}
path.pop_back();
return false;

}



int LCA(nod*root,int n1,int n2)
{
    vector<int>path1,path2;
if(root==NULL)
{
    return -1;
}
if(!getpath(root,n1,path1) ||!getpath(root,n2,path2))
{
    return -1;
}

int pc;
for(int pc=0;pc<path1.size() &&path2.size();pc++)
{
    if(path1[pc]!=path2[pc])
    {
        break;
    }
}
return path1[pc-1];

}

//LCA METHOD 2

node*LCA2(node*root,int n1,int n2)
{
    if(root==NULL)
    {
        return NULL;
    }
if(root->data==n1||root->data==n2)
{
    return root;
}
node*left=LCA2(root->left,n1,n2);
node*right=LCA2(root->right,n1,n2);

if(left && right)
{
    return root;
}
if(left!=NULL)
{
    return left;
}
return right;
}


//finding the maxsum from an binary 

int maxpathsum(node*root,int ans)
{
    if(root==NULL)
    {
        return 0;
    }
int left=maxpathsum(root->left);
int right=maxpathsum(root->right);

int nodemax=max(max(root->data+left,root->data+right),max(root->data,root->data+left+right));
ans=max(ans,nodemax);

int singlepath=max(root->data,max(root->data+left,root->data+right));
return singlepath;
}







int PrintMaxsum(node*root)
{
    int ans=INT_MIN;
    maxpathsum(root,ans);
    return ans;
}








void main()
{

struct node*root=new node(1);

root->left=new node(20);
root->right=new node(25);
root->left->left=new node(10);
root->left->right=new node(15);
root->right->left=new node(30);
root->right->right=new node(40);
preorder(root)










string s;
cin>>s;
cout<<reverse(s);



//sliding window maximum
int n,k;
cin>>n>>k;


//input vector
vector<int>a(n);
for(auto &i:a)
{
    cin>>i;
}

vector<int>ans;

multiset<int,greater<int>>ms2;

for(int i=0;i<k;i++)
{
ms2.insert(a[i]);
}

for(int i=k;i<n;i++)
{

}





//brute force for largest rectangle in histogram

int ans=0;
int n,a[n];
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

for(int i=0;i<n;i++)
{
    int minH=INT_MAX;
    for(int j=i;j<n;j++)
    {
        minH=min(a[j],minH);
       int len=j-i+1;
       ans=max(ans,len*minH);
    }
}
cout<<max;





//redundant parenthesis

string s;
cin>>s;
bool ans=false;
stack<char>ch;

for(int i=0;i<n;i++)
{

if(s[i]=='(')
{
    ch.push(s[i]);
}

else if(s[i]=='+'|| s[i]=='-'||s[i]=='*'||s[i]=='/')
{
    ch.push(s[i]);
}
else if(s[i]==')')
{
    if(ch.top()=='(')
    {
      ans=true;
    }
         while(ch.top()=='+'||ch.top()=='-' ||ch.top()=='*'||ch.top()=='/')
         {
             ch.pop();
         }
         ch.pop()
 
}

}

cout<<ans;



//three sum

int n,a[n],target;
cin>>n>>target;
bool found=false;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a.begin(),a.end());

for(int i=0;i<n;i++)
{
 int low=i+1;
 int high=n-1;


while(low<high)
{
    int current=a[i]+a[low]+a[high];

    if(current==target)
    {
      found=true;
    }
if(current<target)
{
    low++;
}
else
{
    high--;
}




}


}

if(found)
{
    cout<<"FOUND";
}
else{
    cout<<"NOT FOUND";
}



//max 1 in a longest subarray


int n,k;
cin>>n>>k;
vector<int>s1(n);
for(auto &i:s1)
{
    cin>>i;
}
int zerocount=0;
int i=0;
int ans;
for(int j=0;j<n;j++)
{
 if(s1[j]==0)
{
    zerocount++;
}

while(zerocount>k)
{
    if(s1[i]==0)
    {
        zerocount--;
    }
    i++;
}


ans=max(ans,j-i+1);


}


//max non repeating string
vector<int>dic(256,-1);
string s;
cin>>s;
int start=-1;
int maxlen=0;
for(int i=0;i<s.size();i++)
{
    if(dic[s[i]]>start)
  {
    start=dic[s[i]];
  }

dic[s[i]]=i;
maxlen=max(maxlen,i-start);


}









return;
}





