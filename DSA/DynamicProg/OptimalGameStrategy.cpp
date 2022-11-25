#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;



int dp[100][100];
vector<int>a;


int solve(int i,int j){
    if(i==j) return a[i];
    
    if(i>j) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

int l=a[i]+min(solve(i+2,j),solve(i+1,j-1));
int r=a[j]+min(solve(i,j-2),solve(i+1,j-1));

return dp[i][j]=max(l,r);

}




int main(){


rep(i,0,100){
rep(j,0,100){
    dp[i][j]=-1;
}
}
int n;cin>>n;
a=vector<int>(n);

rep(i,0,n) cin>>a[i];

cout<<solve(0,n-1);



    return 0;
}