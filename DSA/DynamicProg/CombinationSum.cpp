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

int CombinationSumRecur(vi&nums,int target){

if(target==0) return 1;
if(target<0) return 0;
int n=nums.size();
int ans=0;
rep(i,0,n){
    ans+=CombinationSumRecur(nums,target-nums[i]);
}
return ans;
}

int CombinationSumMemoisation(vi&nums,vi&dp,int target){
if(target==0) return 1;
if(target<0) return 0;
if(dp[target]!=-1) return dp[target];
int n=nums.size();
int ans=0;
rep(i,0,n){
    ans+=CombinationSumMemoisation(nums,dp,target-nums[i]);
}
dp[target]=ans;
return dp[target];
}
int CombinationSumTabulation(vi&nums,int target){
vi dp(target+1,-1);
dp[0]=1;
rep(i,1,target+1){

rep(j,0,nums.size()){
    dp[i]+=dp[i-nums[j]];
}

}

return dp[target];
}



signed main()
{
int n,target;cin>>n>>target;
vi dp(target+1,-1);
vi nums(n);
rep(i,0,n) cin>>nums[i];
cout<<CombinationSumMemoisation(nums,dp,target);

 return 0;
}