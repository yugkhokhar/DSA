//queue is used for bfs
#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vii vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)

vector<int>adjli(1e+5)
vector<bool>visited(1e+5)

int main()
{
    // n rep the no of nodes and m represent vertices
    int n,m;
    cin>>n>>m;


rep(i,0,1e+5)
{
   visited[i]=0;
  
}

//adjacency list
 int x,y;
rep(i,0,m)
{
   
    cin>>x>>y;

    adjli[x].push_back(y);
    adjli[y].push_back(x);

}

queue<int>q;

q.push(1);
visited[1]=true;

while(!q.empty())
{
  int node=q.front();
  q.pop();
  cout<<node<<endl;
  
  vector<int>::iterator it;
  for(it=adjli[node].begin(); it!=adjli[node].end();it++)
  {
           if(!visited[*it])
           {
               visited[*it]=true;
               q.push(*it);
           }

  }




}

    return 0;
}