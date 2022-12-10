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

class Solution {
public:

bool solveWithMem(int n,vector<int>&nums,int idx,int target,vector<vector<int>>&dp){

if(idx>=nums.size()) return false;
if(target<0) return false;
if(target==0) return true;
if(dp[idx][target]!=-1) return dp[idx][target];

bool includes=solve(n,nums,idx+1,target-nums[idx],dp);
bool excludes=solve(n,nums,idx+1,target-0,dp);

return dp[idx][target]= includes|| excludes;

}




bool SolveWithTab(int sum,vector<int>&nums){
  vector<vector<int>>dp(nums.size()+1,vector<int>(target+1,-1));

for (int i = 0; i<=N; i++)
{
dp[i][sum]=1;   
}


for(int idx=N-1;idx>=0;idx--){
    for (int target=0; target<=sum; target++)
    {
        int includes=0;
        if(target-nums[idx]>=0)
        includes=dp[idx+1][target-nums[idx]]
        bool excludes=dp[idx+1][target-0];
        dp[idx][target]= includes|| excludes;

}
}

return dp[0][sum]


}






    bool canPartition(vector<int>& nums) {
        int target=0;
        for(int i=0;i<nums.size();i++) target+=nums[i]; 
        if(target%2==1) return false;
        vector<vector<int>>dp(nums.size(),vector<int>(target+1,-1));
        
        return solve(nums.size(),nums,0,target/2,dp);

    }
};