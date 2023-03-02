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


//TC : N*M*4 + N*M
// SC : N*M + N*M

signed main()
{
int n,m;
cin>>n>>m;
vector<vector<int>>visted(n,vector<int>(m,0));
vector<vector<int>>distance(n,vector<int>(m,0));
queue<pair<pair<int,int>,int>>q;

int a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[n][m];
    }
}

// n*m
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i][j]==1){
            q.push({{i,j},0});
            visted[i][j]=1;
        }
    }
}

int rowIndex={-1,0,0,1};
int colIndex={0,-1,1,0};



//n*m*4
while(!q.empty()){

int row=q.front().first.first;
int col=q.front().first.second;
int dis=q.front().second;

distance[row][col]=dis;

for(int i=0;i<4;i++){
    if(rowIndex[i]+row >=0 && rowIndex[i]+row <n && colIndex[i]+col>=0 && colIndex[i]+col<m && !visted[rowIndex[i]+row][colIndex+col]){
       q.push({{rowIndex[i]+row,colIndex[i]+col},dis+1});
       visited[rowIndex[i]+row][colIndex+col]=1;
    }
}

}



 return 0;
}