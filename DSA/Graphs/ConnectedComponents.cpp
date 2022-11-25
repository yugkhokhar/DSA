#include<bits/stdc++.h>

using namespace std;


int get_comp(int idx){

if(visited[idx]) return 0;
visited[idx]=true;
int ans=1;
for ( i:adj[idx])
{
    if(!visited[i]){
        ans+=get_comp(i);
        visited[i]=true;
    }
}
return ans;
}


    vector<vector<int>>adj(n);
    vector<int>components;
    vector<bool>visited(n,false);
int main(){
    int n,m;cin>>n>>m;

for (int i = 0; i < m; i++)
{
    int u,v;cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

for (int i = 0; i < n; i++)
{
  if(!visited[i]){
    components.push_back(get_comp(i));
  }   
}
for (auto i:components)
{
    cout<<i<<" ";
}
long long ans=0;
for (i:components)
{
    ans+=i*(n-i);
}

cout<<ans/2<<" ";


}