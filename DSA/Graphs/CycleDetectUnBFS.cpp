//check for node that it is visited using iscycle function







#include<bits/stdc++.h>

using namespace std;

//TC O(N+2E) 
//SC O(N)+O(N)

bool iscycle(int src,vector<vector<int>>&adj,vector<bool>&visited)
{
    visited[src]=true;
    queue<pair<int,int>>q;
    q.push({src,-1});

while(!.empty()){
    int node=q.front().first;
    int parent=q.front().second;
    q.pop();

    for(auto adjNode:adj[node]){
        if(!visited[adjNode]){
            visited[adjNode]=true;
            q.push({adjNode,node});
        }
        else if(parent!=adjNode){
            return true;
        }
    }
}
return false;
}




int main()
{
   
int n,m;
 vector<vector<int>>adjli(n);
 vector<bool>visited(n+1,false);
 bool cycle=false;
cin>>n>>m;
for(int i=0;i<m;i++)
{
    int x,y;
    cin>>x>>y;

   adjli[x].push_back(y);
   adjli[y].push_back(x);

}

for(int i=0;i<n;i++)
{
    if(!visited[i])
    {
        if(iscycle(i,adjli,visited))
        {
            return true;
            
        }
    }
}
return false;

    return 0;
}