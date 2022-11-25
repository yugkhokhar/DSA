
//

#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<limits.h>
#define ll long long
#define lli long long int
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





long long int CountTabulation(int n){

vi dp(n+1,-1);

dp[1]=0;
dp[2]=1;

rep(i,3,n+1){
    lli first=dp[i-1]%MOD;
    lli second=dp[i-2]%MOD;
    lli sum=(first+second)%MOD;
    dp[i]=((i-1)%MOD)*sum;

}
return dp[n];

}
long long int CountMemoisation(int n,vi &dp){


if(n==1) return 0;
if(n==2) return 1;

if(dp[n]!=-1) return dp[n];

dp[n]=((n-1)%N)*((CountMemoisation(n-1)%N)+(CountMemoisation(n-2)%N))%N;
return dp[n];



}



long long int CountDerangments(int n){

if(n==1) return 0;
if(n==2) return 1;

long long int ans=((n-1)%MOD)*((CountDerangments(n-1)%MOD)+(CountDerangments(n-2))%MOD);

return ans;
}



signed main()
{
int n;cin>>n;
 
 vi dp(n+1,-1);
 
 return 0;
}