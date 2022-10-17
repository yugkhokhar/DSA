

//divide the graph nodes into two disjoint sets
//the parent node should be coloured red and neighbour blue and 
//the neighour neighbours should be of same color as parent node








#include<bits/stdc++.h>

using namespace std;

bool bipartrate;

void color(int node,int curr)
{
  if(col[node]!=-1 and col[node]!=curr)
  {
      bipartrate=false;
      return;
  }
  col[node]=curr;
  if(vis[node])
    return;
  vis[node]=true;

for(auto it:adj[node])
{
    color(it,curr xor 1);
}


}







vector<vector<int>>adj(1e+5);
vector<bool>vis(1e+5);
vector<int>col(1e+5);

int main()
{

    int n,m;
    cin>>n>>m;
adj=vector<vector<int>>(n);
vis=vector<bool>(n,false);
col=vector<int>(n,-1);

//adjacency list
 int x,y;
for(int i=0;i<m;i++)
{
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
for(int i=0;i<n;i++)
{
    if(!vis[i])
    {
        color(i,0);
    }
}

if(bipartrate)
{
    cout<<"THE GRAPH IS BIPARTRATE";
}
else{
    cout<<"THE GRAPH IS NOT BIPARTRATE";
}


    return 0;
}