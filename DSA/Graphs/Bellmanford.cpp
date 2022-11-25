//THIS ALGO IS USED TO FIND THE SHORTEST DISTANCE FROM ANY SOURCE VERTEX
//TO EVERY  OTHER NODE
//  TO FIND THE NEGATIVE  WEIGHT CYCLE AND TO FIND THE CYCLE 
// O(VE)



#include<bits/stdc++.h>

using namespace std;

const int inf=1e7;
int main()
{

    int n,m;
    cin>>n>>m;
vector<int>dis(n,inf);

    vector<vector<int>>graph(n);

for(int i=0;i<m;i++)
{
    int st,end,weight;
    cin>>st>>end>>weight;
    graph.push_back({st,end,weight});
   
}
int source;
cin>>source;
dis[source]=0;



for(int i=0;i<n-1;i++)
{
    for(auto e:graph)
    {
        int u=e[0];
        int v=e[1];
        int w=e[2];
        dis[v]=min(dis[v],dis[u]+w);
    }
}


for (auto it:dis)
{
        cout<<it<<" ";
}

return 0;
}