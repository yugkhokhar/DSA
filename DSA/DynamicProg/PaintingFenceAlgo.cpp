//RECURENCE REALTION 
//  SOLVE(N)=
//SAME
//SOLVE(N-2)*(K-1)
//DIFFERENT
//+SOLVE(N-1)*(K-1)







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
#define  MOD 100000007
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


int add(int a,int b){
    return (a%MOD+b%MOD)%MOD;
}

int multiply(int a,int b){
    return ((a%MOD)*(b%MOD))%MOD;
}

int PaintPartition(int n,int k){

if(n==1) return k;

if(n==2) return add(k,multiply(k,k-1));

int ans=add(multiply(PaintPartition(n-2,k),k-1),multiply(PaintPartition(n-1,k),k-1));

return ans;

}

int PaintPartitionMemo(int n,int k,vi &dp){

if(n==1) return k;

if(n==2) return add(k,multiply(k,k-1));
if(dp[n]!=-1) return dp[n];
dp[n]=add(multiply(PaintPartitionMemo(n-2,k,dp),k-1),multiply(PaintPartitionMemo(n-1,k,dp),k-1));

return dp[n];

}

int PaintPartitionTab(int n,int k){

vi dp(n+1,-1);
        dp[1]=k;
        dp[2]=add(k,multiply(k,k-1));

rep(i,3,n+1){
    dp[i]=add(multiply(dp[i-2],k-1),multiply(dp[i-1],k-1));
}

return dp[n];

}





signed main()
{

int n,k;cin>>n>>k;
    vi dp(n+1,-1);
    cout<<PaintPartitionMemo(n,k,dp);
 return 0;
}