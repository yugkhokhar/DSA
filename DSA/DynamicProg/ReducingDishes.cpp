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



int SolveWithMemosization(vector<int>&statisfaction,int index,int time,vector<vector<int>>&dp){

if(index==statisfaction.size())
return 0;
if(dp[index][time]!=-1) return dp[index][time];

int includes=(statisfaction[index])*(time+1)+SolveWithMemosization(statisfaction,index+1,time+1,dp);
int excludes=0+SolveWithMemosization(statisfaction,index+1,time,dp);

return dp[index][time]=max(includes,excludes);

}





signed main()
{


int n;cin>>n;
vector<vector<int>>dp(n+1,vector<int>(n+1,-1));

vector<int>statisfaction(n);
rep(i,0,n) cin>>statisfaction[i];
sort(statisfaction.begin(),statisfaction.end());
cout<<SolveWithMemosization(statisfaction,0,0,dp);

 return 0;
}