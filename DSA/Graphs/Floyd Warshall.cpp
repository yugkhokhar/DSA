//THIS ALGO IS USED TO FIND THE SHORTEST PATH BETWEEN ANY TO NODES
//u and v
#include<bits/stdc++.h>
using namespace std;

const int inf=1e9;
int main()
{
vector<vector<int>>graph={

    {0,inf,inf,5},
     {0,5,inf,5},
      {5,15,inf,50},
       {10,inf,18,25}
};


int size=graph.size();
vector<vector<int>>dis=graph;

for(int k=0;k<size;k++)
{
  for(int i=0;i<size;i++)
  {
      for(int j=0;j<size;j++)
      {
          if(dis[i][k]+dis[k][j]<dis[i][j])
          {
              dis[i][j]=dis[i][k]+dis[k][j];
          }
      }
  }

}
for(int i=0;i<size;i++)
{
    for(int j=0;j<size;j++)
{
    if(dis[i][j]==inf)
    {
        cout<<"INF";
    }
    else{
        cout<<dis[i][j];
    }
}
}



    return 0;
}