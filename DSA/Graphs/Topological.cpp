// THE TOPOLOGICAL SORT IS USED TO FIND THE CYCLE IN A DIRECTED ACYCLIC GRAPH 
// IF THERE A EXISTS A CYCLE IN A GRAPH THEN ITS TOPOLOGICAL SORT IS NOT FOUND


#include<bits/stdc++.h>

using namespace std;


//BFS 
//O(v+e) // directed acyclic graph
int main(){
    const int N=1e+5;
    int n,m;cin>>n>>m;
    vector<vector<int>>adj(n);
    vector<int>in_deg(N,0);
int x,y;
for (int i = 0; i <m; i++)
{
cin>>x>>y;
    adj[x].push_back(y);
    in_deg[y]++;
}

z<int>q;
for (int i = 0; i < n; i++)
{
    if(in_deg[i]==0){
        q.push(i);
    }
}

while(!q.empty())
{
    int x=q.front();
    q.pop();
    cout<<x<<" ";
    vector<int>::iterator it;
    for(auto it:adj[x]){
        in_deg[it]--;
    if(in_deg[it]==0){
        q.push(it);
    }
    }
}

return 0;
}



// THE TOPOLOGICAL SORT IS USED TO FIND THE CYCLE IN A DIRECTED ACYCLIC GRAPH 
// IF THERE A EXISTS A CYCLE IN A GRAPH THEN ITS TOPOLOGICAL SORT IS NOT FOUND


#include<bits/stdc++.h>

using namespace std;


void dfs(int node,vector<int>visited,vector<vector<int>>adj,stack<int>&st){

    visited[node]=1;
    for(auto it:adj[node]){
        if(!visited[it]){
            dfs(it,visited,adj,st);
        }
    }
    st.push(node);
}

//DFS
//O(v+e)
int main(){

    int n,m;cin>>n>>m;
    vector<vector<int>>adj[n];
    
for (int i = 0; i <m; i++)
{
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}

stack<int>st;
vector<int>visited(n,0);
for (int i = 0; i < n; i++)
{
    if(!visited[i]){
        dfs(i,visited,adj,st);
    }
}

vector<int>ans;


while(!st.empty())
{
ans.push_back(st.top());
st.pop();
}

return 0;
}