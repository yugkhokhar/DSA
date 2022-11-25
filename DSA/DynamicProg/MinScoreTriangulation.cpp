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


int solveWithMemosization(vector<int>&values,int i,int j,vector<vector<int>>&dp){
if(i+1==j) return 0;
if(dp[i][j]!=-1) return dp[i][j];
int ans=INT_MAX;
for(int k=i+1;k<j;k++){
ans=min(ans,values[i]*values[j]*values[k]+solveWithMemosization(values,i,k,dp)+solveWithMemosization(values,k,j,dp));
}
dp[i][j]=ans;
return dp[i][j];
}





signed main()
{
 int n=values.size();
       vector<vector<int>>dp(n,vector<int>(n,-1));
        cout<<solveWithMemosization(values,0,n-1,dp);
 return 0;
}