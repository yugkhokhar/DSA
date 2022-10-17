#include<bits/stdc++.h>

using namespace std;

const int N=1e+3;
int dp[N][N];


int lcs(string *s1,string *s2,int size1,int size2)
{
    if(size1==0||size2==0)
    return 0;

if(dp[size1][size2]!=-1)
{
    return dp[size1][size2];
}
    else if(s1[size1-1] ==s2[size2-1])
    dp[size1][size2]= 1+lcs(s1,s2,size1-1,size2-1); 
else{
    dp[size1][size2]= max(lcs(s1,s2,size1,size2-1),lcs(s1,s2,size1-1,size2));
}
return dp[size1][size2];

}


int main()
{
for (int i = 0; i < N; i++)
{
    for (int j = 0; j < N; j++)
    {
    dp[i][j]=-1;            
    }

}


    string s1,s2;
    cin>>s1>>s2;
    cout<<lcs(&s1,&s2,s1.length(),s2.length());



    return 0;
}