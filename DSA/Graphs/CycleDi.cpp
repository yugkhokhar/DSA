//check for node that it is visited using iscycle function

//159 video of connected components





#include<bits/stdc++.h>

using namespace std;



bool iscycle(int src,vector<vector<int>>&adj,vector<bool>&visited,vector<int>&stack)
{
    stack[src]=true;

   if(!visited[src])
   {
    visited[src]=true;
     for(auto it:adj[src])
     {
      if(!visited[it] and iscycle(it,adj,visited,stack))
     {
         return true;
     }
     if(stack[src])
     {
         return true;
     }
     }

     }

   stack[src]=false;

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

vector<int>stack(n,0);


for(int i=0;i<n;i++)
{
    if(!visited[i] and iscycle(i,adjli,visited,stack))
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