//queue is used for bfs
#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vii vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)

vector<int>adjli(1e+5)
vector<bool>visited(1e+5)




void dsf(int rootnode)
{
    //preorder
    visited[rootnode]=1;
cout<<rootnode<<endl;

//inorder

vector<int>::iterator it;

for(it=adjli[rootnode].begin();it!=adjli[rootnode].end();it++)
{
    if(visited[*it])
    else{
        dfs(*it);
    }
}


}








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

dsf(1);





    return 0;
}