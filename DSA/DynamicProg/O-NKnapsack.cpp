#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>

using namespace std;

int main(){
int n;cin>>n;
vi dp(n,-1);
vi weight(n);
vi value(n);

rep(i,0,n) cin>>weight[i];  
rep(i,0,n) cin>>value[i];  

for (int i = 0; i<=W; i++)
{
    rep(j,0,n){ //all items 
        if(i-weight[j]>=0)
         dp[i]=max(dp[i],value[j]+dp[i-weight[j]])
    }
}
cout<<dp[W];

    return 0;
}