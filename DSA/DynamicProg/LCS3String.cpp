#include<bits/stdc++.h>

using namespace std;

int dp[205][205][205];

int LcsString(string &s1,string &s2,string &s3,int i,int j,int k){

if(i==0 or j==0 or k==0) return 0;

if(dp[i][j][k]!=-1) return dp[i][j][k];

if(s1[i-1]==s2[j-1] and s3[k-1]==s2[j-1]) return dp[i][j][k]=1+LcsString(s1,s2,s3,i-1,j-1,k-1);

int firststring=LcsString(s1,s2,s3,i-1,j,k);
int secondstring=LcsString(s1,s2,s3,i,j-1,k);
int thirdstring=LcsString(s1,s2,s3,i,j,k-1);

return dp[i][j][k]= max({firststring,secondstring,thirdstring});
}


int main(){


    memset(dp,-1,sizeof(dp));


string s1,s2,s3;cin>>s1>>s2>>s3;

cout<<LcsString(s1,s2,s3,s1.size(),s2.size(),s3.size());
    return 0;
}