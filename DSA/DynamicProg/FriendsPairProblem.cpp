#include<bits/stdc++.h>

using namespace std;

int main(){

int n;cin>>n;

vector<int>dp(n+1);

dp[0]=1;
dp[1]=1;

for (size_t i = 2; i <=n; i++)
{
    dp[i]=dp[i-1]+(i-1)*dp[i-2];
}
cout<<dp[n];
    return 0;
}