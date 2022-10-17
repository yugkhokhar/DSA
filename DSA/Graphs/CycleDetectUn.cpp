//check for node that it is visited using iscycle function







#include<bits/stdc++.h>

using namespace std;



bool iscycle(int src,vector<vector<int>>&adj,vector<bool>&visited,int parent)
{
    visited[src]=true;

    for(auto it:adj[src])
    {
        if(it!=parent)
        {
            if(visited[it])
            {
                return true;
            }
            if(!visited[it] and iscycle(it,adj,visited,src))
            {
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
 vector<bool>visited(n,false);
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
    if(!visited[i] and iscycle(i,adjli,visited,-1))
    {
        cycle=true;
    }
}
if(cycle)
{
    cout<<"CYCLE IS NOT PRESENT";
}
else{
    cout<<"CYCLE NOT PRESENT";
}




    return 0;
}