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



void dfs(int start_node,vector<int>adjli[],vector<int>&visited,vector<int>&dfs_list)
{

visited[start_node]=1;
dfs_list.push_back(start_node);
for(auto it:adjli[start_node]){
if(!visited[it]){
    dfs(it);
}

}




}


vector<int> main()
{

int n,m,start_node;cin>>n>>m;
start_node=0;
vector<int>adjli[n];
vector<int>visited(n,0);
vector<int>dfs_list;

for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    adjli[x].push_back(y);
    adjli[y].push_back(x);
}


dfs(start_node,adjli,visited,dfs_list);
return dfs_list;


}