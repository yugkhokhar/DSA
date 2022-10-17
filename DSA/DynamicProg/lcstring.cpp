#include<bits/stdc++.h>

using namespace std;

const int N=1e3+2;
int dp[N][N];



int Longessubstring(string*s1,string*s2,int n,int m)
{
    if(n==0||m==0)
    return 0;
int mx=INT_MIN;
for (int i=1; i < n; i++)
{
    for (int j =1; j <m; j++)
    {
        if(s1[i-1]==s2[j-1])
        dp[i][j]=dp[i-1][j-1];

        if(dp[i][j]>mx)
        mx=dp[i][j];
        else{
            dp[i][j]=0;
        }
    }
    
}

return mx;


}


int main()
{
for (int i = 0; i < N; i++)
{
    for (int j= 0; j< N; j++)
    {
        dp[i][j]=0;
    }
}


    string s1,s2;
    cin>>s1>>s2;
    cout<<Longessubstring(&s1,&s2,s1.length(),s2.length());


    return 0;
}