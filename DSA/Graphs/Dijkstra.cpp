//THIS ALGO IS USED TO FIND THE SHORTEST DISTANCE FROM ANY SOURCE VERTEX
//TO ANY OTHER NODE
//  THIS ALGO IS USED FOR FINDING THE DISTANCE FROM EVERY OTHER NODE
// O(V+E LogV)
//IF SUM OF DISTANCE OF VERTEX A AND WEIGHT BTW A,B<DIS[B]
//THEN CHANGE THEE VALUE 
//THIS CAN DEAL WITH NEGATIVE WEIGHT GRAPH

#include<bits/stdc++.h>

using namespace std;

const int inf=1e7;
int main()
{

    int n,m;
    cin>>n>>m;
vector<int>dis(n+1,inf);

    vector<vector<pair<int,int>>>graph(n+1);

for(int i=0;i<m;i++)
{
    int st,end,weight;
    cin>>st>>end>>weight;
    graph[st].push_back({end,weight});
    graph[end].push_back({st,weight});
}
int source;
cin>>source;
dis[source]=0;

set<pair<int,int>>s;
s.insert({0,source});
//weight,vertex

while (!s.empty())
{
    auto x=*(s.begin());
    s.erase(x);

    for(auto it:graph[x.second])
    {
        //it.first=>vertex  it.second=>weight
        if(dis[it.first]>dis[x.second]+it.second)
        {
          s.erase({dis[it.first],it.first});
          dis[it.first]=dis[x.second]+it.second;
          s.insert({dis[it.first],it.first});
        }
    }
}

for (int i = 0; i <n; i++)
{
    if(dis[i]<inf)
    {
        cout<<dis[i]<<" ";
    }
    else{
        cout<<"-1 ";
    }

}


    return 0;
}