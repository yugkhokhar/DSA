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

void dfs(int row,int col,vector<vector<int>>&visited,vector<vector<char>>&matrix)
{

visited[row][col]=1;
int delRow=[-1,0,1,0];
int delCol=[0,1,0,-1];

for(int i=0;i<4;i++){
    int movRow=row+delRow[i];
    int movCol=col+delCol[i];
if(movRow>=0 && movRow<matrix.size() && movCol>=0 && movCol<matrix[0].size() && !visited[movRow][movCol] && matrix[movRow][movCol]=='O'){
    dfs(movRow,movCol,visited,matrix);
}

}



}

signed main()
{
int n,m;
cin>>n>>m;

vector<vector<int>>visited(n,vector<int>(m,0));

vector<vector<char>>matrix;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>matrix[i][j];
    }
}


//traverse in first and last row
for(int j=0;j<m;j++)
{
    if(!visited[0][j] && matrix[0][j]=='O'){
        dfs(0,j,visited,matrix);
    }
      if(!visited[n-1][j] && matrix[n-1][j]=='O'){
        dfs(n-1,j,visited,matrix);
    }
}



//traverse in first and last column
for(int i=0;i<n;i++){

    if(!visited[i][0] && matrix[i][0]=='O')
        dfs(i,0,visited,matrix);

    if(!visited[i][m-1] && matrix[i][m-1]=='O')
        dfs(i,m-1,visited,matrix);

}


for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(!visited[i][j] && matrix[i][j]=='O'){
            matrix[i][j]='X';
        }
    }
}



 return 0;
}