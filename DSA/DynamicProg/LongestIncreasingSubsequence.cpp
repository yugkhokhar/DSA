#include<bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; i++)

using namespace std;
const int N=1e5+2;
int dp[N];

//memoisation 

int Lis(vector<int>&a,int n){

if(dp[n]!=-1){
    return dp[n];
}
dp[n]=1;
rep(i,0,n){
    if(a[n]>a[i])
         dp[n]=max(dp[n],1+Lis(a,i));
}

return dp[n];
}




int main(){

int n;cin>>n;
vector<int>dp(n,1);
vector<int>v(n);
for (int i = 0; i < n; i++)
{
    cin>>v[i];
}

rep(i,0,N) dp[i]=-1;
cout<<Lis(v,n-1);

int ans=INT_MIN;
for (int i = 1; i < n; i++)
{
    for (int j = 0; j < i; j++)
    {
        if(v[i]>v[j]){
            dp[i]=max(dp[i],1+dp[j]);
        }
    }
    ans=max(ans,dp[i]);
}

cout<<ans;




    return 0;
}