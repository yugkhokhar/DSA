#include<bits/stdc++.h>
//TC 0(V+E)

bool dfsCheck(int i,vector<vector<int>>&adj,vector<int>&visited
,vector<int>&pathVisited){

visited[i]=1;
pathVisited[i]=1;

for(auto it:adj[i]){
         if(!visited[it]){
        if(dfsCheck(it,adj,pathVisited,visited)){
        
            return true;
        }
    }
    //the node is previously visited but it is visited on same path
    else if(pathVisited[it]){
      
        return true;
    }
}

pathVisited[i]=0;
return false;
};


int main(){

int n,edge;
cin>>n>>edge;

vector<int>adj[n+1];

for(int i=0;i<V;i++){
int x,y;
cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
}

int visited[n]={0};
int pathVisisted={0};

for(int i=0;i<n;i++){
         if(!visited[i]){
            if(dfsCheck(i,adj,pathVisisted,visited)){
                return true;
            }
    }
}










    return 0;
}