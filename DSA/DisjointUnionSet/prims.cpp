//In computer science, Prim's algorithm is a greedy algorithm that finds
// a minimum spanning tree for a weighted undirected graph.
// How Prims algorithm actually works and How it is different from 
//Kruskal.

//THIS DIFFER FROM THE KRUSALK ALGO FROM THE CONTINIOUS FLOW OF NODE
//RATHER THAN DISCONTINOUS IN KRUSALKH

//set stores

#include<bits/stdc++.h>


using namespace std;
const int N=1e+5;
vector<vector<int>>g[N];
vector<int>parent[N];
vector<int>dist[N];
vector<bool>vis[N];
int cost=0;
const int inf=1e9;
void primMst(int source)
{
for(int i=0;i<m;i++)
{
    dist[i]=inf;
}

set<vector<int>>s;
dist[source]=0;
s.insert({0,source});
//weight,vertex
while (!s.empty())
{
    auto x= *(s.begin());
    vis[x[1]]=true;
    int u=x[1];
    int weight=x[0];

    cost+=weight;

}




}

int n,m;

int  main()
{

cin>>n>>m;


for(int i=0;i<m;i++)
{
    int u,v,w;
    cin>>u>>v>>w;

    g[u].push_back({v,w});
    g[v].push_back({u,w});
}
primMst(0);




    return 0;
}