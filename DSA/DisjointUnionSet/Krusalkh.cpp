//THIS FOCUSES ON THE IDEA OF NOT CONSIDER A EDGE THAT LEADS TO A CYCLE

//BUT ALL THE NODE SHOULD BE THERE AS IT WAS IN GRAPH AND SHOULD ONLY 

//CONSIDER THE EDGES IN GRAPH

//USED FOR OBTAINING MST[minmium spanning tree]


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
  int u,v,w;cin>>w>>u>>v;
  edges.push_back({w,u,v});
}

sort(edges.begin(),edges.end());

int cost=0;
for(auto i:edges)
{
    int x=i[1];
    int y=i[2];
    int wei=i[0];
    int findx=find_set(x);
    int findy=find_set(y);

if(findx==findy)
{
 continue;
}

else{
    cout<<x<<" "<<y;
    cost+=wei;
    union_sets(x,y);
}

}
cout<<cost<<endl;
   
    return 0;
}