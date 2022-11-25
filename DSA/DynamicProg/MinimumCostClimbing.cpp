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


//recursioin +Memosization

int mincostClimbing(int nStairs,vi &a,vi &dp){

if(nStairs==0) return a[0];
if(nStairs==1) return a[1];
if(dp[nStairs]!=-1) return dp[nStairs];
dp[nStairs]=a[nStairs]+min(mincostClimbing(nStairs-1,a),mincostClimbing(nStairs-2,a));
return dp[nStairs];
}


//  Tabulation Bottom Up approach

int Tabulation(vi &cost,vi &dp){
    int n=cost.size();
    dp[0]=cost[0];
    dp[1]=cost[1];

rep(i,2,n){
    dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
}
return min(dp[n-1],dp[n-2]);
}




signed main()
{
int n;cin>>n;
 vi a(n);
vi dp(n+1,-1);
 rep(i,0,n)
    cin>>a[i];
 

 cout<<min(mincostClimbing(n-1,a,dp),mincostClimbing(n-2,a,dp));
 return 0;
}