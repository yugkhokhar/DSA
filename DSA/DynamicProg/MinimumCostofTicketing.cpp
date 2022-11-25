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
#define repr(i,a,b) for(int i=a;i>=b;i--) 
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


int MinumumCostRecursion(int n,vi &days,vi&cost,int idx){
  //BASE CASE
    if(idx>=n) return 0;

//OPTION 1 1-DAY PASS
int option1=cost[0]+MinumumCostRecursion(n,days,cost,idx+1);

//option 2 7-day pass
int i;
for(int i=idx;i<n&& days[i]<days[idx]+7;i++);
int option2=cost[1]+MinumumCostRecursion(n,days,cost,i);
//option 3 30-Day pass
for(int i=idx;i<n&& days[i]<days[idx]+30;i++);
int option3=cost[2]+MinumumCostRecursion(n,days,cost,i);


return min({option1,option2,option3});
}


int MinumumCostTicketMemoisation(int n,vi &days,vi&cost,int idx,vi&dp){
  //BASE CASE
    if(idx>=n) return 0;
if(dp[idx]!=-1) return dp[idx];
//OPTION 1 1-DAY PASS
int option1=cost[0]+MinumumCostRecursion(n,days,cost,idx+1);

//option 2 7-day pass
int i;
for(int i=idx;i<n&& days[i]<days[idx]+7;i++);
int option2=cost[1]+MinumumCostRecursion(n,days,cost,i);
//option 3 30-Day pass
for(int i=idx;i<n&& days[i]<days[idx]+30;i++);
int option3=cost[2]+MinumumCostRecursion(n,days,cost,i);

dp[idx]=min({option1,option2,option3});
return dp[idx];
}


// TC:O(N)
int MinumumCostTicketTabulation(int n,vi &days,vi&cost,int idx){
  //BASE CASE
    vi dp(n+1,INT_MAX);
    dp[n]=0;
repr(k,n-1,0){


//OPTION 1 1-DAY PASS
int option1=cost[0]+dp[idx+1];

//option 2 7-day pass
int i;
for(int i=k;i<n&& days[i]<days[k]+7;i++);
int option2=cost[1]+dp[i];
//option 3 30-Day pass
for(int i=k;i<n&& days[i]<days[k]+30;i++);
int option3=cost[2]+dp[i];

dp[k]=min({option1,option2,option3});
}
return dp[0];
}

signed main()
{
 int n;cin>>n;

 vi dp(n,-1),days(n),cost(3);
 rep(i,0,n) cin>>days[i];
 rep(i,0,3) cin>>cost[i];
cout<<MinumumCostTicketMemoisation(days.size(),days,cost,0,dp);
 return 0;
}