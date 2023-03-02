#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<limits.h>
#define ll long long
#define l long 
#define vi vector<int> 
#define ai(n) int arr[n]; 
#define ac(n) char arr[n];
#define pii pair<int,int> 
#define pll pair<long,long> 
#define vii vector<vector<int>> 
#define vpii vector<pair<int,int>> 
#define vpcc vector<pair<char,char>> 
#define rep(i,a,b) for(int i=a;i<b;i++) 
#define repp(b) for(auto &a:b) 
#define vs vector<string>
#define  MOD 1e9+7
#define  N 1e5+2
#define  si set<int>
#define  sl set<long>
#define  sc set<char>
#define  ss set<string>
#define  mii map<int,int>
#define  umii unordered_map<int,int>
#define  mic map<int,char>
#define  umic unordered_map<int,char>
#define  mis map<int,string>
#define  umis unorderd_map<int,string>
using namespace std;


//TC O(N+2E) 
//SC O(N)+O(N)=O(N)

 bool dfsIsCycle(int src,int parent,vector<int>adj,vector<int>&visited){

        visited[src]=1;
        for(auto adjNode:adj[src]){
            if(!visited[adjnode]){
                if(dfsIsCycle(adjNode,src,adj,visited)) return true;
            }
            else if(parent!=adjNode) return true;
        }
        return false;
}


signed main()
{
int n,m;
cin>>n>>m;

vector<int>adj[n];
vector<int>visited(n,0);
for(int i=0;i<m;i++){

int x,y;
cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);



for(int i=0;i<n;i++){

if(!visited[i]){
if(dfsIsCycle(i,-1,adj,visited))
    return true;


}
}
return false;

}



 return 0;
}