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

int LIS(vector<int>&nums,int curr,int prev){

if(curr==nums.size()) return 0;

int take=0;
if(prev==-1 || nums[prev]<nums[curr]){
    take=1+LIS(nums,curr+1,curr);
}

int excludes=LIS(nums,curr+1,prev);

return max(take,excludes);

}


int LISmemo(vector<int>&nums,int curr,int prev,vector<vector<int>>&dp){
    if(curr==nums.size()) return 0;
    if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];
    int take=0;

if(prev==-1|| nums[prev]<nums[curr]){
    take=1+LISmemo(nums,curr+1,curr,dp);
}

int excludes=0+LISmemo(nums,curr+1,prev,dp);

return dp[curr][prev+1]=max(take,excludes);

}

int SolveTab(int n,vector<int>&a){

vector<int>currRow(n+1,0);
vector<int>nextRow(n+1,0);

for (int curr=n-1 ; curr>=0; curr--)
{
  
for (int prev = curr-1; prev>=-1; prev--)
{
  
  int take=0;
  if(prev==-1 || a[curr]>a[prev]) take=1+nextRow[curr+1];


int nottake=0+nextRow[prev+1];

currRow[prev+1]=max(take,nottake);
}
nextRow=currRow;

}



int DpwithBinarySearch(vector<int>&nums){

int n=nums.size();
if(n==0) return 0;
vector<int>ans;

ans.push_back(nums[0]);

for (int i = 1; i < n; i++)
{
  if(nums[i]>ans.back()) ans.push_back(nums[i]);
  else {
    int index=lower_bound(ans.begin(),ans.end(),nums[i]);
    ans[index]=nums[i];
  }
}
return ans.size();


}



signed main()
{
int n;cin>>n;
 return 0;
}