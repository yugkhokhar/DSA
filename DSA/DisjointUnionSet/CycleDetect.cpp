//THE IDEA IS TO ITERATE THROUGH EVERY EDGE AND FIND THE PARENT FOR EACH 
//VERTEX VALUE IF NOT SAME THEN ADD TO THE SET AND IF YES THEN RETURN TRUE;



#include<bits/stdc++.h>


using namespace std;

vector<int>parent(1e+5);
vector<int>size(1e+5);

void make(int a)
{
parent[a]=a;
size[a]=1;
}

int find_set(int a)
{
    if(parent[a]==a)
         return a;

 return parent[a]=find_set(parent[a]);  //O(log n)
}

void union_sets(int a,int b)
{
     a=find_set(a);
     b=find_set(b);
if(a!=b)
{
    if(size[a]<size[b])
    {
        swap(a,b);
    }
    parent[b]=a;
    size[a]+=size[b];
}
  

}

int main()
{

for(int i=0;i<1e+5;i++)
{
make(i);
}

int n,m;
cin>>n>>m;
vector<vector<int>>edges;
for(int i=0;i<m;i++)
{
  int u,v;cin>>u>>v;
  edges.push_back({u,v});
}
bool cycle=false;
for(auto i:edges)
{
    int x=i[0];
    int y=i[1];
    int findx=find_set(x);
    int findy=find_set(y);
if(findx==findy)
{
cycle=true;
}
else{
    union_sets(x,y);
}
}
   if(cycle)
   {
       cout<<"CYCLE FOUND";
   } 
   else{
       cout<<"CYCLE NOT FOUND";
   }
    return 0;
}