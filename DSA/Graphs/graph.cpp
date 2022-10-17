// DIRECTED GRAPH ARE THE GRAPH WITH DIRECTED EDGES 
// UNDIRECTED GRAPH ARE THE GRAPH THAT DTERMINE THE NO OF POSSIBLE NEIGHBOUR [ADJACENT EDGES]

//DEGREE OF A VERTEX ARE OF TWO TYPE: INDEGREE: NO OF INCOMING EDGES
//OUTDEGREE: NO OF OUTGOING EDGES


//CONNECTED AND DISCONNECTED GRAPH: GRAPHS IN  WHICH EVERY NODE HAS A  PATH FROM OTHER NODE
//DISCONNECTED GRAPH: IN THIS EVERY NODE DO NOT HAVE FROM A OTHER NODE

//CONNVECTED COMPONENTS ARE THE CONNECTED GRAPHS IN A UNCONNECTED COMPONENTS

//CYCLIC AND ACYCLIC GRAPHS: THE GRAPHS WHICH CONTAIN CYCLE IN ITAND THE GRAPH THAT DO NOT CONTAIN CYCLE

//TREE IS A CONNECTED ACYCLIC GRAPH
//PROPERTIES: 1. NO OF EDGES: N-1  2. NO CYCLES 3. EVERY NODE HAS A PATH FROM OTHER NODE

//DAG (DIRECTED ACYCLIC GRAPH) 1: IT IS A DIRECTED  2: CYCLE NOT PRESENT

//COMPLETE GRAPH : THE GRAPH IN WHICH EVERY NODE IS CONNECTED TO OTHER NODES IN A GRAPH
//PROPERTIES: THE NO OF EDGES IN A COMPLETE GRAPH IS nC2

//WEIGHTED GRAPH IS A GRAPH WITH WEIGHT ON ITS EDGES

//NO OF EDGES IN A GRAPH WITH N VERTEX=N-1

#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vii vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)

vector<int>adjli(1e+5);

int main()
{
    // n rep the no of nodes and m represent vertices
    int n,m;
    cin>>n>>m;
  vii adj(n+1,vi (n+1,0));

  rep(i,0,n)
  {
    int x,y;
    cin>>x>>y;

    adj[x][y]=1;
    adj[y][x]=1;

  }

rep(i,1,n+1)
{
    rep(j,1,m+1)
      cout<<adj[i][j]<<" ";
 cout<<endl;   
}

//adjacency list

rep(i,1,n+1)
{
    int x,y;
    cin>>x>>y;

    adj[x].push_back(y);
    adj[y].push_back(x);

}

rep(i,1,n+1)
{
    vector<int>::iterator it;
    cout<<i<<"->";
    for(it=adj[i].begin();it!=adj[i].end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
}


    return 0;
}