//In this the we need to find the min number of perfect square numbers 
//whose sum gives a number n;


#include<bits/stdc++.h>

using namespace std;

const int N=1e5+5;
int dp[N];
int dp1[N];
const int maxN=1e9+7;
int minsquare(int n)
{
if( !(n<0) && n<=3)
{
    return n;
}

if(dp[n]!=maxN)
{
    return dp[n];
}

for(int i=1;i*i<=N;i++)
{
  dp[n]=min(dp[n],1+minsquare(n-i*i));
}

return dp[n];
}



int main()
{

int n;
cin>>n;
for(int i=0;i<N;i++)
{
    dp[i]=maxN;
}

//tabulation
dp[n]=n;
dp[0]=0;
dp[1]=1;
dp[2]=2;
dp[3]=3;
for(int j=1;j*j<=n;j++)
{
    dp[n]=min(dp[n],1+dp[n-j*j]);
}

cout<<dp[n]<<endl;
//tabulation ends


cout<<minsquare(n)<<endl;

    return 0;
}
