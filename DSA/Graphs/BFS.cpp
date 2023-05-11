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
signed main()
{

int n,m;
cin>>n>>m;
vector<int>adjli[n+1];

for(int i=0;i<m;i++)
{
	int x,y;
	cin>>x>>y;
	adjli[x].push_back(y);
	adjli[y].push_back(x);
}

queue<int>q;
vector<int>visited(n+1,0);
vector<int>bfs;
q.push_back(1);
visited[1]=1;


//O( V+2E )	 time complexity and O(n) space complexity for adjacency list and visited array and queue and bfs vector 

while(!q.empty()){
int node=q.front();
q.pop();
bfs.push_back(node);

for(auto it:adjli[node])
{

if(!visited[it]){
	visited[it]=1;
	q.push_back(it);
}

}


}






 return 0;
}