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
#define rep(b) for(auto &a:b) 
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

int noofSegments(int x,int y,int z,int n){

if(n==0) return 0;
if(n<0) return INT_MIN;

int a=1+noofSegments(x,y,z,n-x);
int b=1+noofSegments(x,y,z,n-y);
int c=1+noofSegments(x,y,z,n-z);

return max(a,max(b,c));

} 

int noofSegmentsMemo(int x,int y,int z,int n,vi &dp){

if(n==0) return 0;
if(n<0) return INT_MIN;
if(dp[n]!=-1) return dp[n];
int a=1+noofSegments(x,y,z,n-x,dp);
int b=1+noofSegments(x,y,z,n-y,dp);
int c=1+noofSegments(x,y,z,n-z,dp);

dp[n]=max(a,max(b,c));
return dp[n];
} 

int noofSegmentsTab(int x,int y,int z,int n){
vi dp(n+1,INT_MIN);
dp[0]=0;
rep(i,1,n+1){
if(i-x>=0) dp[i]=max(dp[i],dp[i-x]+1);
if(i-y>=0) dp[i]=max(dp[i],dp[i-y]+1);
if(i-z>=0) dp[i]=max(dp[i],dp[i-z]+1);
}
if(dp[n]<0) return 0;
return dp[n];
} 

signed main()
{


int n,x,y,z;cin>>n>>x>>y>>z;
    vi dp(n+1,-1);
cout<<noofSegments(x,y,z,n);
 return 0;
} 