//topological sort is not unique
//topological sort can be possible with DAG (DIRECTED ACYCLIC GRAPH)
//THE VERTEX WITH NO INCOMING EDGE WE HAVE TO START AT THAT POINT
//THE NUMBER OF INWARD NODES TO A PARTICULAR VERTEX IS KNOWN AS INDEGREE







#include<bits/stdc++.h>

using namespace std;

int main()
{
   
int n,m;
 vector<vector<int>>adjli(n);
 vector<int>in_deg(n,0);
cin>>n>>m;
for(int i=0;i<m;i++)
{
    int x,y;
    cin>>x>>y;

   adjli[x].push_back(y);
   in_deg[y]++;

}

queue<int>pq;

for(i=0;i<n;i++)
{
    if(in_deg[i]==0)
    {
        pq.push(i);
    }
}
int count=0;
while(!pq.empty())
{
count++;
    int x=pq.front();
cout<<x<<endl;

for(auto it:adjli[x])
{
   in_deg[it]--;
   if(in_deg[it]==0)
   {
       pq.push(it);
   }
}
}




    return 0;
}