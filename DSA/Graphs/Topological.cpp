// THE TOPOLOGICAL SORT IS USED TO FIND THE CYCLE IN A DIRECTED ACYCLIC GRAPH 
// IF THERE A EXISTS A CYCLE IN A GRAPH THEN ITS TOPOLOGICAL SORT IS NOT FOUND


#include<bits/stdc++.h>

using namespace std;



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

queue<int>q;
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