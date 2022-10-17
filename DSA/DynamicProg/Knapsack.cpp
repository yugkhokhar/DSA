


#include<bits/stdc++.h>

using namespace std;

const int N=1e3+5;
int weight[N];
int val[N];
int dp[N][N];
int Knapsack(int n,int w)
{
    if(w<=0)
     return 0;

     if(n<=0)
     return 0;

if(dp[n][w]!=-1)
 return dp[n][w];

     if(weight[n-1]>w)
     dp[n][w]=Knapsack(n-1,w);

     dp[n][w]=max(Knapsack(n-1,w-weight[n-1])+val[n-1],Knapsack(n-1,w));
return dp[n][w];
// checkthat if i wont to take it or not
}





int main()
{
int n;
cin>>n;

for(int i=0;i<N;i++)
{
         for(int j=0;j<N;i++)
       {
           dp[i][j]=-1;
       }
}
for(int i=0;i<n;i++)
   cin>>weight[i];
for(int i=0;i<n;i++)
   cin>>val[i];

int w;
cin>>w;
cout<<Knapsack(n,w)<<endl;

    return 0;
}
