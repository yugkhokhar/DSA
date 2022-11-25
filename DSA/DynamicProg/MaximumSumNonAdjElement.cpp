#include<bits/stdc++.h>
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


int recursionApp(vi &nums,int idx){

if(idx<0) return 0;
if(idx==0) return nums[0];
int includes=recursionApp(nums,idx+2)+nums[idx];
int excludes=recursionApp(nums,idx+1)+nums[idx];

return max(includes,excludes);

} 


 int MemRecursion(vi &nums,int n,vi &dp ){
if(n<0) return 0;
if(n==1) return nums[0];
if(dp[n]!=-1) return dp[n];
int includes=MemRecursion(nums,n-2,dp)+nums[n];
int excludes=MemRecursion(nums,n-1,dp)+0;

dp[n]=max(includes,excludes);
return dp[n];

}
 

int TabulationSolve(vi &nums){
int n=nums.size();
vi dp(n,0);

dp[0]=nums[0];
for(int i=1;i<n;i++){
int includes=dp[i-2]+nums[i];
int excludes=dp[i-1]+0;
dp[i]=max(includes,excludes);
}

return dp[n-1];
}
 





signed main()
{
int n;cin>>n;
vi dp(n+1,-1),nums(n);
for (size_t i = 0; i < n; i++)
{
    cin>>nums[i];
}
cout<<MemRecursion(nums,nums.size(),dp);

 return 0;
} 