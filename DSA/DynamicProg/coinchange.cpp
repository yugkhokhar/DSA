//in this we focus on include or exclude of a coin

#include<bits/stdc++.h>

using namespace std;

int coinchange(vector<int>&coins,int amount)
{
    int n=coins.size();
int dp[n+1][amount+1];
const int inf=1e5;
    for(int i=0;i<=n;i++)
    {
         for(int j=0;j<=n;j++)
         {
      if(j==0)
      {
          dp[i][j]=0;
      }
      else if(i==0)
      {
          dp[i][j]=inf;
      }
//exclude condition
      else if(coins[i-1]>j)
       {
           dp[i][j]=dp[i-1][j];
       }
       //include condtion
       else{
dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
       }

       return dp[n][amount]>1e4?-1:dp[n][amount];





         }
    }

}





int main()
{

    return 0;
}






