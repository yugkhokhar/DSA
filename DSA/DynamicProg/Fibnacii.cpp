//Nth fibonacci number
//create an array which can store the value of any nth fibonacci number 
//O(n)

#include<bits/stdc++.h>

using namespace std;

const int N=1e7+5;

int dp[N];

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
      if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
if(dp[n]!=-1)
{
    return dp[n];
}
dp[n]=fib(n-1)+fib(n-2);
return dp[n];
}


int main()
{

//memoisation
for(int i=0;i<N;i++)
{
    dp[i]=-1;
}

//tabulation 
int n;
cin>>n;
vector<int>dp1(n+1);
dp1[0]=0;
dp1[1]=0;
dp1[2]=1;
for(int i=3;i<=n;i++)
{
  dp[i]=dp1[i-1]+dp1[n-2];
}
cout<<dp[n]<<endl;

cout<<fib(n)<<endl;
 
 
 
 
 
 
 
    return 0;
}
